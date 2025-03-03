#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



// Function to find sum of even numbers
int evenSum(vector<int> &v) {
    int sum = 0;
    for (int num : v) {
        if (num % 2 == 0) sum += num;
    }
    return sum;
}

// Function to find sum of odd numbers
int oddSum(vector<int> &v) {
    int sum = 0;
    for (int num : v) {
        if (num % 2 != 0) sum += num;
    }
    return sum;
}



int main() {
    vector<int> v = {10, 20, 3, 7, 8};

    cout << "Even Sum: " << evenSum(v) << endl;
    cout << "Odd Sum: " << oddSum(v) << endl;

 

    return 0;
}
