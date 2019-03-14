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
    collector = Collector::getInstance();
    len = 0;
}

Node* List::getHead() {
    return head;
}

void List::setHead(Node* _head) {
    head = _head;
}

int List::getLen() {
    return len;
}

void List::setLen(int _len) {
    len = _len;
}

void List::newNode(int data){
    int lenCollector = collector->getLen();

    Node* nNode;

    if (lenCollector != 0) {
        nNode = collector->getHead();
        collector->setHead(nNode->getNext());
        nNode->setData(data);
        nNode->setNext(nullptr);
        collector->setLen(collector->getLen()-1);
    } else {
        nNode = new Node(data);
    }

    if (head == nullptr) {
        head = nNode;
    } else {
        Node* temp = head;
        head = nNode;
        nNode->setNext(temp);
    }

    len+=1;


    printList();
    collector->printList();
    cout << "\n" << endl;

}


Node* List::deleteNode(int data){
    Node* delNode = nullptr;
    Node* temp = head;
    Node* aux = head;
    while (aux != nullptr && aux->getData() != data) {
        temp = aux;
        aux = aux->getNext();
    }
    if (aux == nullptr) {
        cout << data << " no esta en la lista\n" << endl;
    } else {
        delNode = aux;
        if (head == delNode) {
            setHead(head->getNext());
        } else {
            temp->setNext(aux->getNext());
        }
    }

    delNode->setNext(nullptr);
    cout << "El nodo " << data << " fue cambiado de lista." << endl;
    collector->addNode(delNode);


    len-=1;

    printList();
    collector->printList();
    cout << "\n" << endl;

}

void List::printList(){
    cout << "List: " << endl;
    cout << "len: " << len << endl;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->getData()  << ", ";
        temp = temp->getNext();
    }
    cout << "\n";
}
