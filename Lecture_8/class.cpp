#include<iostream>
using namespace std;

class BtechA{
    public:
    int n;
    string name ;
    int rollno;

    void display(){
        cout<<name<<" "<<rollno<<endl;
    }
  
};

int main(){

    BtechA b1;

    b1.n = 38;
    b1.name = "kabir";
    b1.rollno = 123;

    b1.display();
    return 0;
}