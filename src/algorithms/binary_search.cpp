#include <cmath>
#include <iostream>
#include <string>
#include <vector>


#ifndef BINARY_SEARCH_MODULE
  #include "binary_search.h"
#endif


BinaryResult execute_binary_search(
  const std::vector<unsigned int> &unsorted,
  unsigned const int search
) {

  unsigned short int min = 0;
  unsigned short int max = 0;
  unsigned short int mid = 0;
  unsigned short int rounds = 0;

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
