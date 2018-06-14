/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stdLibPlus.h
 * Author: Bartosz Markiewicz
 *
 * Created on 14 June 2018, 17:29
 */
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#ifndef STDLIBPLUS_H
#define STDLIBPLUS_H



namespace stdPlus {
    class stdLibPlus 
    {
    public:
        /*stringToVector - Converts a string to a vector using a separator provided
        *Parameters-
         theString: string provided to be converted to a vector
         delimiter: the delimiter which divides the string into vector elements
        *Returns -
         Vector of Strings */
        static std::vector<std::string> split(std::string theString, char delimiter);

        /*vectorToString - Converts a vector to a single string
        *Parameters- 
         theVec : Vector of Strings 
         separator : char to be used as a delimiter or separator for the string between each vector value
        *Returns -
         string made out of the vector */
        static std::string vectorToString(std::vector<std::string> theVec, char separator);
        
        /*trim  - trims a string of leading and trailing white space(by default) 
          but any character can be supplied to trim
         *Parameters-
         theString : string provided which needs trimming
         trimmer : character which to remove at the end and beginning of a string
         *Returns -
         trimmed string*/
        static std::string trim(std::string theString, char trimmer = ' ');
        
        /*range - returns a vector in the range provided
         *Parameters-
         start : integer for the starting value
         stop : integer for the maximum value
         step : integer for the difference between each value in the vector
         *returns -
         vector*/
        static std::vector<int> range(int start, int stop, int step=1);
        // same function but with step being 1 and start always being 0 -
        static std::vector<int> range(int stop);

        
    };
}


#endif /* STDLIBPLUS_H */

