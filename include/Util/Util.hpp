//
// Created by Lucas Fiorini on 2019-12-04.
//

#ifndef UTIL_HPP
#define UTIL_HPP 1
#include <string>
using namespace std;

class Util {
    public:
        /**
         * Return the address of a new array containing the name of the
         * king at the position 0 and its ordinal number at the position 1
         *
         * @param string to be splited
         * @return reference to array with name and number
         */
        static string* split(string s);

        /**
         * Convert a ginven roman algarism into a decimal integer
         *
         * @param string that contains roman algarism to be converted
         * @return unsigned integer that represents the converted value
         */
        static unsigned int romanToDecimal(string roman);

        /**
         * Prints all elements of a given array
         *
         * @param string array
         * @param number of elements of the array
         */
        static void printArray(string array[], unsigned int size);
};

#endif //UTIL_HPP
