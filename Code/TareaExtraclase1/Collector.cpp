//
// Created by ruben on 07/03/19.
//


#include <iostream>

#include "Collector.h"

using namespace std;


Collector::Collector(){
    head = nullptr;
    len = 0;
}

Collector* Collector::instance=0; //Para definir al instance NULL

Collector* Collector::getInstance(){
    if (instance== nullptr){
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

int Collector::getLen() {
    return len;
}

void Collector::setLen(int _len) {
    len = _len;
}

void Collector::addNode(Node* node){
    if (head == nullptr) {
        head = node;
    } else {
        Node *temp = head;
        head = node;
        node->setNext(temp);
    }

    len+=1;

}

Node* Collector::sendNode(){
    Node* toSend = nullptr;
    Node* temp = head;

    cout << getHead() << endl;

    if (getHead() != nullptr) {
        toSend = head;
        setHead(head->getNext());
    }

    len-=1;

    return toSend;
}

void Collector::printList(){
    cout << "Collector: " << endl;
    cout << "len: " << len << endl;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->getData()  << ", ";
        temp = temp->getNext();
    }
    cout << "\n";
}