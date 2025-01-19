#include <iostream>
#include <vector>
int main(){
  int total_even = 0;
  int product_odd = 1;
  std::vector<int> vector;
  vector.push_back(2);
  vector.push_back(4);
  vector.push_back(3);
  vector.push_back(6);
  vector.push_back(1);
  vector.push_back(9);

  for (int i = 0; i < vector.size(); i++){
  
    if (vector[i] % 2 == 0){
      total_even = total_even + vector[i];
    }
    else {
      product_odd = product_odd * vector[i];
    }
  }
  std::cout<< total_even << "\n";
  std::cout<< product_odd << "\n";


















}