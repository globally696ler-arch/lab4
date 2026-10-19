#include <iostream>

int main() {
  setlocale(LC_ALL, "Russian");
  double x, y, R;
  std::cout << "Введите радиус круга: ";
  std::cin >> R;
  std::cout << "Введите координаты точки (x y): ";
  std::cin >> x >> y;

  // Круг с центром в начале координат
  if (x * x + y * y <= R * R)
    std::cout << "Точка попадает в круг";
  else
    std::cout << "Точка не попадает в круг";

  return 0;
}