#include <iostream>
using namespace std;

int main()
{
    int a= 10;
    int * ptr_a = &a;

    char b = 'a';
    char * ptr_b = &b;


    cout<<sizeof(ptr_b)<<endl; //1
    cout<<sizeof(b)<<endl; //1

    cout<<sizeof(ptr_a)<<endl; //4
    cout<<sizeof(a)<<endl; //4
 
}