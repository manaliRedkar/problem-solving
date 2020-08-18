#include<iostream>
using namespace std;
\

void compression(string str)
{
    int count;
    string comp;
    for(int i=0;i<str.length();i++)
    {
        count =1;
        while(i<str.length()-1 && str[i]==str[i+1])
        {
            count++;
            i++;
        }

    
cout<<str[i]<<count;
        
    }
    
}
int main()
{ 
    string str = "aaabbb";
    compression(str);
    cout<<endl;
}