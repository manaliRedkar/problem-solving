#include<iostream>
#include<stack>
using namespace std;

int MAXSIZEOFSTACK = 5;


class SetOfStacks
{

    private:
        stack<int> * arr;

    public:
        SetOfStacks()
        {
            arr = new stack<int>[MAXSIZEOFSTACK];
        }

        void platePush(int data)
        {
            bool pushed = false;
            int index = 0;
            while(pushed == false && index < MAXSIZEOFSTACK )
            {
                if(arr[index].size() < 3)
                {
                    arr[index].push(data);
                    pushed = true;
                }
                index++;
            }
        }

        void platePop()
        { 
            if(arr[0].empty())
            {
                cout<<"Stack is empty, can't pop!!";
                return;
            }


            int i = 0;
            while(i<(MAXSIZEOFSTACK-1))
            {
                if(arr[i+1].empty())
                {
                    arr[i].pop();
                    return;
                }
                i++;
            }
            arr[i].pop();
        }


        void plateTop()
        {
            if(arr[0].empty())
            {
                cout<<"Stack is empty, no top!!";
                return;
            }

            int i = 0;
            while(i<(MAXSIZEOFSTACK)-1)
            {
                if(arr[i+1].empty())
                {
                    cout<<arr[i].top();
                    return;
                    
                }
                i++;
            }

            cout<<arr[i].top();
        }

};


int main()
{
    
    SetOfStacks s1;
    s1.platePush(11);
    s1.platePush(22);
    s1.platePush(33);

    s1.platePush(99);
    s1.platePush(100);
    s1.platePush(200);


    s1.platePush(66);
    s1.platePush(212);
    s1.platePush(4636);

    s1.platePop();

    cout<<"TOP: ";
    s1.plateTop();
    cout<<endl;


    
    

   /*cout<<"TOP: ";s1.plateTop();
    cout<<endl;*/

    s1.platePop();
}


