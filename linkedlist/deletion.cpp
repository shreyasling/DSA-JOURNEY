#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data2) {
        data = data2;
        next = nullptr;
    }
};

Node* convertArrToLL(vector<int> &arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// HEAD
Node* deleteHead(Node* head) {
    if (head == nullptr) return nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;  // Use delete instead of free for C++ objects
    return head;
}

// TAIL
Node* deleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;  // Use delete instead of free for C++ objects
    temp->next = nullptr;
    return head;
}

int main() {
    vector<int> arr = {2, 5, 4, 12};
    Node* head = convertArrToLL(arr);

    // Deleting the head node
    head = deleteHead(head);

    // Deleting the tail node on the updated list
    head = deleteTail(head);

    // Print the updated list
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
