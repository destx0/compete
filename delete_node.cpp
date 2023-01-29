#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    struct Node* head = NULL;
    head = new Node();
    head->data = 1;
    head->next = NULL;
    cout << head->data << endl;
    return 0;
}