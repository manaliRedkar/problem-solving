#include "singleLS.h"
//#include<list>
#include<iostream>
#include<stack>

//directed graph
void direct(singleLS directList[5], int pos , int val)
{
    directList[pos].insert(val);
}


//undirected graph
void unDirect(singleLS unList[5], int pos, int val)
{
    unList[pos].insert(val);
    unList[val].insert(pos);
}

//depth first search traversal
/*void DFS(singleLS unList[5], Node* sourceNode)
{
    stack <Node*> stk;
    if(sourceNode->visted !=true)
        stk.push(stk);
}

/*bool cyclic(singleLS unList[5])
{
      //using DFS function
}
*/



void printList(singleLS someList[5])
{
    for(int j=0;j<5;j++)
    {
        //for (list<int>::iterator i = adjarraylist[j].begin(); i != adjarraylist[j].end(); ++i)
        //for(int i = 0; i < adjarraylist[j].size() - 1 ; i++)
           // cout << *i << " ";
            cout<<j<<". ";
            someList[j].display();
        
    cout<<endl;
    }
}


 int main()
    {     
        /*
        cout<<endl;
        cout<<"******DIRECTED: ******"<<endl;
        singleLS directList[5];  
        cout<<endl;
        direct(directList,0, 1);
        direct(directList,1, 2);
        direct(directList,0, 4);

        direct(directList,4, 3);
        direct(directList,3, 0);
        

        printList(directList);

        cout<<endl;
        cout<<endl;

        cout<<"******UNDIRECTED: ******"<<endl<<endl;
        singleLS unList[5];

        unDirect(unList,0,1 );
        unDirect(unList,0,2 );

        unDirect(unList,1,2 );
        unDirect(unList,1,3);

        unDirect(unList,2,4 );
        unDirect(unList,2,3 );

        unDirect(unList,3,0 );

        unDirect(unList,4,1 );
  
       // cyclic(unList,unList[0]);
        printList(unList);

        
*/

        //implementation using my single linked list class
        singleLS s1;
        s1.insert(3);
        s1.insert(5);
        s1.insert(8);
        s1.insert(6);
        s1.insert(10);

        s1.display();
        s1.partition(6);
        //s1.display();
        //s1.insert(2);
       
        //std::cout<<"CHANGE: "<<endl;

        //s1.deleteOccurence(2);

       // s1.display();
        //cout<<endl;
        


        /*int main()
    {
        SinglyLinkedList s1;
        //s1.insert(1);
        //s1.insert(2);
        //s1.insert(2);
        //s1.insert(2);
        //s1.insert(3);
        //s1.insert(2);
        s1.display();
        std::cout<<"CHANGE: "<<endl;

        s1.deleteOccurence(5);
      
        s1.display();
        cout<<endl;
        return 0;
    }
   */


        return 0;
    }