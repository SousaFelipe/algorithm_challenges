

#include "bubble_sort.h"


namespace bubble_sort {


  void swap(unsigned int &a, unsigned int &b) {
    unsigned int tmp = b;
    b = a;
    a = tmp;
  }


  void execute(std::vector<unsigned int> &unsorted) {
    size_t limit = unsorted.size();

    for (size_t i = 0; i < limit; i++) {
      for (size_t c = 0; c < limit; c++) {
        if (c + 1 == limit) break;

        if (unsorted[c] > unsorted[c + 1]) {
          swap(unsorted[c], unsorted[c + 1]);
        }
      }
    }
  }
}
