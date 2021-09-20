#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>
using namespace std;

#include <iostream>
using namespace std; 
#include <string>
#include <vector>

class Inventario{
  public:
  string nombre, brillo;

  void capturaDatos();
  void ordenar(char arr[][500], int n);
  void bubbleSort(string arreglo[], int longitud);
};

void Inventario::capturaDatos(){
cout<<nombre<<" ";
cout<<brillo<<endl;
}


#endif 