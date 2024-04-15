#include <iostream>
#include <string>
#include <vector>


#include "../algorithms/algorithms.h"
#include "../utils/terminal.h"
#include "../utils/utils.h"


#include "binary_search_number.h"


namespace binary_search_number {


  std::string msg_from_vector_info(
    unsigned const int &from,
    unsigned const int &to,
    size_t vector_size
  ) {

    std::string str_from = std::to_string(from);
    std::string str_to = std::to_string(to);
    std::cout << "\n" << "Generated list of primes with " << vector_size << " numbers\n";

    return "Choose a prime number between "+ str_from +" and "+ str_to;
  }


  std::vector<unsigned int> prime_vector_from_range(
    unsigned const int &from,
    unsigned const int &to
  ) {

    std::vector<unsigned int> primes = std::vector<unsigned int>();

    for (unsigned int n = from; n <= to; n++) {
      if (utils::is_prime(n)) {
        primes.push_back(n);
      }
    }

    return primes;
  }


  void play(
    unsigned const int from,
    unsigned const int to
  ) {

    std::vector<unsigned int> primes = prime_vector_from_range(from, to);

    std::string msg = msg_from_vector_info(from, to, primes.size());
    unsigned int search = terminal::display_prompt(msg, 3);
    binary_search::Result result = algorithms::execute_binary_search(primes, search);

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
