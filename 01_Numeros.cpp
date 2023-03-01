#include <iostream>

using namespace std;
int main() {
  int num = 0;
  cout << "Ingrese Numero:";
  cin >> num;

  if (num > 0) { //>0
    cout << "Positivo" << endl;
  } else {
    if (num == 0) { // 0
      cout << "Neutro" << endl;
    } else { //0     
      cout << "Negativo" << endl;
    }
  }
  system("pause");
}