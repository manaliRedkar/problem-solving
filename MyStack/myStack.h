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
        void checkMin();

        /**
        *As the user deletes the top most elements, this method takes care of the situation where the minimum element itself is deleted from the stkMin stack
        *@param top takes the index of the top most element 
        */
        //same here, do you really need to passs top? can you do it without passing?
        void popMin();

    public:

        //parameterized constructor: Creates an array for the stack, that will store/delete elements while we push, pop etc  
        myStack(int s);

        /**
        Method push: is to push new elemenets in the stack as the user enters the data
        @param val is the data entered by the user 
        */
          
        void push(int val);

        /**
        Method pop: is to delete the top most element in the stack 
        */
        void pop();
        

        //method peek: displays the top most element
        //i dont like the fact that peek is deciding what the user wants to do. 
        //think of a situation, I as a user needs to peek the value and carry out some operations on that number. how will i do that?
        int peek();

        //method getMIn; returns the minimum element that is the top most element on the stkMin
        int getMin(int size);
        

};