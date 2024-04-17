#ifndef TERMINAL_UTILS_MODULE
#define TERMINAL_UTILS_MODULE
#endif


#include <string>
#include <vector>


namespace terminal {


  std::string rept_char(
    const char c,
    unsigned const short int times
  );


  void clear_screen();


  void wait_any_key();


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
