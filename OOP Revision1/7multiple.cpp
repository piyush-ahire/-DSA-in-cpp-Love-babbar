#include<iostream>
using namespace std;

class animal{
    public:
        int age;
        int weight;

    public:
        void bark(){
            cout<<"barking "<<endl;
        }
};

class human{
    public:
        string color;

    public:
        void speak(){
            cout<<"speaking "<<endl;
        }
};

//multiple inheritance

class hybrid : public animal, public human{

};

int main(){

    hybrid h;
    h.bark();
    h.speak();

    

    return 0;
}