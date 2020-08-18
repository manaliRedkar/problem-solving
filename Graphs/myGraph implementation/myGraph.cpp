#include<iostream>
#include<vector>
#include<list>

using namespace std;
//undirected graph
//p:row number
//q:col number
void addEdge(int adj[5][5] , int p, int q)
{ 
    //for vector:
    //adj[p].push_back(q); 
    //adj[q].push_back(p);


    adj[p][q]=1;
    adj[q][p]=1;

} 


void printGraph(int adj[5][5])
{
     for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<adj[i][j] ;
            cout<<" ";
        }
           
        cout<<endl; 
    }
}

void adjList(list<int> adjarraylist[5], int pos , int val)
{

    adjarraylist[pos].push_back(val);
}

/*void printGraph(int * adj, int V)
{
    for (int i = 0; i < V; i++) 
    {   
        cout << "\n Adjacency list of vertex "
             << i << "\n head "; 
        for (auto x : adj[i]) x
        //for(auto x=0;x<i;x++)
           cout << " -> " << x; 
        cout<<("\n"); 
    } 
}
  */


void printList(list<int> adjarraylist[5])
{
    for(int j=0;j<5;j++)
    {
        for (list<int>::iterator i = adjarraylist[j].begin(); i != adjarraylist[j].end(); ++i)
            cout << *i << " ";
        
    cout<<endl;
    }
    
     

}
int main()
{
    //int adj[5][5] = {0};

    //int a;
    //cout<<sizeof(a)<<endl;
    
    /*list<int> myList;
    list<int> yourList;

    myList.push_back(3);
    myList.push_back(44);

    yourList.push_back(1);*/

    list<int> adjarraylist[5]; 

    adjList(adjarraylist,0, 1);
    adjList(adjarraylist,0, 4);

    adjList(adjarraylist,1,2);
    adjList(adjarraylist,1,3);

    adjList(adjarraylist,2,4);
    adjList(adjarraylist,2,55);

    adjList(adjarraylist,3,4);
    adjList(adjarraylist,3,5);


    adjList(adjarraylist,4,3);



    printList(adjarraylist);
    

    
    


/*
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4);
*/
  
    //printGraph(adj);

    
    return 0;
}