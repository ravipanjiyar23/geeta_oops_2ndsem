#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the max element
int maxElement(vector<int> &v) {
    return *max_element(v.begin(), v.end());
}

// Function to find the min element
int minElement(vector<int> &v) {
    return *min_element(v.begin(), v.end());
}



int main() {
    vector<int> v = {10, 20, 3, 7, 8};

    cout << "Max Element: " << maxElement(v) << endl;
    cout << "Min Element: " << minElement(v) << endl;



    return 0;
}
