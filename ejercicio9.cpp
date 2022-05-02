/*9. Llenar una matriz A[ ][ ] de enteros de tamaño n x m, donde n y m son ingresados por el usuario de tal forma 
que se asigne el borde exterior en 1, y aumente su valor en 1 hacia el interior.
Por ejemplo; suponga que n = 5 y m = 5, entonces
0 1 2 3 4
0 1 1 1 1 1
1 1 2 2 2 1
2 1 2 3 2 1
3 1 2 2 2 1
4 1 1 1 1 1*/
#include <iostream>
using namespace::std;

int filas = 0;
int columnas = 0;
int **matriz;

void input(){
	cout<< "Ingrese la cantidad de filas: ";
	cin>> filas;
	cout<< "Ingrese la cantidad de columnas: ";
	cin>> columnas;
}

void limpiar(){
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            matriz[f][c] = 0;//inicializar cada posición de la matriz en cero
        }
    }
}

void rellenar(){
	int contador = 1;
	int ff = 0;
	int cc = 0;
	int columns = columnas;
	int fils = filas;
	matriz = new int*[filas];
	for(int z = 0; z < filas; z++){
		matriz[z] = new int [columnas];
	}
	limpiar();
	for(int h = 0; h < int(filas/2) + 1; h++){
		for(int g = 0; g < int(columnas/2) + 1; g++){
			for(int f = ff; f < fils; f++){
				for(int c = cc; c < columns; c++){
					matriz[f][c] = contador;
				}
			}
		}

		contador++;
		fils--;
		columns--;
		ff++;
		cc++;
	}
}

void imprimir_matriz(){
	for(int f = 0; f < filas; f++){
		for(int c = 0; c < columnas; c++){
			cout<<matriz[f][c]<<" ";
		}
		cout<<endl; //cout<<"\n";
	}

}

int main(){
	input();
	rellenar();
	imprimir_matriz();
	return 0;

}
