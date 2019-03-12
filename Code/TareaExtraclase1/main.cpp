#include <iostream>
#include "Node.h"
#include "List.h"
//#include "Collector"

using namespace std;

int main() {

    List lista;

    lista.newNode(10); //Nuevo
    lista.newNode(20); //Nuevo
    lista.newNode(40); //Nuevo

    lista.deleteNode(40);
    lista.deleteNode(20);

    lista.newNode(30);
    lista.newNode(50);
    lista.newNode(60);
    lista.newNode(70); //Nuevo

    lista.deleteNode(60);
    lista.deleteNode(30);
    lista.deleteNode(50);

    lista.newNode(80);
    lista.newNode(90);
    lista.newNode(100);
    lista.newNode(110); //Nuevo

}