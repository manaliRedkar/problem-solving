/*#include<iostream>
#include<stack>


using namespace std;
class myStack{
    private:
        int top;
        int * arr;
        stack <int> stkMin;
        int size;
    
        /**
        *Storing minimum values in stkMin:
        *@param top is getting the index of the top most element
        *@param val is getting the value that needs to be pushed in the stackMin if and only if its smaller than the value that is pushed in the myStack bu the user
        */

        //why do you have to pass "top" and "val"? can you think of a way without passing these values in arguments?
        //hint hint: change name to "checkMin" instead of pushMin
        void checkMin(){
            if(top==0)
                stkMin.push(arr[top]);
            else
                {
                    if(arr[top]<stkMin.top())
                        stkMin.push(arr[top]);
                }
        }

        /**
        *As the user deletes the top most elements, this method takes care of the situation where the minimum element itself is deleted from the stkMin stack
        *@param top takes the index of the top most element 
        */
        //same here, do you really need to passs top? can you do it without passing?
        void popMin(){
            if(top>=0 && arr[top]==stkMin.top())
                    stkMin.pop();
        }

    public:

        //parameterized constructor: Creates an array for the stack, that will store/delete elements while we push, pop etc  
        myStack(int s)
        {
            size = s;
            top = -1;
            arr = new int[size];
            for(int i=0;i<size;i++)
            {
                arr[i] = INT_MAX;
            }
            
        }

        /**
        Method push: is to push new elemenets in the stack as the user enters the data
        @param val is the data entered by the user 
        */
          
        void push(int val)
        {
            if(top==(size-1))
                cout<<"Stack overflow";
            else
            {
                top++;
                arr[top]=val; 
            }

            //calls the pushMin method
            checkMin();
        }

        /**
        Method pop: is to delete the top most element in the stack 
        */
        void pop()
        {
            if(top == -1)
                cout<<"Stack is empty";
            else
            {
                //calls popMin
                popMin();
                arr[top] = 0;
                top--;

            }
        }

        //method peek: displays the top most element
        //i dont like the fact that peek is deciding what the user wants to do. 
        //think of a situation, I as a user needs to peek the value and carry out some operations on that number. how will i do that?
        int peek()
        {
            if(top==-1)
                {
                    cout<<"The array is empty. "<<endl;
                    return -1;
                }
                   
            else
                return arr[top];        
        }

        //method getMIn; returns the minimum element that is the top most element on the stkMin
        int getMin(int size)
        {            
            return stkMin.top();    
        }
        

};

int main()
{
    
    //Menu driven program to ask the user to enter size of the stack and then what is to be done with that data
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
            //case 0: Exits the program
            case 0:
                    exit(0);
                    break;

            //case 1: Only allows integers to be added to the stack
            case 1: 
                {
                cout<<"Enter the number you want to add to the stack: "; 
                int dataTobeEntered = 0;
                while(dataTobeEntered < size)
                {
                    while(!(cin>>value))
                    {
                      cout<<"Error: Enter the number: ";
                      cin.clear();
                        cin.ignore(123,'\n');
                    }

                     s1.push(value);
                     dataTobeEntered++;
                }
                break;
                }

            //case 2: User wants to delete the op element
            case 2:
                cout<<"Deleted the top element"<<endl;
                s1.pop();
                break;
            
            //case 3: User wants to see the top element(most recently added element)
            case 3:
                cout<<"What is the top most element? ";
                cout<<s1.peek();
                cout<<endl;
                break;

            //case 4: User wants to find the minimum among the elements just added
            case 4:
                cout<<s1.getMin(size);
                cout<<endl;
                break;
            
            //Anthing other than the above option numbers will have a default output
            default : cout<<"Wrong choice"<<endl;
        
        }

    } while(choice!=0);

    return 0;
}*/