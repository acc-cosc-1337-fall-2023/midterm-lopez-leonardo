#include "question4.h"
#include<iostream>
#include<string>
using std::string; using std::to_string;

bool test_config()
{
    return true;
}

string decimal_to_hex(int decimal)
{
    string hex;
    int remainder;

    do
    {
        remainder = decimal % 16;
        decimal /= 16;

        switch (remainder)
        {
        case 10:
            hex.append("A");
            break;
    
        case 11:
            hex.append("B");
            break;
    
        case 12:
            hex.append("C");
            break;
    
        case 13:
            hex.append("D");
            break;
    
        case 14:
            hex.append("E");
            break;
    
        case 15:
            hex.append("F");
            break;
    
        default:
            hex.append(to_string(remainder));
            break;
        }

    }while(decimal > 0);

    return hex;
}