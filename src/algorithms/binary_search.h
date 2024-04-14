#ifndef BINARY_SEARCH_MODULE
#define BINARY_SEARCH_MODULE
#endif


#include <vector>


#ifndef BINARY_RESULT
#define BINARY_RESULT

struct BinaryResult
{
  unsigned int found;
  unsigned short int index;
  unsigned short int rounds;
};

#endif


BinaryResult execute_binary_search(
  const std::vector<unsigned int> &unsorted,
  unsigned const int search
);
