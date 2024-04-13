#include <iostream>
#include <string>
#include <vector>


void clear_screen();


unsigned short int display_prompt(
  const std::string prompt,
  unsigned short int max_attempts = 3
);


void display_options(
  const std::vector<std::string> &items,
  bool main_menu
);


unsigned short int show_menu(
  const std::string title,
  const std::vector<std::string> &items,
  bool main_menu
);
