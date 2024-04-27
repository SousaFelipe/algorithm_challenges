#ifndef TERMINAL_UTILS_MODULE
#define TERMINAL_UTILS_MODULE


#include <string>
#include <vector>


namespace terminal {


  void clear_screen();


  void wait_any_key();


  std::string array_join(
    const std::vector<unsigned int> &array,
    const std::string joiner
  );


  unsigned int display_prompt(
    const std::string prompt,
    unsigned int max_attempts
  );


  void display_options(
    const std::vector<std::string> &items,
    bool main_menu
  );


  unsigned int show_menu(
    const std::string title,
    const std::vector<std::string> &items,
    bool main_menu
  );

}


#endif