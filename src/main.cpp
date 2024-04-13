#include <iostream>
#include <string>
#include <vector>


#include "./utils/terminal.h"


int main() {

  std::vector<std::string> menu {
    "Binary Search",
    "Bubble Sort",
    "Selection Sort",
    "Insertion Sort"
  };

  unsigned short int choice;

  while (true) {
    clear_screen();

    choice = show_menu("Algorithm Challenges", menu, true);

    if (choice == 0) {
      break;
    }
  }
  

  return 0;
}
