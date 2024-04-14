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

    std::string prompt = "Choose a prime number between "+ std::to_string(from) +" and "+ std::to_string(to) +": ";
    std::vector<unsigned int> vector = prime_vector_from_range(from, to);

    std::cout << "\n" << "Generated list of primes with " << vector.size() << " numbers\n";

    unsigned int search = terminal::display_prompt(prompt, 3);
    std::vector<unsigned int> result = algorithms::execute_binary_search(vector, search);

    if (result[0] == 0) {
      std::cout << search << " is not a prime number\n";
    }
    else {
      std::cout << "Prime " << search
                << " founded in index " << result[1]
                << " after " << result[2]
                << " iterations\n";
    }

    terminal::wait_any_key();
  }
}
