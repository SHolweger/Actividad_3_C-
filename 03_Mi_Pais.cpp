#include <iostream>

using namespace std;
int main() {
  string pais = "";
  cout << "Ingrese Pais:";
  cin >> pais;

  if (pais == "guatemala") {
    cout << "yo soy de " << pais << " mi pais" << endl;
  } else {
    cout << pais << endl;
  }

  system("pause");
}