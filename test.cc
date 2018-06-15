#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <numeric>
#include "stdLibPlus.h"
using namespace std;
using namespace stdPlus;


int main()
{
    string myString = "     loool    ";
    cout << "Untrimmed : " << myString << endl;
    string trimmedString = stdLibPlus::trim(myString, ' ');
    cout << "Trimmed : " << trimmedString << trimmedString << endl;
    for(auto i: stdLibPlus::range(4,10)){
        cout << i << endl;
    };
    vector<int> myVec(10); 
    myVec = stdLibPlus::range(-5, 23, 2);
    cout << stdLibPlus::vecMax(myVec);
    cout << "\n Minimum - " << stdLibPlus::vecMin(myVec);
    
    return 0;
}


