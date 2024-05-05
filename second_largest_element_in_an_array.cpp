#include <bits/stdc++.h> 
using namespace std;
int second_largestElement(vector<int> &arr, int n) {
    int max =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    int max2=0;
    for(int i=0;i<n;i++){
        if(arr[i] >max2 && arr[i]!=max){
            max2=arr[i];
        }
    }
    return max2;
}

int main(){
     int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=second_largestElement(arr,n);
    cout << m;
}