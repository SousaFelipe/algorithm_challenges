use std::io::Write;
use rpassword;



pub fn show_menu(title: &str, items: &[&str], main_menu: bool) -> u32 {
  let full_title: String = String::from("Interative Rust CMD :: ") + title;
  
  println!("{}", full_title);
  println!("{}", "=".repeat(full_title.len()));

  display_options(items, main_menu);
  display_prompt();

  let mut choice: String = String::new();

  std::io::stdin()
    .read_line(&mut choice)
    .unwrap();

  println!("");

  match choice.trim().parse() {
    Ok(num) => num,
    Err(..) => 0
  }
}


pub fn display_prompt() {
  print!("\nEscolha a opção: ");
  std::io::stdout().flush().unwrap();
}


pub fn display_options(items: &[&str], main_menu: bool) {
  for (i, item) in items.iter().enumerate() {
    println!("{} - {}", i + 1, item);
  }
  println!("{}", if main_menu {"* - Exit"} else {"* - Back"});
}


pub fn clear_screen() {
  println!("{esc}c", esc=27 as char);
}


pub fn wait_any() {
  rpassword::prompt_password("Press any key to continue...").unwrap();
}
