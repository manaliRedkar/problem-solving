#include<iostream>


using namespace std;
class myStack{
    private:
        int top;
        int * arr;

    public:
        
        myStack(int size)
        {
            top = -1;
            arr = new int[size];
            for(int i=0;i<size;i++)
            {
                arr[i] = INT_MAX;
            }
            
        }
        void push(int val,int size)
        {
            if(top==(size-1))
                cout<<"Stack overflow";
            else
            {
                top++;
                arr[top]=val; 
            }
                 

        }

        void pop()
        {
            if(top == -1)
                cout<<"Stack is empty";
            else
                //int popValue = arr[top];
            {
                arr[top] = 0;
                top--;
            }
                


        }

        void peek()
        {
            if(top==-1)
                cout<<"The array is empty. "<<endl;   
            else
                cout<< arr[top];        
        }

        int getMin(int size)
        {
            int min=arr[0];
            for(int i =1;i<size;i++)
            {
                if(min>arr[i])
                min=arr[i];
            }
            cout<<"MINIMUM IS: "<< min;
            return min;
            
            
        }
        

};

int main()
{
    
    int choice,value,position,size,min;
    cout<<"Enter the size of your array ";
    cin>>size;
    cout<< "             ******" << endl;
    cout<<"1. Push an element"<<endl;
    cout<<"2. Pop an element"<<endl;
    cout<<"3. Peek to see"<<endl;
    cout<<"4.Find minimum"<<endl;
    cout<<"5. Exit? Then choose 0 option"<<endl;

    myStack s1(size);
    do
    {
        

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 0:
                    exit(0);
                    break;
            case 1: 
                cout<<"Enter the number you want to add to the stack: "; 
                while(!(cin>>value))
                {
                    cout<<"Error: Enter the number: ";
                    cin.clear();
                    cin.ignore(123,'\n');
                }

                s1.push(value,size);
                break;
            
            case 2:
                cout<<"Deleted the top element"<<endl;
                s1.pop();
                break;
            
            case 3:
                cout<<"What is the top most element? ";
                s1.peek();
                cout<<endl;
                break;

            case 4:
                
                s1.getMin(size);
                cout<<endl;
                break;
            

            default : cout<<"Wrong choice"<<endl;
        
        }

    } while(choice!=0);

    return 0;
}