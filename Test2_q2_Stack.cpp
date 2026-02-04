/* Question : Array stack implementation for Car ShowRoom Simulation   */

// Name :
// Matric Num :

# include<iostream>
#include<string>
const int SIZE=7;

using namespace std;

class CarStack
{
    int top;
    public:
    string car[7];  
    CarStack()
    {
        top = -1;
    }
    
    
    void push(string x);
    void pop();
    bool isEmpty();
    bool isFull();
    string stackTop();
    void display();
	int checkSize();   
};


void CarStack::push(string x)
{
    if(isFull())
    {
        cout << "CarStack Overflow \n";
    }
    else
    {
    	top++;
        car[top] = x;
    }
}


void CarStack::pop()
{
    if(isEmpty())
        cout << "CarStack Underflow \n";
    else
        top--;
}


bool CarStack::isEmpty()   
{
    if(top < 0)
    {
        return true;
    }
    else
    {
     return false;
    }
}
    


bool CarStack::isFull() 
{
    if(top >SIZE-1)
    {
        return true;
    }
    else
    {
     return false;
    }
}
    
    
//*Task 1 : stackTop implementation - 8M
//-------------------------------------------
string CarStack::stackTop()
{
    if(!isEmpty())
        return car[top];
    else 
        return " ";
}





//*Task 2 : display implementation - 12M
//----------------------------------------------

void CarStack::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<car[i]<<endl;
    }
}




    
//*Task 3 :   checkSize implementation 8M
//-------------------------------------------------    

int CarStack::checkSize()
{
    return top+1;
}




// main function
int main() {

    CarStack s1;
    string theCars[7]={"Estima","Alphard","Velphire","Mazda","Nissan","Shilpy","Vios"};
    
     /*
        perform the operation that represent the output in the question 
    */
    
    //*Task 4 - in main function 
    //----------------------------------------------------------------------
    
	// i) Use the appropriate code that able to push theCars elements into the stack. 
	   // Display all the elements  - 8M 
      
    for(int i=0;i<7;i++){
        s1.push(theCars[i]);
    }
    s1.display();
    cout<<endl;
       
   
   
    //ii) Use the appropriate code that able to remove and display the removed  
	     // 2 top elements in the stack - 6M
	    
    cout<<"Remove"<<s1.stackTop()<<endl;
    s1.pop();
    cout<<"Remove"<<s1.stackTop()<<endl;
    s1.pop();  

    cout<<endl;
   
    
    //iii) Display all the elements in the stack.
		// Use the appropriate code that able to display the number of elements in the stack - //8M

    s1.display();
    cout<<"\n#Cars in ShowRoom : "<<s1.checkSize()<<endl;

   //-------------------------------------------------------------------------------------------
}
