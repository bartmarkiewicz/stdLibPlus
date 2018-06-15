/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stdLibPlus.cpp
 * Author: Bartosz Markiewicz
 * 
 * Created on 14 June 2018, 17:29
 */
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <numeric>
#include "stdLibPlus.h"
using namespace std;
namespace stdPlus {
    vector<string> stdLibPlus::split(string theString, char delimiter=' '){
        vector<string> vecsWords;
        stringstream ss(theString);
        string sIndivStr;
        while(getline(ss, sIndivStr, delimiter)){
            vecsWords.push_back(sIndivStr);
        }
        return vecsWords;
    }
    string stdLibPlus::vectorToString(vector<string> theVec, char separator){
        string myString;
        for(int i = 0; i < theVec.size(); i++){
            myString += theVec[i]+separator;
        }
        return myString;
    }
    string stdLibPlus::trim(string theString, char trimmer){
        string newString;
        int firstIndex;
        for(int i=0; i < theString.size(); i++){
            if (theString[i] != trimmer){
                firstIndex = i;
                break;
            }
        }
        int lastIndex;
        for(int j = theString.size()-1; j>0; j--){
            if (theString[j] != trimmer){
                lastIndex = j;
                break;
            }
        }
        newString = theString.substr(firstIndex,lastIndex-firstIndex);
        return newString;   
    }
    vector<int> stdLibPlus::range(int start, int stop, int step){
        int size = (stop-start)/step;
        std::vector<int> myVec(size);
        int value = start;
        for(int i=0; i<size; i++){
            myVec[i] = value;
            value += step;
        }
        return myVec;
    }
    vector<int> stdLibPlus::range(int stop){
        int size = stop;
        vector<int> myVec(size);
        for(int i=0; i<size; i++){
            myVec[i] = i;
        }
        return myVec;
    }
    double stdLibPlus::vecMax(std::vector<double> vecOfNumbs){
            double maximum = -900719925474099;
            for(auto item: vecOfNumbs){
                if(item > maximum){
                    maximum = item;
                }
            }
            return maximum;
        }
   int stdLibPlus::vecMax(vector<int> vecOfNumbs){
            int maximum = INT_MIN ;
            for(auto item: vecOfNumbs){
                if(item > maximum){
                    maximum = item;
                }
            }
            return maximum;
        }
    double stdLibPlus::vecMin(std::vector<double> vecOfNumbs){
        double minimum = 900719925474099;
            for(auto item: vecOfNumbs){
                if(item < minimum){
                    minimum = item;
                }
            }
            return minimum;
    }
    int stdLibPlus::vecMin(std::vector<int> vecOfNumbs){
        int minimum = INT_MAX;
            for(auto item: vecOfNumbs){
                if(item < minimum){
                    minimum = item;
                }
            }
            return minimum; 
    }
}
