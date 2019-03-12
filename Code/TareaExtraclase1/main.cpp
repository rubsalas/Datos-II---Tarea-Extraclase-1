#include <iostream>
#include "Node.h"
#include "List.h"
//#include "Collector"

using namespace std;

int main() {



    Node* n1 = new Node(45);
    //n1->setData(67);
    //Node n2(56);
    //n1.setData(30);
    //n1.setNext(n2);
    cout<<n1->getData()<<endl;
    //cout<<n2.getData()<<endl;
    //cout<<n1->getNext()<<endl;
    //cout<<&n2<<endl;*/
    List l1;
    //l1.setHead(n1);
    l1.newNode(39);
    //cout<<l1.getHead( )<<endl;
    return 0;
}

List createList()