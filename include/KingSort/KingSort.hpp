//
// Created by Lucas Fiorini on 2019-12-04.
//

#ifndef KINGSORT_HPP
#define KINGSORT_HPP 1
#include <string>
using namespace std;

class KingSort {
    public:
        /**
         * This method uses Bubble Sort logic to sort the array. As
         * the input size is not greater than 50, a simple sorting function
         * will perform better.
         *
         * @param the given array of strings
         * @param the number of elements
         * @return does not return anything, as the parameter is an array,
         * in c++, is passed a reference to that array instead of a copy. Therefore,
         * there is no need to return another string, it would be a waste of memory.
         * The sorting will happen into the given array itself.
         */
        void getSortedList(string kings[], unsigned int size);

    private:
};

#endif