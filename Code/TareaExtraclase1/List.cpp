//
// Created by ruben on 11/03/19.
//

#include <iostream>
#include <stdlib.h>

#include "List.h"
#include "Node.h"

using namespace std;

//Constructor
List::List() {
    head = NULL;
    collector = NULL;
    length = 0;
}

Node* List::getHead() {
    return head;
}

void List::setHead(Node* _head) {
    head = _head;
}

Collector* List::getCollector(){
    return collector;
}

void List::setCollector(Collector* _collector){
    collector = _collector;
}

int List::getLength(){
    return length;
}

void List::setLength(int len){
    length = len;
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

Node* List::deleteNode(int data) {
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
    cout << "List: " << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->getData() << ", " << endl;
        temp = temp->getNext();
    }
}
