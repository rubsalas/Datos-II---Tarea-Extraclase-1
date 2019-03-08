//
// Created by ruben on 07/03/19.
//

#ifndef CODE_NODE_H
#define CODE_NODE_H

#include <stdlib.h>


class Node {
private:
    int* data;
    Node* next;

public:
    Node(int valor);
    int getData();
    void setData(int data);
    Node* getNext();
    void setNext(Node* next);
};


#endif //CODE_NODE_H
