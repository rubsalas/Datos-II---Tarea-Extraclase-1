//
// Created by ruben on 07/03/19.
//

#ifndef CODE_COLLECTOR_H
#define CODE_COLLECTOR_H

#include <stdlib.h>
#include "Node.h"

class Collector {

private:
	static Collector* instance;
	Node* head;
    Node* tail;

protected:
	Collector();

public:
	static Collector* getInstance();
    Node* getHead();
    void setHead(Node* _head);
    Node* getTail();
    void setTail(Node* _tail);
    void addNode(int value);
    void sendNode(int value);
    void printList();

};


#endif //CODE_COLLECTOR_H
