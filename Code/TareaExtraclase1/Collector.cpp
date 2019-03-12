//
// Created by ruben on 11/03/19.
//

#include <iostream>

#include "Collector.h"

using namespace std;

Collector::Collector(){ //Constructor
    head = nullptr;
    length = 0;
}

Node* Collector::getHead(){
    return head;
}

void Collector::setHead(Node* _head){
    head = _head;
}

int Collector::getLength(){
    return length;
}

void Collector::setLength(int _length){
    length = _length;
}

void Collector::addNode(Node* node) {
    if (head == NULL) {
        head = node;
    } else {
        Node *temp = head;
        head = node;
        node->setNext(temp);
    }
}

Node* Collector::sendNode() {
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