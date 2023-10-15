#include "question4.h"
#include<iostream>
using std::cin; using std::cout; using std::string;
int main()
{
    int value;
    char choice;
    string hex_result;

    do
    {
        cout<<"Enter a value between 1 and 512: ";
        cin>>value;
    
        if(value > 0 || value < 513)
        {
            hex_result = decimal_to_hex(value);
            cout<<hex_result<< "\n";
        }

        cout<<"Enter y to continue, enter anything else to exit: ";
        cin>>choice;

    }while(choice == 'y' || choice == 'Y');

    return 0;
}