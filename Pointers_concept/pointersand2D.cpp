#include<iostream>
using namespace std;
int table(int xVal, int yVal)
{
	
	int ** array = new int*[xVal];
	for(int i=0;i<r;i++)
	array[i]=new int[yVal];

    for(int i = 0; i < xVal; ++i)
        for(int j = 0; j < yVal; ++j)
            array[i][j] = array[i][j] * j;
	
}

int main()
{
    int solution;
    int rows;
    int columns;
    cin>>rows;
    solution = tabel(rows,columns);
}