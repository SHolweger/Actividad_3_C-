#include <iostream>

using namespace std;
int main() {
  int n1 = 0, n2 = 0, n3 = 0, promedio = 0;
    cout << "Ingrese nota 1: ";
  cin >> n1;
  cout << "Ingrese nota 2: ";
  cin >> n2;
  cout << "Ingrese nota 3: ";
  cin >> n3;

  promedio = (n1 + n2 + n3) / 3;
  string mensaje = "";
  mensaje = promedio >= 61 ? "Aprobado" : "Reprobado";
  cout << "Su promedio es de: " << promedio << ". Por lo tanto  " << mensaje << endl;

  if (promedio >= 0 && promedio < 61) {
    cout << "Mala Nota";
  }
  if (promedio >= 61 && promedio < 81) {
    cout << "Buena nota";
  }
  if (promedio >= 81) {
    cout << "Excelente Nota";
  }

  system("pause");
}