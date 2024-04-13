use crate::algorithms::selection_sort;
use crate::utils::terminal;



pub fn play() {
  println!("");

  let mut vector: Vec<u32> = vec![8, 5, 7, 2, 3, 6];

  println!("Unsorted vector..\n{:?}\n", vector);

  selection_sort::execute(&mut vector);

  println!("Sorted vector...\n{:?}\n", vector);

  terminal::wait_any_key();
}
