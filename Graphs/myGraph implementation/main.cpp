#include"doubleLS.h"
#include<iostream>

int main()
{
    doubleLS d1;
    d1.insertData(3);
    d1.insertData(6);
    d1.insertData(7);

    //1.insertAfter(7,66);
    d1.insertData(77);

    d1.display();
    //d1.reverse();
    d1.deleteNode(77);

    d1.display();

   //d1.headDisp();
   // d1.tailDisp();
}
