#include<iostream>
using namespace std;

//Hierarchical inheritance
class A{
    public:
    void func1(){
        cout<<"Inside Func1 "<<endl;
    }
};



class B: public A{
    public:
    void func2(){
        cout<<"Inside Func2 "<<endl;
    }
};



class C: public A{
    public:
    void func3(){
        cout<<"Inside Func3 "<<endl;
    }
};



int main(){
    A obj1;
    obj1.func1();

    cout<<endl;

    B obj2;
    obj2.func1();
    obj2.func2();

    cout<<endl;

    C obj3;
    obj3.func1();
    obj3.func3();
 
    return 0;
}
 