pub mod terminal;


pub fn is_prime(num: &u32) -> bool {
  let limit: u32 = (*num as f64).sqrt() as u32;

  for n in 2..=limit {
    if num % n == 0 {
      return false
    }
  }

  true
}
