//
// Created by ruben on 11/03/19.
//

#ifndef TESTCOLLECTOR_COLLECTOR_H
#define TESTCOLLECTOR_COLLECTOR_H

#include <stdlib.h>

#include "Node.h"

using namespace std;

class Collector {
private:
    Node* head;
    int length;

public:
    Collector(); //Constructor

    Node* getHead();
    void setHead(Node* _head);
    int getLength();
    void setLength(int _length);
    void addNode(Node* node);
    Node* sendNode();
    void printList();


};


#endif //TESTCOLLECTOR_COLLECTOR_H
