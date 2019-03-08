#include <iostream>
#include "List.h"

int main() {

    List* lista = new List();
    Collector* collector = new Collector();

    lista->setCollector(collector);

    return 0;
}