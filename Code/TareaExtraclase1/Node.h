//
// Created by ruben on 07/03/19.
//

#ifndef CODE_NODE_H
#define CODE_NODE_H

#include <stdlib.h>

class Node {
private: //Atributos
    int data;
    Node *next;

public: //Metodos
    Node(int _data);
    int getData();
    void setData(int _data);
    Node* getNext();
    void setNext(Node* _next);
};


#endif //CODE_NODE_H