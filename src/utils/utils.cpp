#include <cmath>


#include "utils.h"


bool is_prime(unsigned int &num) {

  if (num < 2) {
    return false;
  }

  for (unsigned int i = 2; i <= int(sqrt(num)); i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}
