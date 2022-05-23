/*operaciones matematicas y expresiones

	escribir la siguiete expresion: (a/b)+1
*/

#include <iostream>

using namespace std;

int main(){
	
	float a, b, Resultado = 0;
	
	cout<<"Digite valor de a: ";cin>>a;
	cout<<"Digite valor de b: ";cin>>b;
	
	Resultado = (a/b)+1;
	
	cout.precision(3); //indica cuantos numeros despues de la coma se mostraran como maximo
	
	cout<<"\nEl resultado es: "<<Resultado<<endl;
	
	
	return 0;
}
