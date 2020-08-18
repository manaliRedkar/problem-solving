#include<iostream>
using namespace std;
class Stack{
    private:
        int top;
        int arr[5];
    public:
        Stack()
        {
            top = -1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
        }

        bool isEmpty()
        {
            if(top==-1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(top==4)
                return true;
            else
                return false;
        }

        void push(int val)
        {
            if(isFull())
                cout<<"Stack overflow"<<endl;
            else
                top++;
                arr[top]=val;

        }

        int pop()
        {
            if(isEmpty())
            {
                cout<<"Stack underflow"<<endl;
                return 0;
            }
                
            else
            {
                int popvalue = arr[top];
                arr[top] = 0;
                return popvalue;
            }
                

        }

        int count()
        {
            return (top+1);
        }

        int change(int position,int value)
        {
           if(isEmpty())
                return 0;
            else
                arr[position]= value;
        }


        int peek(int position)
        {
            return arr[position];
        }

        int display()
        {
            for(int i=4;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }

};

int main()
{
    
    int choice,value,location;
    Stack s1;
    do
    {
        
        
        cout<<"1. Push an element"<<endl;
        cout<<"2. Pop an element"<<endl;
        cout<<"3. Peek to see"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit? Then choose 0 option"<<endl;

        cout<<"Enter choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0:
                    exit(0);
                    break;
            case 1: 
                cout<<"Enter the number you want to add to the stack: "; 
                cin>>value;      
                s1.push(value);
                break;
            
            case 2:
                cout<<"Delete the top element"<<endl;
                s1.pop();
                break;
            
            case 3:
                cout<<"What location do you want to see?";
                cin>>location;
                s1.peek(location);
                break;

            case 4:
                cout<<"Display"<<endl;
                s1.display();

            default : cout<<"Wrong choice"<<endl;
        
        }

    } while(choice!=0);

    return 0;
}