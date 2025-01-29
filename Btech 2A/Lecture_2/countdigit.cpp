#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b =a;
    
    int r=0;

    for(;a!=0;a=a/10){
        r++;
    }
    // while(a!=0){
    //     a=a/10;
    //     r++;
    // }
    cout<<"digits are:"<<r<<endl;

    bool odd=true;

    if(r%2==0){
        odd=false;
    }

    int oddn=0,evenn=0;
    while(b>0){
        int x = b%10;
        if(odd==true){
            oddn+=x;
            odd=false;
        }
        else{
            evenn+=x;
            odd=true;
        }
        b=b/10;
    }

    cout<<oddn<<" "<<evenn;




}


