#include <iostream>
int main() {
  double a, b, c;
  std::cout << "Введите первое число: ";
  std::cin >> a;
  std::cout << "Введите второе число: ";
  std::cin >> b;
  std::cout << "Введите третье число: ";
  std::cin >> c;
  double maximum;
  if (a >= b && a >= c) {
    maximum = a;
  } else if (b >= a && b >= c) {
    maximum = b;
  } else {
    maximum = c;
  }
  std::cout << "Максимум: " << maximum << "\n";

  return 0;
}