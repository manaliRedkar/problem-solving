#include<iostream>
using namespace std;

int searchPosition(int arr[],int size, int key)
    {
        int first=0;
        int last =7;    
        int mid = size/2;

        while(first!=last)
        {
            if(key<=arr[mid])
            {
                last = mid;
                mid = (first+last)/2;
            }
                
        
            else //(key>arr[mid])
            {
                first = mid+1;
                mid = (first + last)/2;
            }
                
        }
        
        return mid;
        
    }


int main()
{
    int arr[] = { 3,4,11,34,66,88,100};
    cout<<searchPosition(arr,7,4);
    cout<<endl;
}