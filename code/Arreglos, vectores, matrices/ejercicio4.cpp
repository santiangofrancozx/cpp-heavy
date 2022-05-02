/*Llenar un arreglo de enteros de tamaño n, donde n es ingresado por el usuario con la siguiente serie numérica:
1, 2, 4, 8, 16, 32, 64, 128, ….. hasta completar el tamaño el arreglo.*/

#include <iostream>
using namespace::std;

// concepto f(x) = 2x

//variable de entrada
int input;

int c = 1;



void serie_doble();
//variable de salida f(x) o y
int output;


void serie_doble(){

	cout<< "Ingrese el tamanio de la serie: ";
	cin>> input;
	int array[input];

	for(int x = 0; x < input; x++){
			c += c ;
			array[x] = c;
			cout<< array[x] <<endl;
			
	}


}

int main(){
	serie_doble();
	return 0;
}