#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    int max =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    return max;
}

int main(){
     int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=largestElement(arr,n);
    cout << m;
}