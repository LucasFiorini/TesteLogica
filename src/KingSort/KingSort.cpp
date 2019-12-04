//
// Created by Lucas Fiorini on 2019-12-04.
//


#include "../../include/KingSort/KingSort.hpp"
#include "../../include/Util/Util.hpp"
#include <iostream>
#include <string>
using namespace std;

void KingSort::getSortedList(string kings[], unsigned int size) {
    for (int i = 0; i < size; i++) {
        bool unchanged = true;
        for (int j = i+1; j < size; j++) {
            if (i != j) {
                string aux = "";
                string* word1 = new string;
                word1 = Util::split(kings[i]);
                string* word2 = new string;
                word2 = Util::split(kings[j]);
                if (word1[0] > word2[0]) {
                    aux = kings[i];
                    kings[i] = kings[j];
                    kings[j] = aux;
                    unchanged = false;
                } else if (word1[0] == word2[0]) {
                    if (Util::romanToDecimal(word1[1]) > Util::romanToDecimal(word2[1])) {
                        aux = kings[i];
                        kings[i] = kings[j];
                        kings[j] = aux;
                        unchanged = false;
                    }
                }
            }
        }
        if (unchanged) {
            break;
        }
    }
    //return kings;
}

/*
void KingSort::getSortedList(string kings[], unsigned int size) {
    for (int i = 0; i < size; i++) {
        bool swap = true;
        for (int j = i+1; j < size; j++) {
            if (i != j) {
                string aux = "";
                string* word1 = new string;
                word1 = split(kings[i]);
                string* word2 = new string;
                word2 = split(kings[j]);
                if (word1[0] > word2[0]) {
                    aux = kings[i];
                    kings[i] = kings[j];
                    kings[j] = aux;
                    swap = false;
                } else if (word1[0] == word2[0]) {
                    if (word1[1] > word2[1]) {
                        aux = kings[i];
                        kings[i] = kings[j];
                        kings[j] = aux;
                        swap = false;
                    }
                }
            }
            if (swap) {
                break;
            }
        }
    }
}
*/
