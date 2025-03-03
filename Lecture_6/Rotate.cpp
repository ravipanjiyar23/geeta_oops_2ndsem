#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    k=k%n;
    vector<int>arr2;
    int rot=n-k;

    for(int i=rot;i<n;i++){
         arr2.push_back(arr[i]);
    }
    for(int i=0;i<rot;i++){
        arr2.push_back(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}