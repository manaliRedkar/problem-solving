#include "opit.h"
#include<iostream>
#include "unit.h"
#include "sort.h"


int main()
    {
        opit o1;
        o1.insert(11);
        o1.insert(22);
        o1.insert(33);
        o1.insert(41);
        o1.insert(66);
   
        o1.display();
        cout<<endl;

        cout<<"ELEMENT for the index : "<<o1[2]<<endl;

        cout<<"Iterator function check: "<<endl;
        /*cout<<s1.iter()<<endl;
        cout<<s1.iter()<<endl;
        cout<<s1.iter()<<endl;
        cout<<s1.iter()<<endl;
        cout<<s1.iter()<<endl;*/
        unit u;
        
        /*cout<< (bool)u.check(11, s1.iter())<<endl;
        cout<< u.check(22, s1.iter())<<endl;
        cout<< u.check(33, s1.iter())<<endl;
        cout<< u.check(44, s1.iter())<<endl;
        cout<< u.check(55, s1.iter())<<endl;*/

        u.check(11, o1.iter());
        u.check(22, o1.iter());
        u.check(33, o1.iter());
        u.check(44, o1.iter());
        u.check(55, o1.iter());


        //bubble
        sorter s1;
        int num[] = {4,5,2,3,6};
        int size = sizeof(num)/sizeof(num[0]);

        s1.bubble(num, size); 
        cout<<"After sorting: ";
        s1.display(num,size);

        cout<<endl;cout<<endl;

        int correct[] = {2,3,4,5,6};
        u.checkArray(correct, num, size);


        //quick
        //int qArr[] = {2,7,1,6,8,5,3,4, -1};
        int qArr[] = {2,7};
        int newSize = sizeof(qArr)/sizeof(qArr[0]);
        s1.quick(qArr,0,newSize-1);
        cout<<"After sorting: ";
        s1.display(qArr,newSize);

        int quickCheck[] = {1,2,3,4,5,6,7,8 };
        u.checkArray(quickCheck, qArr,newSize);
        cout<<endl<<endl;


        //merge;
        int mArr[] = {2,4,1,6,8,5,3,7,};
        int mergeSize = sizeof(mArr)/sizeof(mArr[0]);
        cout<<"SIZE: "<<mergeSize<<endl;
        s1.mergeSort(mArr,mergeSize);
        cout<<endl;
        s1.display(mArr,mergeSize);


        return 0;
    }
   