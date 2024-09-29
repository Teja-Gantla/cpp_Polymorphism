#include<iostream>
using namespace std;

class funOverloading{
    //functionOverloading is where two or more functions can have the same name with different arguments.
      public:
      //function 1, with 2 arguments.
      void sum(int x,int y){
        cout<<"sum of the two numbers "<< (x+y)<<endl;
      }
      //same function with 3 arguments.
      void sum(int x,int y,int z){
        cout<<"Sum of the three numbers "<< (x+y+z)<<endl;
      }
};
int main(){
     funOverloading obj;
     obj .sum(1,2);
     obj.sum(2,3,4);

    return 0;
}