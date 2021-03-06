
#ifndef CODE_COLLECTOR_H
#define CODE_COLLECTOR_H

#include <stdlib.h>
#include "Node.h"


/**
 * Header de Collector.
 *
 * @since 07/03/19.
 */
class Collector {


private:
    ///Unica instancia de Collector
    static Collector* instance;
    ///Primer node de Collector
    Node* head;
    ///Cantidad de nodos en Collector
    int len;

protected:
    Collector();

public:
    static Collector* getInstance();
    Node* getHead();
    void setHead(Node* _head);
    int getLen();
    void setLen(int _len);
    void addNode(Node* node);
    void printList();

};


#endif //CODE_COLLECTOR_H