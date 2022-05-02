/*Llenar un arreglo de enteros de tamaño n, donde n es ingresado por el usuario con la siguiente serie numérica:
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, ….. hasta completar el tamaño el arreglo.*/
#include <iostream>
//#include <vectors>, intentar usar vectores.
using namespace::std;

void leer_imprimir();

void leer_imprimir(){
    int leng;
    
    cout<< "Ingrese el tamanio de la serie: ";
    cin>> leng;
    int tamanio[leng];
    //definimos n para evitar que la multiplicacion por -1 cree un bucle infinito.
    int n;

    for(int i = 1; i <= leng; i++){
        //comprobacion de pares, se imprimen negativos.
        if(i % 2 == 0){
            //incluimos n asi evitamos cambiar la variable i a un negativo
            n = i * -1;
            //aqui le asignamos a el arrgelo n en la posicion i, evitando alterar el arreglo.
            tamanio[i] = n;
            cout<< tamanio[i] <<", ";
        // cuando son impares, se impimen positivos.
        } else {
            tamanio[i] = i;
            cout<<tamanio[i] <<", ";
        }

    }

}

int main() {
    leer_imprimir();
    return 0;
}
