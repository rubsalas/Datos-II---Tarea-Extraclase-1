//
// Created by ruben on 11/03/19.
//


#ifndef CODE_LIST_H
#define CODE_LIST_H

#include <stdlib.h>

#include "Node.h"
#include "Collector.h"

using namespace std;


//class Collector;

class List {

private:
    Node* head;
    Collector* collector;
    int length;

public:
    List(); //Constructor

    Node* getHead();
    void setHead(Node* _head);
    Collector* getCollector();
    void setCollector(Collector* _collector);
    int getLength();
    void setLength(int len);
    void newNode(int data);
    Node* deleteNode(int data);
    void printList();

};

#endif //CODE_LIST_H

