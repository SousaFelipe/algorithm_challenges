use crate::utils::{middle_between, terminal};


use std::cmp::Ordering;
use rand::Rng;


pub fn play(from: u32, to: u32) {

  // Search range start index
  let mut min: u32 = from;

  // Search range final index
  let mut max: u32 = to;

  // First random number, generated between 1 and 100
  // This number is what the algorithm should get right
  let random: u32 = rand::thread_rng().gen_range(min..=max);
  
  loop {
    
    let guess: u32 = if min == max {
      // If min is equal to max, it means that a new guess does not
      // need to be calculated. This condition also prevents the fn
      // middle_between(min, max) from trying to calculate a number
      // with min and max being equal
      min
    }
    else {
      println!("Generating guess between {} and {}", min, max);
      // If min is different from max, it means that
      // a new guess must be calculated
      middle_between(min, max) as u32
    };

    match guess.cmp(&random) {
      Ordering::Equal => {
        println!("Congratulations, you guessed right: {}!\n", guess);
        terminal::wait_any();
        break
      },
      Ordering::Less => {
        println!("{} it's too small...\n", guess);
        // Updates the min start of the interval
        min = guess + 1;
      },
      Ordering::Greater => {
        println!("{} it's too big...\n", guess);
        // Updates the max final of the interval
        max = guess - 1;
      }
    }
  }
}
