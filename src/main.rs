pub mod algorithms;
pub mod games;
pub mod utils;



use games::{
  find_number_with_binary_search,
  inser_u32_with_insertion_sort,
  sort_vec_with_bubble_sort,
  sort_vec_with_selection_sort
};



fn main() {
  
  let menu = [
    "Binary Search",
    "Bubble Sort",
    "Selection Sort",
    "Insertion Sort"
  ];

  loop {
    utils::terminal::clear_screen();

    let choice: u8 = utils::terminal::show_menu("Algorithm Challenges", &menu, true);

    match choice {
      1 => find_number_with_binary_search::play(1, 100),
      2 => sort_vec_with_bubble_sort::play(),
      3 => sort_vec_with_selection_sort::play(),
      4 => inser_u32_with_insertion_sort::play(),
      _ => break
    }
  }
}
