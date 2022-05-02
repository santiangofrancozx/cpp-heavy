#include <iostream>
using namespace::std;

int *A;
int n;
int pos;

 void leer();
 void serie();
 void print();

 void leer(){

 	cout<< "Inserte el tamaño del arreglo n: ";
 	cin>> n;
 	A = new int [n];
 }

 void serie(){

 	for(int i = 0; i < (n + 11); i++){
 		if(i % 2 == 0 && i != 0){
 			A[pos] = i;
 			pos++;
 		}

 	}
 }

 void print(){

 	for(int x = 0; x < n; x++){
 		cout<< "Los n primeros numeros pares son: ";
 		cout<< "A["<<x<<"] = " << A[x] <<endl;
 	}
 }

 int main(){
 	leer();
 	serie();
 	print();
 	return 0;
 }