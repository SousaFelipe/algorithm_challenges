pub mod guess;
pub mod utils;
pub mod vector;


fn main() {
  let menu: [&str; 2] = ["Automatic guess game", "Vector binary search"];

  loop {
    utils::terminal::clear_screen();

    let choice: u8 = utils::terminal::show_menu("Main Menu", &menu, true);

    match choice {
      1 => guess::play_auto_guess_game(),
      2 => vector::binary_search(),
      _ => break
    }
  }
}
