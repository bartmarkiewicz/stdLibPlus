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
#include <istream>
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
    std::vector<int> stdLibPlus::range(int start, int stop, int step){
        int size = (stop-start)/step;
        std::vector<int> myVec(size);
        int value = start;
        for(int i=0; i<size; i++){
            myVec[i] = value;
            value += step;
        }
        return myVec;
    }
    std::vector<int> stdLibPlus::range(int stop){
        int size = stop;
        std::vector<int> myVec(size);
        for(int i=0; i<size; i++){
            myVec[i] = i;
        }
        return myVec;
    }

}