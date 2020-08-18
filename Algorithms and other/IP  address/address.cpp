#include<iostream>
using namespace std;
string defang;
int index =0;
/*std::string defangIPaddr(std::string address) {
    std::string s2 = "[.]";
    for(int i=0;i<address.length();i++)
    {
        if(address[i] == '.')
            {
                address.replace(i, 1, s2);
                //cout<<"i: "<<i<<endl;
                i++;
                //cout<<"i: "<<i<<endl;
            }
    }

    return address;
    }*/

string defangIPaddr(string address) {


    for(int i=0;i<address.length();i++) //iterating thorugh addtres
    {
        if(address[i]!= '.')
        {
                //index = i;
                defang[index] = address[i];
        }
        
        else //(address[i] == '.')
        {
            index = i;
            defang[index] = '[';
            defang[index + 1]= '.';
            defang[index + 2] = ']';
            index = index + 3;
                //cout<<"i: "<<i<<endl;
        }

    }

    /*for(int i=0;i<defang.length();i++)
        cout<<"def "<<i<<" "<<defang[i]<<" "; 

    return defang;
    }



int main()
{
    string add = "1.2.3.4";
    cout<<"Enter IP address: ";
    //getline(std::cin,add);
    cout<<add<<endl;
    cout<<endl;
    cout<<defangIPaddr(add)<<std::endl;

}