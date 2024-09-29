#include<iostream>
using namespace std;

class newClass{  
    public:
    //Constructor name should be same as the classname.
    //By default it's having the Empty Constructor.
    newClass(int x1,int y1){
        cout << "parameterized constructor" << endl;
    }
};
//This is paramaerized constructor which is assigning the values of the constructor.
int main(){ 
    newClass c1(1,1);
    return 0;
}