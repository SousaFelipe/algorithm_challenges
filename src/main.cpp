#include <iostream>
#include <string>
#include <vector>


#include "./games/games.h"
#include "./utils/terminal.h"


int main() {

  std::vector<std::string> menu {
    "Binary Search",
    "Bubble Sort",
    "Selection Sort",
    "Insertion Sort"
  };

  unsigned int choice = 0;

  while (true) {
    terminal::clear_screen();

    choice = terminal::show_menu("Algorithm Challenges", menu, true);

    if (choice == 0) {
      break;
    }

    if (choice == 1) {
      games::play_binary_search_number(1, 300);
    }
  }

  return 0;
}
