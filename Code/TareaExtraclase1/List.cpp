//
// Created by ruben on 07/03/19.
//


#include <iostream>
#include <stdlib.h>

#include "List.h"

using namespace std;

//Constructor
List::List() {
    head = NULL;
    tail = NULL;
}

Node* List::getHead() {
	return head;
}

void List::setHead(Node* _head) {
	head = _head;
}

Node* List::getTail(){
	return tail;
}

void List::setTail(Node* _tail){
	tail = _tail;
}

void List::newNode(int data){

    if (collector->getHead()->getData() != 0) { //si la cabeza del colector es diferente de nula
        cout<<"DS"<<endl;
		//collector->getTail()->setData(data); // le cambia el data a la cabeza del colector

        /*if (head == NULL) { // si la cabeza de la lista es igual a nula
            head = collector->getTail(); // la cola del colector pasa a ser la cabeza de la lista
        } 
		else {
            collector->getTail()->setNext(head); //ahora la cola del collector apunta a la cabeza de la lista
        }*/
    } 
	else { //Cuando collector esta vacio se crea un nuevo nodo
		cout<<collector->getHead()->getData()<<endl;
		//Node* ns = new Node(data);
		//head = ns;
    }
}


void List::deleteNode(int data){
	
}

void List::printList(){

}


