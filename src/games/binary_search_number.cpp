#include <iostream>
#include <string>
#include <vector>


#include "../algorithms/algorithms.h"
#include "../utils/terminal.h"
#include "../utils/utils.h"


#include "binary_search_number.h"


namespace binary_search_number {


  std::vector<unsigned int> prime_vector_from_range(
    unsigned const int from,
    unsigned const int to
  ) {

    std::vector<unsigned int> vector = std::vector<unsigned int>();

    for (unsigned int n = from; n <= to; n++) {
      if (utils::is_prime(n)) {
        vector.push_back(n);
      }
    }

    return vector;
  }


  void play(
    unsigned const int from,
    unsigned const int to
  ) {

    std::vector<unsigned int> vector = prime_vector_from_range(from, to);

    std::string str_from = std::to_string(from);
    std::string str_to = std::to_string(to);
    std::string msg = "Choose a prime number between "+ str_from +" and "+ str_to;

    std::cout << "\n" << "Generated list of primes with " << vector.size() << " numbers\n";

    unsigned int search = terminal::display_prompt(msg, 3);
    binary_search::Result result = algorithms::execute_binary_search(vector, search);

    if (result.found) {
      std::cout << "Prime " << search
                << " founded in index " << result.index
                << " after " << result.rounds << " rounds!\n";
    }
    else {
      std::cout << search << " is not a prime number\n";
    }

    terminal::wait_any_key();
  }
}
