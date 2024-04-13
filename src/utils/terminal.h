#include <iostream>
#include <string>
#include <vector>



void clear_screen();


unsigned short int display_prompt();


void display_options(
  const std::vector<std::string> &items,
  bool main_menu
);


unsigned short int show_menu(
  const std::string title,
  const std::vector<std::string> &items,
  bool main_menu
);
