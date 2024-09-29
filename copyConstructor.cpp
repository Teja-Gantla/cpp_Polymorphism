#include<iostream>
using namespace std;

//copy constructor is a tyoe of constructor that intialize an object using another object with the same class.
class newClass{

    private:
    int x,y;
    public:
    newClass(int x1,int y1){
      x = x1;
      y = y1;
      cout<<"Paremeterized constructor called."<<endl;
    }
    //Copy Constructor.
    //&,After this pass the object here.
    newClass(const newClass &p1){
      x = p1.x;
      y = p1.y;
      cout<<"Copy constructor called."<<endl;
    }
    int getx(){
      return x;
    }
    int gety(){
      return y;
    }
};

int main(){
       newClass p1(24,25);
      //  In this p2 object pass the above object rather than values,It's basic concept of PASS BY VALUES. 
       newClass p2(p1);
       //And again call another copy constructor is p3.
       newClass p3 = p1;
       newClass p4 = p2;
      cout <<"p1.x value = "<< p1.getx()<<" p1.y value = "<< p1.gety()<<endl;
      cout <<"p2.x value = "<< p2.getx()<<" p2.y value = "<< p2.gety()<<endl;
      cout <<"p3.x value = "<< p3.getx()<<" p3.y value = "<< p3.gety()<<endl;
      cout <<"p4.x value = "<< p4.getx()<<" p4.y value = "<< p4.gety()<<endl;

    return 0;
}