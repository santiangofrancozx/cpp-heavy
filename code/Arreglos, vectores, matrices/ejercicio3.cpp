/*Llenar un arreglo de enteros de tamaño n, donde n es ingresado por el usuario con la siguiente serie numérica:
1, -3, 5, -7, 9, -11, 13, -15, ….. hasta completar el tamaño el arreglo.*/

#include <iostream>
using namespace::std;

void print_comprobation();

int n;
int c;
int four = 2;



void print_comprobation(){

    cout<< "Ingrese el tamanio del arreglo impares negativos: ";
    cin>> n;
    int m = 0;
    int array[n];

    for(int x = 1; x < (n + 11); x++){

        if(x % 2 != 0){
            if(m % 2 != 0){
                array[m] = x * -1;
                cout<< array[m] <<", ";
                m += 1;

            } else {
                array[m] = x;
                cout<< array[m] <<", ";
                m += 1;
            }
        }

    
    }

}


int main() {
    print_comprobation();
    return 0;
}