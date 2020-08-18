#include"myStack.h"
#include<iostream>
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
}