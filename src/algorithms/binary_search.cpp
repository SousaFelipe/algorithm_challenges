#include <cmath>
#include <iostream>
#include <string>
#include <vector>


#include "binary_search.h"


namespace binary_search {


  std::vector<unsigned int> execute(
    const std::vector<unsigned int> &unsorted,
    unsigned const int search
  ) {

    unsigned int min = 0;
    unsigned int max = 0;
    unsigned int mid = 0;
    unsigned int rounds = 0;

    while (min <= max) {
      mid = int(std::floor((min + max) / 2));

      if (unsorted[mid] == search) {
        return { unsorted[mid], mid, rounds };
      }

      if (unsorted[mid] < search) {
        min = mid + 1;
      }
      else {
        max = mid - 1;
      }

      rounds++;
    }

    return { 0, 0, rounds };
  }
}
