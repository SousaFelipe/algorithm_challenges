#include <iostream>
#include <string>
#include <vector>


#include "terminal.h"


namespace terminal {


  void clear_screen() {
    #if defined _WIN32
      system("cls");
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
      system("clear");
    #elif defined (__APPLE__)
      system("clear");
    #endif
  }


  void wait_any_key() {
    char c;
    std::cout << '\n' << "Press any to continue...";
    std::cin >> c;
    std::cin.clear();
  }


  unsigned int display_prompt(
    const std::string prompt,
    unsigned int max_attempts
  ) {

    unsigned int input;
    unsigned int attpt;

    while (true) {
      
      std::cout << "\n" << prompt << ": ";
      std::cin >> input;

      if (!std::cin.fail() || attpt == max_attempts) {
        break;
      }
      else {
        std::cin.clear();
        std::cin.ignore(65535, '\n');
      }
      
      attpt++;
    }

    return input;
  }


  void display_options(
    const std::vector<std::string> &items,
    bool main_menu
  ) {
    unsigned short int i;

    for (i = 0; i < items.size(); i++) {
      std::cout << (i + 1) << " - " << items[i] << "\n";
    }

    if (main_menu) {
      std::cout << "* - Exit\n";
    }
    else {
      std::cout << "* - Back\n";
    }
  }


  unsigned int show_menu(
    const std::string title,
    const std::vector<std::string> &items,
    bool main_menu
  ) {

    const std::string full_title = "Interative C++ CMD :: " + title;
    unsigned short int i;

    std::cout << full_title << "\n";

    for (i = 0; i < full_title.length(); i++) {
      std::cout << "=";
    }

    std::cout << "\n";

    display_options(items, main_menu);
    
    return display_prompt("Choose an option", 3);
  }
}
