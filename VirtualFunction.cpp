#include<iostream>
using namespace std;

// Virtual function means the member function of the Base Class, Is re-defined in the Derived Class with the same member function name.
// It means refer the Base class member function to Derived Class member function.
// class base{
//     void memberFunction(){
    //   _________________
    //   ________________
//     }
// };
// class derived :public base{
//     void memberFunction(){
    //   _________________
    //   _________________
//     }
// };
// It's excutes only base class member funtion ,but we need both base and derived,so we use vitual function or function overiding method to this type of conditions.
// int main(){     
//      derived obj;
//      obj.memberFunction();
//     return 0;
// }

// 🌟.Itt is the member function which is declared within the BASE CLASS and re-defined by
// DERIVED CLASS is known as virtual function.

class base{
    public:
    virtual void memFunc(){
        cout<<"Base member function"<<endl;
    }
    void msg(){
        cout<<"Base class message"<<endl;
    }

};
class derived : public base{
    public:
    void memFunc(){
        cout<<"Derived member function"<<endl;
    }
    void msg(){
        cout<<"Derived class message"<<endl;
    }
};

int main(){
    
    base obj1;
    derived obj2;
    base *ptr;
    ptr = &obj1;
    //for this member function we use virtual function. But message function we don't use virtual function.
    // so again print the base class message.
    ptr ->memFunc();
    ptr ->msg();
    ptr = &obj2;
    ptr ->memFunc();
    ptr ->msg();
    return 0;
}


//output:
// Base member function
// Base class message
// Derived member function
// Base class message

