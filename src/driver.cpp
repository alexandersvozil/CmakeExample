#include <iostream>
#include "bigint.h"

int main(int argc, char* argv[]){
// std::cout << "test" << std::endl;
  BigInt b;
  std::vector<unsigned long long> vec;
  vec.push_back(123123123123L);
  vec.push_back(12999123123123L);
  vec.push_back(123123L);
  vec.push_back(123123L);
  vec.push_back(123123L);
  vec.push_back(123123L);
  vec.push_back(123123L);
  b.set_vec(vec);
  std::cout << b << std::endl;

}
