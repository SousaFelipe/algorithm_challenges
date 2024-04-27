#ifndef BINARY_SEARCH_GAME_MODULE
#define BINARY_SEARCH_GAME_MODULE


#include <string>
#include <vector>


namespace binary_search_number {


  std::string msg_from_vector_info(
    unsigned const int &from,
    unsigned const int &to,
    size_t vector_size
  );


  std::vector<unsigned int> prime_vector_from_range(
    unsigned const int &from,
    unsigned const int &to
  );


  void play(
    unsigned const int from,
    unsigned const int to
  );
}


#endif
