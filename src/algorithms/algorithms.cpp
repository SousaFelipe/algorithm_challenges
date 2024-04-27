#include "algorithms.h"


namespace algorithms {


  binary_search::Result execute_binary_search(
    const std::vector<unsigned int> &sorted,
    unsigned const int search
  ) {
    return binary_search::execute(sorted, search);
  }


  void execute_bubble_sort(
    std::vector<unsigned int> &unsorted
  ) {
    return bubble_sort::execute(unsorted);
  }
}