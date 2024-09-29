#include<iostream>
using namespace std;
//Decima to Binary using Constructor.
class Dec_Binary{
  public:
//   created the constructor and it's a parameterized constructor.
   Dec_Binary(int num){
    int i = 1;
    int Binary_Number = 0;
    //assigned the value of the num.
     num = 1000;
    for(int j = num; j > 0; j = j/2){
        Binary_Number += num % 2 * i;
        i = i * 10;
        num = num / 2;
    }
    cout <<"Decimal to Binary "<<Binary_Number << endl;
    }
};
int main(){
    // c1 is object which means is when the object is called that moment constructor will be excuted.
     Dec_Binary c1(2);
    // In this case c1()object assign the value num = 2 ,when the excution will be happened the value of num will be reassign with the value which is assign in constructor function. 
    return 0;
}