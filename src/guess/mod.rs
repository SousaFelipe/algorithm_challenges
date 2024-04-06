use crate::utils::{range::Range, terminal};

use std::cmp::Ordering;
use rand::Rng;


pub fn play_auto_guess_game() {
  let mut range: Range = Range::new(1, 100);

  // First random number, generated between 1 and 100
  // This number is what the algorithm should get right
  let random: u8 = rand::thread_rng()
    .gen_range(range.min..=range.max);
  
  loop {
    
    let guess: u8 = if range.min == range.max {
      // If min is equal to max, it means that a new guess does
      // not need to be generated. This condition also prevents the
      // application crash, preventing gente_range(min..=max) from
      // trying to generate a number with min and max being equal
      range.min
    }
    else {
      println!("Generating guess between {} and {}", range.min, range.max);
      // If min is different from max, it means that
      // a new guess must be generated
      rand::thread_rng().gen_range(range.min..range.max)
    };

    match guess.cmp(&random) {
      Ordering::Equal => {
        println!("Congratulations, you guessed right: {}!\n", guess);
        terminal::wait_any();
        break;
      },
      Ordering::Less => {
        println!("{} it's too small...\n", guess);
        // Get new Range with a new min value
        range = range.with_min(guess + 1);
      },
      Ordering::Greater => {
        println!("{} it's too big...\n", guess);
        // Get new Range with a new max value
        range = range.with_max(guess - 1);
      }
    }
  }
}