#include <iostream>
using namespace std;

int main() {
  int operacion;
  float one, two;
  cout << "Выберите действие: " << endl;
  cout << "1. Умножение." << endl;
  cout << "2. Деление." << endl;
  cout << "3. Сложение" << endl;
  cout << "4. Вычитание" << endl;
  cin >> operacion;
  cout << "Введите первое число: ";
  cin >> one;
  cout << "Введите второе число: ";
  cin >> two;
  switch(operacion) {
    case 1:
      cout << one * two;
      break;
    case 2:
      if (one != 0 && two != 0){
        cout << one / two;
        break;
      }
      else {
        cout << "На ноль не делят!";
        return 5;
      }
    case 3:
      cout << one + two;
      break;
    case 4:
      cout << one - two;
      break;
    default:
      cout << "ERROR" << endl;
    return 5;
  }
}
