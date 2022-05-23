/* 
	3. Realice un programa que lea de la entrada estandar los siguientes datos de una persona:
	
	edad
	sexo
	altura en metros
	
	y luego los muestre
*/

#include <iostream>

using namespace std;

int main(){
	
	int Edad;float Altura;char Sexo[10];
	
	cout<<"Digite su edad: ";cin>>Edad;
	cout<<"Digite su altura en metros: ";cin>>Altura;
	cout<<"Digite su sexo: ";cin>>Sexo;
	
	cout<<"\nEdad: "<<Edad<<endl;
	cout<<"Altura en metros: "<<Altura<<endl;
	cout<<"Sexo: "<<Sexo<<endl;
	
	
	
	return 0;
}
