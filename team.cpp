#include <iostream>
using namespace std;

int main()
{

  double x, y, r;
  cout << "Проверка попадания точки в круг (центр в 0,0)" << endl;
  cout << "Введите координату x: ";
  cin >> x;
  cout << "Введите координату y: ";
  cin >> y;
  cout << "Введите радиус круга R: ";
  cin >> r;

  if (r <= 0)
  {
    cout << "Ошибка: радиус должен быть положительным!" << endl;
    return 0;
  }

  double distance_sq = x * x + y * y;
  double radius_sq = r * r;

  if (distance_sq < radius_sq)
  {
    cout << "Точка (" << x << ", " << y << ") находится ВНУТРИ круга." << endl;
  }
  else if (distance_sq == radius_sq)
  {
    cout << "Точка (" << x << ", " << y << ") находится НА ГРАНИЦЕ круга." << endl;
  }
  else
  {
    cout << "Точка (" << x << ", " << y << ") находится СНАРУЖИ круга." << endl;
  }

  return 0;
}