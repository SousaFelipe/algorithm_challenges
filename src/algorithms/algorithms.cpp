#include "algorithms.h"


namespace algorithms {


  binary_search::Result execute_binary_search(
    const std::vector<unsigned int> &unordered,
    unsigned const int search
  ) {
    return binary_search::execute(unordered, search);
  }
}