#include"sort.h"
#include<iostream>
using namespace std;


void sorter::swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b=temp;

}


void sorter::bubble(int* num,int n)
{
    
    for(int k=1;k<=n-1;k++)
    {
        for(int i=0;i<=n-2;i++)
        {
            if(num[i]>num[i+1])
                swap(&num[i],&num[i+1]);
                //num[i] = 0;
        }
    }
          
}


int sorter::partition(int *qArr, int start, int end)
{
    int pivot = qArr[end];
    int pIndex = start;
    for(int i=start;i<end ;i++)
    {
        if(qArr[i]<=pivot)
        {
            swap(&qArr[i],&qArr[pIndex]);
            pIndex++;
        }
    }
    swap(&qArr[pIndex],&qArr[end]);
    return pIndex;
}

void sorter::quick(int *qArr,int start, int end)
{
    if(start<end)
    {
        int index = partition(qArr, start, end);
        quick(qArr, start, index-1);
        quick(qArr,index+1,end);
    }
    
}


void sorter::merge(int *left,int nL, int *right,int nR, int *mArr)
{
    int i=0;j=0; // marks the position in left and right array respectively
    int k=0; //marks the position in the mArr

    while(i<nL && j<nR)
    {
        if(left[i] <= right[j])
        {
            mArr[k] = left[i];
            i++;k++;
        }
        else
        {
            mArr[k] = right[j];
            j++;k++;
        }

    }

    while(i<nL)
    {
        mArr[k] = left[i];i++;k++;
    }

    while(j<nR)
    {
        mArr[k] = right[j]; j++;k++;
    }

}

void sorter::mergeSort(int *mArr, int length)
{
    //int length = sizeof(mArr)/sizeof(mArr[0]);
    //cout<<"Length: "<<length<<endl<<endl<<endl;

    
    if(length<2)
    {
        return;
    }

    int mid=length/2;
    int left[mid];
    int right[length-mid];

    //filling left array
    for(int i=0;i<=mid-1;i++)
    {
        left[i]=mArr[i];   
        //cout<<"LEFT: "<<left[i]<<endl;
    }
 

    //cout<<endl;

    //filling right array
    for(int i=mid;i<=length-1;i++)
    {
        right[i-mid] = mArr[i];
        //cout<<"RIGHT: "<<right[i-mid]<<endl;
    }


    mergeSort(left,length/2);
    mergeSort(right,length/2);

    int nL = sizeof(left)/sizeof(left[0]);
    int nR = sizeof(right)/sizeof(right[0]);
    merge(left,nL, right,nR, mArr);




}

void sorter::display(int* arr,int n)
{
    //display for verify:
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}