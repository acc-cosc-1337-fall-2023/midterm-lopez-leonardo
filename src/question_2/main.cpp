#include "question2.h"
#include <iostream>
using std::cin; using std::cout;

int main()
{
    char choice;

    do
    {
        cout<<"Enter y to roll the dice or enter anything else to exit: ";
        cin>>choice;
        if(choice == 'y' || choice == 'Y')
        {
            cout<<roll_die()<<"\n";
        }
    }while(choice == 'y' || choice == 'Y');

    return 0;
}