/*Leer un arreglo A[ ] de enteros de tamaño n, donde n es ingresado por el usuario, y posteriormente llenar un
arreglo B[ ] con los valores de A[ ]. Visualizar el arreglo B[ ] en pantalla.
Por ejemplo: sea n = 5, A[ ] = {10, 2, 3, 5, 7},
 B[ ] seria, B[ ] = {10, 2, 3, 5, 7}*/
#include <iostream>
using namespace::std;

void leer();
void print();
void serie();

int n;
int *A;
int *B;

void leer(){

	cout<< "Ingrese en tamanio n: ";
	cin>> n;
	A = new int[n];
	B = new int[n];

}

void serie(){
	for(int x = 0; x < n; x++){

		A[x] = x;
		B[x] = A[x];
	}
}

void print(){
	for(int i = 0; i < n; i++){
		cout<<"B["<<i<<"] = "<<B[i]<<endl;
	}
}




int main(){
	leer();
	serie();
	print();
	return 0;

}





