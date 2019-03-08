//
// Created by ruben on 07/03/19.
//


#include <iostream>

#include "Collector.h"
#include "List.h"
#include "Node.h"

using namespace std;

//Constructor
List::List() {
    head = NULL;
    tail = NULL;
    collector = NULL;
}

Node* List::getHead() {

}

void List::setHead(Node* head) {

}

Node* List::getTail(){

}

void List::setTail(Node* tail){

}

Collector* List::getCollector(){

}


void List::setCollector(Collector *collector) {

}


void List::newNode(int data){
    /*if (collector*->getHead() != NULL) {
        Node* nodeReciclado = collector->getTail();
        nodeReciclado->setData(data);


        if (head == NULL) {
            head = nodeReciclado;
        } else {

            Node* temp = head;
            head = nodeReciclado;
            nodeReciclado->setNext(temp);
        }
    } else { //Cuando collector esta vacio
        Node* nNode = new Node(data);
        if (head == NULL) {
            head = nNode;
        } else {
            Node* temp = head;
            head = nNode;
            nNode->setNext(temp);
        }
    }*/
}


void List::deleteNode(int data){

}

void List::printList(){

}


