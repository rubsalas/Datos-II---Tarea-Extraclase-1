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
}

Node* List::getHead() {
    return head;
}

void List::setHead(Node* _head) {
    head = _head;
}

void List::newNode(int data){

    Node* nNode = collector->sendNode();
    if (nNode != NULL) {
        nNode->setData(data);
    } else {
        Node nNode2(data);
        nNode = &nNode2;
    }

    if (head == NULL) {
        head = nNode;
    } else {
        Node* temp = head;
        head = nNode;
        nNode->setNext(temp);
    }
}


Node* List::deleteNode(int data){
    Node* delNode = NULL;
    Node* temp = head;
    Node* aux = head;
    while (aux != NULL && aux->getData() != data) {
        temp = aux;
        aux = aux->getNext();
    }
    if (aux == NULL) {
        cout << data << " no esta en la lista\n" << endl;
    } else {
        delNode = aux;
        aux = aux->getNext();
        temp->setNext(aux);
        cout << "El nodo " << data << " fue cambiado de lista." << endl;
        return delNode;
    }
}

void List::printList(){

}
