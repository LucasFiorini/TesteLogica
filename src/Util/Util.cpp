//
// Created by Lucas Fiorini on 2019-12-04.
//
#include "../../include/Util/Util.hpp"
#include <iostream>
#include <string>
#include <sstream>

string* Util::split(string s) {
    string* arr = new string[2];
    stringstream X(s);
    unsigned int i = 0;
    while (getline(X,arr[i], ' ')) {
        i++;
    }
    return arr;
}


unsigned int Util::romanToDecimal(string roman) {
    unsigned int value = 0;

    for(unsigned long i = 0; i < roman.size(); i++){
        if(roman[i] == 'X'){
            if(i+1 <= roman.size()){
                if(roman[i+1] == 'L'){
                    value -= 10;
                } else {
                    value += 10;
                }
            }
        } else if(roman[i] == 'L'){
            value += 50;
        } else if(roman[i] == 'V'){
            value += 5;
        } else if(roman[i] == 'I'){
            if(i+1 <= roman.size()){
                if(roman[i+1] == 'X' || roman[i+1] == 'V'){
                    value -= 1;
                } else {
                    value += 1;
                }
            }
        }
    }
    return value;
}

void Util::printArray(string array[], unsigned int size) {
    cout << "Returns: {";
    for (size_t i = 0; i < size; i++) {
        if (i+1 == size) {
            cout << "\"" << array[i] << "\"" << "}";
        } else {
            cout << "\"" << array[i] <<"\"" << ", ";
        }
    }
    cout << endl;
}
