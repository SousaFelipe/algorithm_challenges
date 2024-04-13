use crate::algorithms::bubble_sort;
use crate::utils::terminal;



pub fn play() {
  println!("");

  let mut vector: Vec<u32> = vec![10, 5, 30, 2, 65, 78, 94, 12, 17, 25];

  println!("Unsorted vector..\n{:?}\n", vector);

  bubble_sort::execute(&mut vector);

  println!("Sorted vector...\n{:?}\n", vector);

  terminal::wait_any_key();
}
