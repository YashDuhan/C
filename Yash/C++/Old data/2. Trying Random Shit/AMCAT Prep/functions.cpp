#include <iostream>
using namespace std;

//Local Variables
/*
   void func()
   {
    //this variable is local to the function func() and cannot be accessed outside of this function
    int age=18;
    cout<<age;
   }
   int main()
   {
    cout<<"Age is : ";
    func();
   }
 */

//Global Variables


/*
   int num =5;
   //global variables are accessed frim within a function

   void display()
   {
    cout<<num<<endl;
   }

   int main()
   {
    display();
    //changing global values from main function
    num=10;
    display();
   }
 */

//Solving Questions

/*
   int main(){
    char a='\022';
    cout<<(int)a;
    return 0;}
 */

/*
   int main()
   {
    float c=5.0;
    cout<<"Temperature in faherniet is "<<(9/5)*c+32;
    return 0;
   }
 */

int var=20;
int main(){
        int var=var;
        cout<<var;
        return 0;
}
