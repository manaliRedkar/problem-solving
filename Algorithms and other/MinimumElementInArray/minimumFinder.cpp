#include<iostream>
using namespace std;


int minInt(int arr[],int size)
{
   cout<<size<<endl;

    cout<<"Display: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    //cout<<"Sorted: ";

    //cout<<"Check now"<<endl;
    int min=arr[0];
    for(int i =1;i<size;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    cout<<"MINIMUM IS: "<<min<<endl;
    

}

int main()
{
    
    int arr[] = {16,22,4,1,-8,15,2,3,78};  
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    minInt(arr,size);


}