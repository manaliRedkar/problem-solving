#include<iostream>
using namespace std;

//Search in Rotated Array 
//Time complexity: O(n)
/*int rotated(int arr[],int arrSize,int find)
{
    int i=0;
    while(i<arrSize)
    {
        if(arr[i] == find)
            return i;

        i++;
    }

    return -1;
}*/

int searchinRotatedArray(int arr[],int x,int left,int right)
{
    
}



//Recursive approach:
int binarySearch(int binArr[],int element,int left, int right)
{
    if(left>right)
        return -1;


    int mid = (left+right)/2;
    if(element==binArr[mid])
    {
        return mid;
    }
        
    else if(element<binArr[mid])
    {
        return binarySearch(binArr,element,left,mid-1 );

    }

    else if(element>binArr[mid])
    {
        return binarySearch(binArr,element,mid+1,right );
    }

    return -1;
}
//iterative approach
int iterativeBinarySearch(int binArr[],int element,int left,int right)
{
    while(left<right)
    {
        int mid=(left+right)/2;

        if(binArr[mid]==element)
            return mid;

        if(binArr[mid]<element)
            left = mid+1;

        else
            right = mid-1;
    }

    return -1;
}





int main()
{
    int arr[] ={15,16,19,20,25,1,3,4,5,7,10,14};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout<<"ROTATED: "<<rotated(arr, arrSize, 5)<<endl;

    cout<<"CORRECT WAY: "<<searchinRotatedArray(arr,5,0,arrSize-1);

    int binArr[] = {2,5,8,12,16,23,38,56,72,91};
    int binSize = sizeof(binArr)/sizeof(binArr[0]);

    int first = 0;
    int last = binSize-1;
 

    cout<<binarySearch(binArr,23,first,last)<<endl;

    cout<<iterativeBinarySearch(binArr,23,first,last)<<endl;
    
    
}