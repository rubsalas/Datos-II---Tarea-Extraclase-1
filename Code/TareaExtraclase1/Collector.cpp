//
// Created by ruben on 07/03/19.
//


#include <iostream>

#include "Collector.h"

using namespace std;


Collector::Collector(){
    head = NULL;
    tail = NULL;
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

Node* Collector::getTail(){
	return tail;
}

void Collector::setTail(Node* _tail){
	tail = _tail;
}

void Collector::addNode(int value){

}

void Collector::sendNode(int value){

}

void Collector::printList(){

}
