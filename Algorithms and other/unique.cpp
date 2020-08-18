
#include<iostream>
using namespace std;

/*bool unique(string word)
{
    
    for(int i=0;i<word.length();i++)
    {    
        for(int j=i+1;j<word.length();j++)
        {
            if((int)word[i] ==(int) word[j])
                //cout<<"i:"<< word[i]<<" j: "<<word[j]<<endl;
                return false;
        }
    }

return true;

}*/

//char alpha[2][26] = { {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };


bool uniqueLow(string word)
{
    int alpha[26] = {0};

    for(int i=0;i<word.length();i++)
    {
        int let = (int)word[i];
        if(alpha[let-97] == 0)
            alpha[let-97] = 1;
        else
            return false;
    }

    return true;

}

int main()
{
    string word = "pat";
    cout<<"Enter the string: ";
    cout<<word<<endl;

    /*bool final = unique(word);
    //cout<<final<<endl;


    if(final==1)
        cout<<"True ";
    else
        cout<<"False ";

    cout<<endl<<endl;*/


    cout<<uniqueLow(word)<<endl;

}