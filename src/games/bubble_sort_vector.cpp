#include "bubble_sort_vector.h"


namespace bubble_sort_vector {


  void play() {
    std::vector<unsigned int> unsorted = { 78, 25, 9, 15, 99, 2 };

    std::cout << "Vector: ["
              << terminal::array_join(unsorted, ", ")
              << "], before\n";
    
    algorithms::execute_bubble_sort(unsorted);

    std::cout << "Vector: ["
              << terminal::array_join(unsorted, ", ")
              << "], after\n";

    terminal::wait_any_key();
  }
}
