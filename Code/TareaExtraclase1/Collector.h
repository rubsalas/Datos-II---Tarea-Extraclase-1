//
// Created by ruben on 07/03/19.
//

#ifndef CODE_COLLECTOR_H
#define CODE_COLLECTOR_H

#include <stdlib.h>

#include "Node.h"
#include "List.h"

class List;

class Collector {

private:
    Node* head;
    Node* tail;
    List* list;

public:
    Collector();
    Node getHead();
    void setHead(Node head);
    Node getTail();
    void setTail(Node tail);
    void addNode(int value);
    void sendNode(int value);
    void printList();

};


#endif //CODE_COLLECTOR_H
