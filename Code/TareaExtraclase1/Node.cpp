//
// Created by ruben on 07/03/19.
//


#include <iostream>
#include <stdlib.h>

#include "List.h"
#include "Node.h"

using namespace std;

Node::Node(int _data){
    data = _data;
    next = NULL;
}

int Node::getData(){
    return data;
}

void Node::setData(int _data){
    data = _data;
}

Node* Node::getNext(){
    return next;
}

void Node::setNext(Node* _next){
    next = _next;
}

