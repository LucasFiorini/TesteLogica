//
// Created by Lucas Fiorini on 2019-12-04.
//

#include "../../include/KingSort/KingSort.hpp"
#include "../../include/Util/Util.hpp"
#include <iostream>
using namespace std;

int main() {
    KingSort* k = new KingSort;
    string kings[] = {"Carlos XXX", "Carlos I", "Lucas XI", "Lucas XX"};
    unsigned int size = sizeof(kings) / sizeof(*kings);
    k->getSortedList(kings, size);

    Util::printArray(kings, size);

    return 0;
}