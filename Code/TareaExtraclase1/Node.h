
#ifndef CODE_NODE_H
#define CODE_NODE_H

#include <stdlib.h>

/**
 * Header de Node.
 *
 * @since 07/03/19.
 */
class Node {

private:
    ///Dato que guardara el nodo
    int data;
    ///Referencia al nodo que esta siguiente a este
    Node* next;

public:
    Node(int _data);
    int getData();
    void setData(int _data);
    Node* getNext();
    void setNext(Node* _next);
};


#endif //CODE_NODE_H