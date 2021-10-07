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
  void insertion(int n);
  void update(int pos, int newElement);
  void deleteAt(int indice);
  void addEmpty(int numero)
};

void Inventario::capturaDatos(){
cout<<nombre<<" ";
cout<<brillo<<endl;
}

void Inventario::addEmpty(int numero){
	Link<int> *newLink;
	newLink = new Link<T>(val);
	newLink->next = head;
	head = newLink;
	size++;
}


void Inventario::insertion (int n){
 Link<int> *newLink, *p;
  if (empty()) {
		addEmpty(numero);
		return;
	}
	p = head;
	while (p->next != 0) {
		p = p->next;
	}

	newLink->next = 0;
	p->next = newLink;
	size++;
}

void Inventario::update (Link <int> *p,int newElement){
  Link<int> *newLink
 if (p == NULL) {
        printf("el previo nodo no puede ser NULL");
        return;
    }
    struct Link * newLink = (struct Link * ) malloc(sizeof(struct Link));
    newLink->data = newElement;
    newLink->next = p->next;
    p->next = newLink;
}
}

void Inventario::deleteAt (int indice){
  Link<int> *tmp = head;
  Link<int> *rmv;
  int count = 0;

   if(indice == 0){
        rmv = head; 
        head = tmp->next; 
        free(rmv); 
        return head;
    }

    if(indice == 1){
        rmv = head->next;
        head->next = tmp->next->next;
        free(rmv);
        return head;
    }

    if(indice == -1){
        
        while(count < len(head)-2){
            tmp = tmp->next;
            count += 1;
        }
        rmv = tmp->next;
        tmp->next = NULL;
        free(rmv);
        return head;
    }
    
    while(count < index-1){
        tmp = tmp->next;
        count += 1;
    }
    rmv = tmp->next;
    tmp->next = tmp->next->next;
    free(rmv);
    return head;


#endif 
