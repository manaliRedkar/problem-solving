#include<iostream>
using namespace std;

string toLowerCase(string str) {
        
    for(int i=0;i<str.length();i++)
    {
        if((int)str[i] > 64 && (int)str[i]<91 )
            str[i] = (int)str[i] + 32  ;
    }

    return str;
}


int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    cout<<toLowerCase(str)<<endl;
}