//
// Created by ruben on 07/03/19.
//


#include <iostream>
#include <stdlib.h>

#include "List.h"
#include "Node.h"

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
    Node* node = new Node(data);
    if (head == NULL) {
        head = node;
    } else {
        Node* temp = head;
        head = node;
        node->setNext(temp);
    }
}


Node* List::changeList(int data){
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


