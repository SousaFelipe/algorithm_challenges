#include <cmath>
#include <vector>


#include "binary_search.h"


namespace binary_search {


  Result execute(
    const std::vector<unsigned int> &sorted,
    unsigned const int search
  ) {

    unsigned int min = 0;
    unsigned int max = int(sorted.size() - 1);
    unsigned int mid = 0;
    unsigned int rounds = 0;

    while (min <= max) {
      mid = int(std::floor((min + max) / 2));

      if (sorted[mid] == search) {
        return { true, mid, rounds };
      }

      if (sorted[mid] < search) {
        min = mid + 1;
      }
      else {
        max = mid - 1;
      }

      rounds++;
    }

    return { false, 0, rounds };
  }
}
