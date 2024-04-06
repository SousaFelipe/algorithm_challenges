

use crate::algorithms::binary_search;
use crate::utils::{is_prime, terminal};


pub fn play(from: u32, to: u32) {

  let primes: Vec<u32> = (from..=to)
    .filter(|p| is_prime(p))
    .collect();

  terminal::display_prompt(
    format!("Choose a prime number between {} and {}: ", from, to)
  );

  let mut find: String = String::new();

  std::io::stdin()
    .read_line(&mut find)
    .unwrap();

  let find: u32 = match find.trim().parse() {
    Ok(num) => num,
    Err(..) => 0
  };

  println!("Generated list of primes with {} numbers\n", primes.len());

  let (index, iterations, found) = binary_search::execute(&primes, find);

  println!("Prime {} founded in index {} after {} iterations\n", found, index, iterations);

  terminal::wait_any();
}
