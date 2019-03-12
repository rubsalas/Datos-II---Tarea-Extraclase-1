#include <iostream>

#include "Node.h"
#include "List.h"


using namespace std;

int main() {

    Node n1(280);



    List list;



    list.newNode(45);

    cout << "TEST" << endl;

    list.newNode(90);
    list.newNode(135);
    list.newNode(180);

    list.printList();



    return 0;
}