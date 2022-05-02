#include<iostream>
using namespace::std;
#include<ctime>//time
#include<cstdlib>//srand, rand
#include<conio.h>//srand, rand

int *valores;
int tam;

void leer_tam();
void llenar();
void imprimir();
void limpiar();
void frecuencia();

void leer_tam(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;
    valores = new int[tam];
}

void imprimir(){
    for(int i = 0; i < tam; i++){
        cout<<"valores["<<i<<"] = "<<valores[i]<<endl;
    }
}

void limpiar(){
    for(int i = 0; i < tam; i++){
        valores[i] = 0;
    }
}

void llenar(){
    srand(time(NULL));
    for(int i = 0; i < tam; i++){
        valores[i] = 1 + rand() % 100;
    }
}

void frecuencia(){
    int valor_buscar, cont = 0;
    cout<<"Ingrese el valor a buscar: ";
    cin>>valor_buscar;
    for(int i = 0; i < tam; i++){
        if(valor_buscar == valores[i]){
            cont++;
        }
    }
    cout<<"El valor "<<valor_buscar<<" esta "<<
        cont<<" veces"<<endl;
}

int main(){
    leer_tam();
    limpiar();
    llenar();
    imprimir();
    frecuencia();
    return 0;
}

