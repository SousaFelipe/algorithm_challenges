#include <vector>


#include "binary_search.h"
#include "bubble_sort.h"


namespace algorithms {

  binary_search::Result execute_binary_search(
    const std::vector<unsigned int> &sorted,
    unsigned const int search
  );


  void execute_bubble_sort(std::vector<unsigned int> &unsorted);
}
