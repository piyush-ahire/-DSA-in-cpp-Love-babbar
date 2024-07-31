#include<iostream>
using namespace std;

void reverse(string &str, int i, int j){

    cout<<"Call received for "<<str<<endl;

    //base case
    if(i>j)
        return ;

    swap(str[i], str[j]);

    i++;
    j--;

    //recursive call

    reverse(str, i, j);

}

int main(){

    string name;
    cin>>name;
    cout<<endl;

    reverse(name, 0, name.length()-1);
    cout<<endl;

    cout<<name<<endl;

    return 0;
}