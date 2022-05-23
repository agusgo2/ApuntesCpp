//1. escribir un programa en el que el usuario inserte 2 numeros y se realicen las operaciones basicas

#include <iostream>

using namespace std;

int main(){

    int n1, n2, suma=0, resta=0, multiplicacion=0, division=0;

    cout<<"Digite un numero: "; cin>>n1; //puedo poner varias acciones en una linea si pongo puntos y coma

    cout<<"Digite un numero: "; cin>>n2; //en estas dos lineas lo que hice fue que el usuario muestre los numeros con los que se va a operar

    suma = n1+n2;
    resta = n1-n2;
    multiplicacion = n1*n2;
    division = n1/n2;
    
    cout<<"la suma es: "<<suma<<endl;
    cout<<"la resta es: "<<resta<<endl;
    cout<<"la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"la division es: "<<division<<endl;

    return 0;

}
