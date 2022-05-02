/*Leer un arreglo A[ ] de enteros de tamaño n, donde n es ingresado por el usuario, y posteriormente llenar un
arreglo B[ ] con los valores de A[ ] en forma inversa (de atrás hacia adelante). Visualizar el arreglo B[ ] en
pantalla.
Por ejemplo: sea n = 5, A[ ] = {10, 2, 3, 5, 7},
 B[ ] seria, B[ ] = {7, 5, 3, 2, 10}*/

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

	}
}
/*void serieB(){
	for(int x = 0; x < n; x++){
		for(int z = n; z > 0; z--){
			B[x] = A[z];

		}

	}
}*/ 

void serieB(){
	for(int x = 0; x < n; x++){

		B[x] = A[n - (x + 1)];
		
		
	}
}

void print(){
	for(int i = 0; i < n; i++){
		cout<<"La serie inicial es: " <<"A["<<i<<"] = "<<A[i]<<endl;
	}
	for(int i = 0; i < n; i++){
		cout<<"La serie invertida es: " <<"B["<<i<<"] = "<<B[i]<<endl;
	}
}




int main(){
	leer();
	serie();
	serieB();
	print();
	return 0;

}
