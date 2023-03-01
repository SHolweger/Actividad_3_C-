#include <iostream>

using namespace std;
main() {
  //and (y) &&
  //or (o)  //

  char lapiz, lapicero, cuaderno;
  cout << "Trae Lapiz (s/n):";
  cin >> lapiz;
  cout << "Trae lapicero (s/n):";
  cin >> lapicero;
  cout << "Trae un cuaderno(s/n):";
  cin >> cuaderno;

  /*
   Puede entrar a mi clase si usted trae un lapiz y un Lapicere
   and (y) = el valor es verdadero si ambas son verdaderas
   puede entrar a mi clase si usted trae un lapiz o un lapicere
   or (o) = el valor es verdadero si por lo menos una es verdadera

  */

  //if (lapiz=='s' && lapicero=='s' )  
  if (lapiz == 's' || lapicero == 's' && cuaderno == 's') {
    cout << lapiz << endl;
    cout << "Ingresa" << endl;
  } else {
    cout << "Lo siento no puedes Ingresar" << endl;
  }

  system("pause");
}