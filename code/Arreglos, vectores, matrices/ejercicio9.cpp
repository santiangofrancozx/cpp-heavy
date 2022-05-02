/*Llenar un arreglo A[ ] de enteros de tamaño n, donde n es ingresado por el usuario, con los resultados de una 
tabla de multiplicar de un numero X hasta n. X es ingresado por el usuario.
Por ejemplo: sea x = 3 y n = 5. 
Entonces A [ ] = {3, 6, 9, 12, 15}*/
#include<iostream>
using namespace::std;

int *A;
int n;
int x;
int print;

void leer();
void multiplicacion();
void imprimir();


void leer(){

	cout<< "Ingrese el tamanio de el arreglo: ";
	cin>> n;
	cout<< "Ingrese el numero de la tabla que desea hayar: ";
	cin>> x;
	A = new int [n];
}

void multiplicacion(){
	for(int i = 0; i <= n; i++){
		print = x * i;
		A[i] = print;

	}
}

void imprimir (){
	cout<<"La tabla de " << x <<" " <<"hasta " << n <<" es: " <<endl;
	for(int i = 0; i <= n; i++){
		cout<< A[i] <<endl;
	}
}

int main(){
	leer();
	multiplicacion();
	imprimir();
	return 0;
}