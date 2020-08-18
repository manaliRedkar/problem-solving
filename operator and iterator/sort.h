#include<iostream>
using namespace std;

class sorter{
    private:
        void swap(int *a, int *b);
        int partition(int *qArr, int start, int end);
        void merge(int *left,int nL, int *right,int nR, int *mArr);

    public:
        void bubble(int * num, int n);
        void display(int * arr, int n);
        void quick(int *qArr, int start,int end);
        void mergeSort(int* mArr,int length);
       
        
};