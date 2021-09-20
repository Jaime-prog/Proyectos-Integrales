// Jaime Lopez Hernandez -A00571842

#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <string.h>
#include <cstring>
#include <vector>
#include <sstream>
#include <stdio.h>

ifstream archLeer;
ofstream archEscribir;

#include "Inventario.h"
Inventario arreglo [500];
int tamano;


void ordenar(char arr[][50], int n){
   int i, j, indice;
   char min[50];
   for (i = 0; i < n-1; i++){
      // Determinar el elemento mas chico en el arreglo
      int indice = i;
      strcpy(min, arr[i]);
      for (j = i + 1; j < n; j++){
         //checar si el minimo es mayor al indice de j
         if (strcmp(min, arr[j]) > 0){

            strcpy(min, arr[j]);
            indice = j;
         }
      }

      //Hacer el intercambio entre el minimo y el primer elmento
      if (indice != i){
         char temp[50];
         strcpy(temp, arr[i]); 
         strcpy(arr[i], arr[indice]);
         strcpy(arr[indice], temp);
      }
   }
}


int main() {

  // Asegurarse que el archivo exista
 archLeer.open("monitores.txt");
    if (!archLeer)
    {
        cout<<"El archivo no se puede leer"<<endl;
        //Terminar el programa
        exit(0); 
    }
    cout<<"El archivo fue abierto con exito"<<endl;

     cout<<endl;

     tamano=0;

    // Captura de datos
     while(!archLeer.eof()){
        archLeer>>arreglo[tamano].nombre;
        archLeer>>arreglo[tamano].brillo;

        tamano++;
     }
      //Imprimir Datos
    for (int i=0;i<tamano;i++){
      arreglo[i].capturaDatos();
    }

    char arregloMonitores[][50] = {"ViewSonic", "Samsung", "LG" ,"Lenovo","BenQ","Cooler","Dell", "EIZO"};
    int n = sizeof(arregloMonitores)/sizeof(arregloMonitores[0]);
    ordenar(arregloMonitores, n);
    cout << endl;

    for (int i = 0; i < n; i++)
        cout << arregloMonitores[i] << endl;
    return 0;
}
