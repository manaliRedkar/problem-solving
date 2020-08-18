#include<iostream>
using namespace std;

void sortMergeMETHOD_one(int a[], int sizeA,int b[], int sizeB)
{
       int temp[sizeA+sizeB];

    int i=0,j=0; // marks the position in a and b array respectively
    int k=0; //marks the position in the temp array

    while(i<sizeA && j<sizeB)
    {
        if(a[i] <= b[j])
        {
            temp[k] = a[i];
            i++;k++;
        }
        else
        {
            temp[k] = b[j];
            j++;k++;
        }

    }

    while(i<sizeA)
    {
        temp[k] = a[i];i++;k++;
    }

    while(j<sizeB)
    {
        temp[k] = b[j]; j++;k++;
    }


    for(int index=0;index<(sizeA+sizeB);index++)
    {
        cout<<temp[index]<<" ";
    }
}




void sortMergeMETHOD_two(int *a,int sizeA, int b[], int sizeB)
{
    int i=sizeA-1;
    int j=sizeB-1;

    int lastIndex = sizeA+sizeB-1;
    while(j>=0)
    {
        if(i>=0 && a[i]>b[j])
        {
            a[lastIndex]=a[i];
            i--;
        }
        else
        {
            a[lastIndex]=b[j];
            j--;
        }

        lastIndex--;
    }

    //display
    for(int i=0;i<(sizeA+sizeB);i++)
    {
        cout<<a[i]<<" ";
    }

}


int main()
{
    /*int a[]= {1,4,22,44,55};
    int b[]= {0,2,6,8};
    int sizeA = sizeof(a)/sizeof(a[0]);
    int sizeB = sizeof(b)/sizeof(b[0]);

    sortMergeMETHOD_one(a,sizeA, b, sizeB);*/


    int *a = new int[100]; 
    a[0]=1;
    a[1]=4;
    a[2]=22;
    a[3]=44;
    a[4]=55;


    //int sizeA = sizeof(a)/sizeof(a[0]);
    //cout<<sizeA<<endl;
    int b[]= {0,2,6,8};
    int sizeB = sizeof(b)/sizeof(b[0]);
    sortMergeMETHOD_two(a,5, b, sizeB);


}


