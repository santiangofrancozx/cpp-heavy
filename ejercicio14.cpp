/*14. Llenar una matriz A[ ][ ] de tipo String de tamaño n x m, donde n y m son ingresados por el usuario, ambos
impares y n > m, de tal forma que al imprimir A[ ][ ] se visualice por pantalla una pirámide rellena girada
hacia la derecha.
Por ejemplo; suponga que n = 5 y m = 3, entonces
  0 1 2
0 *
1 * *
2 * * *
3 * *
4 *
*/

#include <iostream>
using namespace::std;
#include <cmath>
int filas = 0;
int columnas = 0;
char** matriz;

void input(){
	cout<< "Ingrese la cantidad de filas: ";
	cin>> filas;10
    
	cout<< "Ingrese la cantidad de columnas: ";
	cin>> columnas;
	matriz = new char*[filas];
	for(int x = 0; x < filas; x++){
		matriz[x] = new char[columnas];
	}
} 


void limpiar(){
    for(int f = 0; f < filas; f++){
        for(int c = 0; c < columnas; c++){
            matriz[f][c] = ' ';//inicializar cada posición de la matriz en cero
        }
    }
}

void rellenar(){
	limpiar();
	int mitad = int (sqrt((filas*filas)+(columnas*columnas)));
	for(int f = 0; f < filas; f++){
		for(int c = 0; c < columnas; c++){
			if(f + c == mitad){
				matriz[f][c] = '*';
			}
		}
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
