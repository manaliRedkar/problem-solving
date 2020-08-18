#include<iostream>
using namespace std;
int main()
{

    int value =-1;
    char word;
    cout<<"Enter an integer "<<endl;
    cin>>value;
    /*while(!(cin>>value))
    {
        cout<<"Error: Enter the number: ";
        cin.clear();
        cin.ignore(123,'\n');
    }
    */
    cout<<"Your number is " << value <<endl;
   
}