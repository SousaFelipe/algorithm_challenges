#include <cmath>
#include <vector>


#include "binary_search.h"


namespace binary_search {


  Result execute(
    const std::vector<unsigned int> &unordered,
    unsigned const int search
  ) {

    unsigned int min = 0;
    unsigned int max = int(unordered.size() - 1);
    unsigned int mid = 0;
    unsigned int rounds = 0;

    while (min <= max) {
      mid = int(std::floor((min + max) / 2));

      if (unordered[mid] == search) {
        return { true, mid, rounds };
      }

      if (unordered[mid] < search) {
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
