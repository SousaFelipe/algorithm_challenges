#include "algorithms.h"


namespace algorithms {


  binary_search::Result execute_binary_search(
    const std::vector<unsigned int> &unsorted,
    unsigned const int search
  ) {
    return binary_search::execute(unsorted, search);
  }
}