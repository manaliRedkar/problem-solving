

#include<iostream>
using namespace std;
/*
n: number of discs
fromBar: bar from where the disc is located
toBar: bar to where the disc is relocated
resBar: where the disc is rested
*/

int i=1;
void hanoi(int n,char source, char dest, char rest   )
{
    if(n==0)
    {
        //cout<<"Move "<< n << " from " << fromBar <<" to "<< toBar<< ". "<<endl;
        return;
    }

    hanoi(n-1,source,rest, dest);
    cout<<i<<"."<<" Move "<< n << " from " << source <<" to "<< dest<< ". "<<endl;
    i++;
    hanoi(n-1,rest,dest,source);
}

int main()
{
    int num = 3;

   hanoi(num,'S','D','A');
}
