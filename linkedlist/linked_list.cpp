#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

int main(){
    vector<int> arr ={0,2,3,1};
    Node* y=new Node(arr[2],nullptr);
    cout << y->data;
}

 
