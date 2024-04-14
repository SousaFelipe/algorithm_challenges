#include <iostream>
#include <string>
#include <vector>


#ifndef BINARY_SEARCH_MODULE
  #include "./algorithms/binary_search.h"
#endif

#ifndef BINARY_SEARCH_GAME_MODULE
  #include "./games/binary_search_number.h"
#endif

#ifndef TERMINAL_UTILS_MODULE
  #include "./utils/terminal.h"
#endif


int main() {

  std::vector<std::string> menu {
    "Binary Search",
    "Bubble Sort",
    "Selection Sort",
    "Insertion Sort"
  };

  unsigned int choice = 0;

  while (true) {
    clear_screen();

    choice = show_menu("Algorithm Challenges", menu, true);

    if (choice == 0) {
      break;
    }

    if (choice == 1) {
      play_binary_search_number(1, 300);
    }
  }

  return 0;
}
