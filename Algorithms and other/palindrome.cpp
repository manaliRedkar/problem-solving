#include<iostream>
using namespace std;

bool checkPalindrome(string pal)
{

    for(int i=0,j=pal.length() -1 ; i < pal.length() && j >=0 ; i++,j--)
    {   
        if(i<=j && pal[i] != pal[j])
        {
            if(pal[i]== ' ' || pal[j] == ' ')
                {(pal[i]==' ' ) ? (i++) : (j++);}

            else
            {
                cout<<pal[i]<<pal[j];
                return false;
            }
            
        }   
    }

    return true;
}

int main()
{
    string pal = "taco cat";
    cout<<"ANS: "<<checkPalindrome(pal)<<endl; 
}