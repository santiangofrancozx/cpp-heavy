/*Leer dos rangos de valores y almacenar en un arreglo A[ ] los cuadrados de los números comprendidos en el 
rango leído. Visualizar el arreglo A[ ] en pantalla.
Por ejemplo: sea rangoInf = 5, ranfoSup = 10, A[ ] = {25, 36, 49, 64, 81, 100}*/
#include <iostream>
using namespace::std;

int *A;
int ni;
int nf;
int tam;
int cube;


void leer();
void sumatoria_rango();
void print();

void leer(){

	cout<< "Ingrese el rango de parida: ";
	cin>> ni;
	cout<< "Ingrese el rango final: ";
	cin>> nf;
	tam = (nf - ni);
	A = new int [tam];

}

void sumatoria_rango(){

	for(int x = 0; x <= tam; x++){
		cube = ni * ni;
		A[x] = cube;
		ni++;
	}
}

void print(){
	cout<< "Los cuadrados del rango son: {";
	for(int x = 0; x <= tam; x++){
		cout<< " "<<A[x] << ", ";
	}
	cout<< "}";
}

int main(){

	leer();
	sumatoria_rango();
	print();
	return 0;

}