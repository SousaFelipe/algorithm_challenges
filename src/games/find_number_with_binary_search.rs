


use crate::algorithms::binary_search::execute;
use crate::utils::{is_prime, terminal};



pub fn play(from: u32, to: u32) {

  let primes: Vec<u32> = (from..=to)
    .filter(|p| is_prime(p))
    .collect();

  terminal::display_prompt(
    format!(
      "Choose a prime number between {} and {}: ",
      primes.first().unwrap(),
      primes.last().unwrap()
    )
  );

  let mut search: String = String::new();

  std::io::stdin()
    .read_line(&mut search)
    .unwrap();

  let search: u32 = match search.trim().parse() {
    Ok(num) => num,
    Err(..) => 0
  };

  println!("\nGenerated list of primes with {} numbers", primes.len());

  let (index, iterations, found) = execute(&primes, search);

  if found == 0 {
    println!("{} is not a prime number\n", search);
  }
  else {
    println!("Prime {} founded in index {} after {} iterations\n", found, index, iterations);
  }

  terminal::wait_any_key();
}
