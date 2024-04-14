#include <cmath>
#include <iostream>
#include <string>
#include <vector>


#include "binary_search.h"
#include "types.h"


struct BinaryResult
{
  unsigned int found;
  unsigned short int index;
  unsigned short int rounds;
};


struct BinaryResult execute(
  std::vector<unsigned int> &unsorted,
  unsigned int search
) {

  unsigned short int min = 0;
  unsigned short int max = 0;
  unsigned short int mid = 0;
  unsigned short int rounds = 0;

  while (min <= max) {
    mid = short int(std::floor((min + max) / 2));

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
