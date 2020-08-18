#include<iostream>
using namespace std;

void pixels(int mat[4][4],int  N)
{

    int t;
    int temp;


    /*
    for(int k=0;k<1;k++)
    {
        temp = mat[0][k+1];
        mat[0][k+1] = mat[0][k];
        t = mat[1][k+1];
        mat[1][k+1] = temp;
        temp = t ;

        t =  mat[k+1][0];
        mat[k+1][0] = temp;
        mat[k][k] = t;
    }
    */

    for(int i=0;i<N/2;i++)
    {
        for(int j=i;j<N-1-i;j++)
        {
            int t =mat[i][j]; 
            mat[i][j] = mat[N-1-j][i];
            mat[N-1-j][i] = mat[N-1-i][N-1-j];
            mat[N-1-i][N-1-j]= mat[j][N-1-i];
            mat[j][N-1-i] = t;
        }
    }
    

    //DISPLAY
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<<mat[i][j]<<"   ";
        cout<<endl;
    }
    
}
int main()
{
    int mat[4][4]= {{1,2,3,4}, {5,6,7,8} , {9,10,11,12} , {13,14,15,16} };
    pixels(mat,4);
}