// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
uint64_t count = 0;
  for (int i = 2; i*i <= value; ++i) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t res = 0, number = 0;
    for (uint64_t i = 2; number < n; i++)
        if (checkPrime(i)) {
            res = i;
            number++;
        }
    return res;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  for(uint64_t n=++value;;n++){
    if(checkPrime(n)==true)
      return n;
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum=0;
  for(uint64_t n=2;n<hbound;n++)
    if(checkPrime(n))
      sum+=n;
  return sum;
}
