//
// Created by ruben on 07/03/19.
//


#include <iostream>

#include "Collector.h"

using namespace std;


Collector::Collector(){
    head = NULL;
    Collector* collector = Collector::getInstance();
}

Collector* Collector::instance=0; //Para definir al instance NULL

Collector* Collector::getInstance(){
    if (instance==0){
        instance = new Collector();
    }
    return instance;
}

Node* Collector::getHead(){
    return head;
}

void Collector::setHead(Node* _head){
    head = _head;
}

void Collector::addNode(Node* node){
    if (head == NULL) {
        head = node;
    } else {
        Node *temp = head;
        head = node;
        node->setNext(temp);
    }
}

Node* Collector::sendNode(){
    Node* toSend = NULL;
    if (getHead() != NULL) {
        toSend = head;
        head = head->getNext();
    }
    return toSend;
}

void Collector::printList(){
    cout << "Collector: " << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->getData()  << ", " << endl;
        temp = temp->getNext();
    }
}