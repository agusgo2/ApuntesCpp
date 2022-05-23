//2. Escribir un programa que de la entrada del precio de un producto y luego te imprima el precio del producto mas el IVA

#include <iostream>

using namespace std;

int main(){
	
	float precio, IVA,precioFinal;
	
	cout<<"Digite el precio del producto: ";cin>>precio;
	
	IVA = precio*0.21;precioFinal = precio+IVA;
	
	cout<<"\nEl precio final sera de: "<<precioFinal<<endl;
	
	return 0;
}
