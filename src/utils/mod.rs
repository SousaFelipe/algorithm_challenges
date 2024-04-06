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


pub fn middle_between(min: u32, max: u32) -> usize {
  let sum: u32 = min + max;
  f64::from(sum / 2).floor() as usize
}
