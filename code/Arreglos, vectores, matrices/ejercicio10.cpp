/*. Leer n números por teclado, donde n es ingresado por el usuario. La mitad de los números ingresados se 
almacenara en un arreglo A[ ], y la otra mitad en un arreglo B[ ]. Finalmente almacenar todos los números de 
A[ ] y B[ ] en un arreglo C[ ]. Visualizar los arreglo A[ ], B[ ] y C[ ] en pantalla.
Por ejemplo: sea n = 5, los valores ingresados son: 10, 2, 3, 5, 7
*/
#include <iostream>
using namespace::std;

int *A;
int u;
int *B;
int p;
int *C;
int n;


void leer();
void almacenar();
void imprimir();

void leer()
{
	cout<<"Ingrese la cantidad de datos que desea almacenar: ";
	cin>> n;
	int n_half = n / 2;
	A = new int [n_half];
	B = new int [n_half];
	cout<<"Ingrse los datos uno a la vez presionando enter despues de cada dato"<<endl;



	for(int i = 0; i < n; i++)
	{
		if(i <= (n/2)){
			cout<< "Ingrese el dato a "<< i <<": ";
			cin>> u;
			A[i] = u;	
		} else{
			cout<< "Ingrese el dato b "<< i <<": ";
			cin>> p;
			B[i] = p;

		}
	}

}
	
void almacenar()
{
	C = new int [n];
	for(int i = 0; i < n; i++){
		if(i <= (n/2)){
			C[i] = A[i];
		} else{
			C[i] = B[i];
		}
	}

}

void imprimir()
{
	for (int i = 0; i < n; i++){
		cout<<"En C[]: "<<C[i] <<", "<<endl;
	}
	

	
}


int main()
{
	leer();	
	almacenar();
	imprimir();
	return 0;
}