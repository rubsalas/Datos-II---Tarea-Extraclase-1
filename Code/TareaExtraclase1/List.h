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
	    Node* tail;
	    Collector* collector;

	public:
	    List(); //Constructor
	    Node* getHead();
	    void setHead(Node* _head);
	    Node* getTail();
	    void setTail(Node* _tail);
	    void newNode(int data);
	    void deleteNode(int data);
	    void printList();

};

#endif //CODE_LIST_H
