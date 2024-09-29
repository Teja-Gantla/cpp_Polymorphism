#include <iostream>
using namespace std;
//Operating overloading  means can give a SPECIAL BEHAVIOUR of (or meaning)
// to an operator.When it is applied to an instance of a class or a user-defined data type.
// SPECIAL BEHAVIOUR MEANS:
// x = 1; y = 2; This are predefined data type.
// x+b = 3; The + operator perform addition operation.
// Coming to operator overloading perform the operation between two objects which means user-defined data types.
// By using this operator overloading method we can acheive that operations.
// syntax ===> returnType Operator Symbol(arguments).

// In this operator overloading have 2-types ==> 1.Uniary Operator 2.Binary Operator 
    // Uniary operator =>perform operation is increament or decreament with only one operand.
class uniaryOperator{
    int num;
    public:
     uniaryOperator(){
        num = 1;     
     }
    //  void display(){
        // cout <<"num = "<<num<<endl;
    //  }

    void operator ++(){
       ++num;
        cout <<"num = "<<num<<endl;
    }

};
int main(){
     uniaryOperator obj;
     ++obj;
    //  obj.display(); 
    return 0;
}