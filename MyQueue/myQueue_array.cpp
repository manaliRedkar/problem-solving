#include<iostream>
using namespace std;


class myQueue
{
    private:
        int front = -1;
        int rear = -1;
        int size;
        int * arr;

         bool isEmpty()
        {
            if(rear == -1 && front == -1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(rear == (size-1))
                return true;
            else
                return false;

        }

    public:
        myQueue(int s)
        {
            size = s;
            arr = new int[size];
            for(int i =0;i<size;i++)
                arr[i] = INT_MAX;

        }

        void enqueue(int data)
        {
            if((isFull()))
                cout<<"Queue is full!"<<endl;
            else if(isEmpty())
                {
                    front++;
                    rear++;
                    arr[rear] = data;
                }
            else
                {
                    rear++;
                    arr[rear] = data;
                }     
        }      

        void dequeue()
        {
            //int dValue;
            if(isEmpty())
                cout<<"Queue is empty "<<endl;
            else if(rear == front)
            {
                front --;
                rear--;
                arr[front]=0;
                arr[rear]=0;
            }
            else
            {
                arr[front]= 0;
                front++;
            }

                
        }      

        void display()
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" ";
            }
        }  
    
};



int main()
{
    int size =5; int choice,data;
    myQueue q1(size);
    q1.enqueue(4);
  q1.enqueue(10);
  q1.enqueue(414);
  q1.enqueue(6);
  q1.enqueue(-1);

  q1.display();
cout<<endl;
  q1.dequeue();
cout<<endl;
 q1.display();
cout<<endl;

    /*cout<<"Enter the size of your queue(array): ";
    cin>>size;
    myQueue q1(size);
    cout<<"1:Queue; 2:Dequeue; 3:Display  Choose: ";
    int op;
    cin>>op;

    if(op==1)
    {
        for(int i=0;i<size;i++)
        {   
            cout<<"Enter your elements: ";

            while(!(cin>>data))
            {
                cout<<"ERROR: Only integers allowed,enter again: ";
                cin.clear();
                cin.ignore(123,'\n');
            }
            q1.enqueue(data);
        }
    }

    else if(op==2)
    {
        q1.dequeue();
    }

    else if(op==3)
    {
        q1.display();
    }
    
    */


}
/*{
    int size =0; int choice,data;
    cout<<"Enter the size of your queue(array): ";
    cin>>size;
    myQueue q1(size);

    cout<<"1.Enqueue: "<<endl;
    cout<<"2.Dequeue: "<<endl;
        
    do
    {
        cout<<"Your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 0: exit(0);
                    break;

            case 1:
            {
            
                cout<<"Enter your elements: ";
                while(!(cin>>data))
                {
                    cout<<"ERROR: Only integers allowed,enter again: ";
                    cin.clear();
                    cin.ignore(123,'\n');
                }
                q1.enqueue(data);
               
                
                break;
            }
            case 2:
            {
                cout<<"Element deleted: ";
                q1.dequeue();
                break;
            }

            default: cout<< "Wrong choice ";

            case 3:
            {
                cout<<"Display: ";
                q1.display();
            }

        }

    }while(choice!=0);

}
*/

