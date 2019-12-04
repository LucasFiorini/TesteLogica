//
// Created by Lucas Fiorini on 2019-12-04.
//

#include "../../include/KingSort/KingSort.hpp"
#include "../../include/Util/Util.hpp"
#include <iostream>
using namespace std;

int main() {
    KingSort* k = new KingSort;

    string kings[] = {"Philippe II", "Philip II"};


    unsigned int size = sizeof(kings) / sizeof(*kings);
    if (kings[0] == "") {
        cerr << "Empty name string!" << endl;
        exit(EXIT_FAILURE);
    } else {
        k->getSortedList(kings, size);
        Util::printArray(kings, size);
    }

    delete k;
    return 0;
}