#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;
  std::cout <<"Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout <<"Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout <<"Enter number of Peruvian Soles: ";
  std::cin >> soles;
  // 1 Pesos is 0.048 dollars
  // 1 Reais ia 0.16372 dollars
  // 1 Soles is 0.26 dollars

  dollars = (0.048 * pesos) + (0.16372 * reais) + (0.26 * soles);
  std::cout <<"Total USD = $ " << dollars << "\n";

  
}