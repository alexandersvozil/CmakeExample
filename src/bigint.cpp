#include "bigint.h"
#include <vector>

BigInt::BigInt(){
}

BigInt::BigInt(vector<unsigned long long>& h){
  vec=h;
}


vector<unsigned long long> BigInt::get_vec() {
  return this->vec;
}

void BigInt::set_vec(vector<unsigned long long> &v) {
    vec = v;
}

std::ostream& operator<<(std::ostream& o, BigInt& b){
  auto vector = b.get_vec();
  for (auto x : vector){
    o << x << std::endl;

  }
  return o;
}
 


