use crate::algorithms::insertion_sort;
use crate::utils::terminal;



pub fn play() {
  println!("");

  let mut vector: Vec<u32> = vec![8,5,1,78,66,19];

  println!("Before insertion..\n{:?}\n", vector);

  insertion_sort::execute(&mut vector);

  println!("After insertion...\n{:?}\n", vector);

  terminal::wait_any_key();
}
