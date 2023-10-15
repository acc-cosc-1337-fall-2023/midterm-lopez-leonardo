#include "question3.h"
#include<string>
using std::string; using std::to_string;

bool test_config()
{
    return true;
}

string get_factorial_sequence(int x)
{
    string factorial_sequence;
    int factorial = 1;

    for(int i = 1;i < x;i++)
    {
        factorial *= i;
        factorial_sequence.append(to_string(i)+"x");
    }
    
    factorial *= x;
    factorial_sequence.append(to_string(x)+"="+to_string(factorial));
    return factorial_sequence;
    
}