#include <iostream>

int main() {
  int y = 0;
  std::cout <<"Enter year:";
  std::cin >> y;
  if (y < 1000 || y > 9999){
    std::cout << "Year is invalid \n";
  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
    std::cout <<"Year is a Leap year \n";
  }
  else {
    std::cout <<"Year is not a Leap year \n";
  }
}