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
    }
    return 0;
}


