#ifndef BINARY_SEARCH_GAME_MODULE
#define BINARY_SEARCH_GAME_MODULE
#endif


#ifndef UTILS_MODULE
  #include "../utils/utils.h"
#endif

#ifndef TERMINAL_UTILS_MODULE
  #include "../utils/terminal.h"
#endif

#ifndef BINARY_SEARCH_MODULE
  #include "../algorithms/binary_search.h"
#endif


#include <vector>


std::vector<unsigned int> prime_vector_from_range(
  unsigned const int from,
  unsigned const int to
);


void play_binary_search_number(
  unsigned const int from,
  unsigned const int to
);
