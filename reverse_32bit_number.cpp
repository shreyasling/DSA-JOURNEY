#include <bits/stdc++.h>
using namespace std;
int reversebit(int n){
    int reverse=0;
    for(int i=0;i<32;i++){
        reverse=(reverse <<1) | (n&1);
        n>>=1;
    }
    return reverse;
}

int main(){
    int n;
    cin >> n;
    int ans=reversebit(n);
    cout << ans;
}



