//
// Created by ruben on 07/03/19.
//

#ifndef CODE_LIST_H
#define CODE_LIST_H

#include <stdlib.h>

#include "Node.h"
#include "Collector.h"


class List {

private:
    Node* head;
    int len;
    Collector* collector;

public:
    List(); //Constructor
    Node* getHead();
    void setHead(Node* _head);
    int getLen();
    void setLen(int _len);
    void newNode(int data);
    Node* deleteNode(int data);
    void printList();

};

#endif //CODE_LIST_H