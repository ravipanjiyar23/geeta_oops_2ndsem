#include<iostream>
using namespace std;
int functionReverse(int n){
    int rev = 0;
    while(n > 0){
        int temp = n % 10;
        rev = rev * 10 + temp;
        n /= 10;
    }
    return rev;
}


int main(){
    int n;
    cin >> n;
    cout << functionReverse(n) << endl;
    return 0;
}

    

