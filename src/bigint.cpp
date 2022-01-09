#include "bigint.h"
#include <vector>

BigInt::BigInt(){
}

BigInt::BigInt(vector<unsigned long long>& h){
  vec=h;
}


vector<unsigned long long> BigInt::get_vec() {
  return vec;
}

void BigInt::set_vec(vector<unsigned long long> &v) {
    vec = v;
}

std::ostream& operator<<(std::ostream& o, const BigInt& b){
  
  for (auto x : b.vec){
    o << x << std::endl;

  }
  return o;
}
 


