#include<iostream>
#include"unit.h"
using namespace std;



bool unit::check(int val, int dest)
{
    
    if(val == dest)
        std::cout<<"True" << std::endl;
    else
        std::cout<<"False" << std::endl;

    return (val == dest);
} 


bool unit::checkArray(int correct[],int *num, int size )
{
    bool status = true;
    for(int i=0;i<size;i++ )
    {
        if(correct[i] != num[i])
        {
            status = false;
        }
        
             
    }
   if (status)
    cout<< "TRUE"<<endl;
   else
    cout<<"FALSE"<<endl;


    return status;
}

/*
bool unit::checkArray(int correct[],int *num, int size )
{
    for(int i=0;i<size;i++ )
    {
        if(correct[i] != num[i])
        {
            cout<<"FAlSE";
            return false;
        }
        
             
    }
    cout<<"TRUE: ";
    return true;
}*/


