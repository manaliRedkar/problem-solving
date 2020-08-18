#include<iostream>
using namespace std;
int main()
{
int size ;
cout<<"Size??? ";
cin>>size;
int *SquaresList = new int[size];
for(int i=0;i<size;i++)
{
	SquaresList[i] = i*i;
    cout<<SquaresList[i]<<" ";
}
delete [] SquaresList;


}
