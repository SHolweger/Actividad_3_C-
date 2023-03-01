#include <iostream>
using namespace std;
int main(){
    int codigo = 0;
    cout<<"Ingrese codigo de area: ";
    cin>>codigo;

    /*trabajo con if
    if (codigo==502){
    cout<<"Guatemala";
    }
    if (codigo==503){
    cout<<"El salvador";
    }
    if (codigo==504){
    cout<<"Honduras";
    }
    if (codigo==505){
    cout<<"Nicaragua";
    }
    */
   
    /*Trabajo con switch*/
    switch(codigo){
        case 501:cout<<"Belice";break;
        case 502:cout<<"Guatemala";break;
        case 503:cout<<"El salvador";break;
        case 504:cout<<"Honduras"; break;
        case 505: cout<<"Nicaragua"; break;
        case 506: cout<<"Costa Rica"; break;
        case 507: cout<<"Panama"; break;
        default :
        cout<<"Este pais no es de centroamerica";
        break;
    }
}