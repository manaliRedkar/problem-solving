#include<iostream>
using namespace std;
void OutputLetters(char *myString)
{
for(int i=0;myString[i]!='\0';i++)
    {
        cout<<myString[i]<<endl;

    }
}

int main()
{
    //char* myString= “IFYOUCOUNT_THE_CHARS_AND_USE_A_LITERAL_YOUR_FUNCTION_WON’T_WORK”; ;
    //cout<<myString<<endl;

    
    //OutputLetters(myString);

    int foo_int = 10;
    cout<<foo_int<< ": value itself"<<endl;
    int *intPtr;
    intPtr = &foo_int;
    cout<<intPtr<< " : address of the previous value"<<endl;
    cout<<" *****************"<<endl;

    *int intA =5 ;
    int intB = 5;

   /* int *ptrA;
    ptrA = &intA;
    cout<< "Location of A :"<<ptrA<<" value stored: "<<*ptrA<<endl;
*/

    int *ptrB;
    ptrB = &intB;
    //cout<< "Location of B :"<<ptrB<<" value stored: "<<*ptrB<<endl;


    int intC;

    intC = *ptrA + *ptrB;
    cout<<"added value: "<<intC<<endl;

    


    


}

