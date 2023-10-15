#include "question3.h"
#include <iostream>
#include <string>
using std::cin; using std::cout;

int main()
{

    char choice = 'y';
    int input;
    
    do
    {
        cout<<"Enter a number 1-10: ";
        cin>>input;

        if(input > 0 && input < 11)
        {
            cout<<get_factorial_sequence(input)<<"\n";
        }

        cout<<"Enter y to continue, enter anything else to exit: ";
        cin>>choice;

    } while (choice == 'y' || choice == 'Y');
    

    return 0;
}