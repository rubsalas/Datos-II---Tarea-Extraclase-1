
#include <iostream>

#include "List.h"

using namespace std;

/**
 * Edgar Gonzales - 2018156158
 * Ruben Salas - 2017164846
 */

/**
 * Main del programa.
 *
 * @since 07/03/19.
 */
int main() {

    //Se crea una lista.
    List lista;

    //Se ingresan nodos a la lista.
    lista.newNode(10); //Nuevo
    lista.newNode(20); //Nuevo
    lista.newNode(40); //Nuevo

    //Se eliminan nodos de la lista.
    lista.deleteNode(40);
    lista.deleteNode(20);

    //Se ingresan nodos a la lista.
    lista.newNode(30);
    lista.newNode(50);
    lista.newNode(60);
    lista.newNode(70); //Nuevo

    //Se eliminan nodos de la lista.
    lista.deleteNode(60);
    lista.deleteNode(30);
    lista.deleteNode(50);

    //Se ingresan nodos a la lista.
    lista.newNode(80);
    lista.newNode(90);
    lista.newNode(100);
    lista.newNode(110); //Nuevo

    return 0;

}
