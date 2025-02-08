#include<iostream>
using namespace std;


class Hero{
    public:
    int fights;

    int won;

    int loss;



    void display(){
        if (won>6)
        {
            cout<<"he is a real hero"<<endl;
        }
        else{
            cout<<"he is not a real hero"<<endl;
        }
        
        
    }

};


int main(){
    Hero s1;

    s1.fights = 10;

    s1.won=9;
    s1.loss=1;

    s1.display();

    return 0;
}