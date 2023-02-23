// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if(value<1) return false;
  else {
    for(uint64_t n=2;n<value;n++){
      if(value%n==0){
        return false;
        break;
      }
      }
  }
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  for(num = 1;num<=n;num++){
  uint64_t count = 0;
      for(i=2;i<=num/2;i++){
         if(checkPrime(i)){
         count++;
         break;
      }
   }
   if(count==0 && num!= 1)
    return (num);
   }
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  for(uint64_t n=++value;;n++){
    if(checkPrime(n))==true)
      return n;
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum=0;
  for(uint64_t n=2;n<hbound;n++){
    if(checkPrime(n))
      sum+=n;
  return sum
  }
}
