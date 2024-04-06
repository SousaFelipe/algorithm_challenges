pub mod algorithms;
pub mod games;
pub mod utils;


use games::{
  find_number_in_prime_vector,
  guess_number_with_binary_search
};


fn main() {
  let menu: [&str; 2] = ["Automatic guess game", "Prime number inside vector"];

  loop {
    utils::terminal::clear_screen();

    let choice: u8 = utils::terminal::show_menu("Main Menu", &menu, true);

    match choice {
      1 => guess_number_with_binary_search::play(1, 100),
      2 => find_number_in_prime_vector::play(1, 1000),
      _ => break
    }
  }
}
