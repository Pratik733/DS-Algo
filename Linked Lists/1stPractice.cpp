#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
        int data;
        Node* next;
};

void printList(Node* head){
    while (head != NULL){
        cout<<head->data << " ";
        head = head->next;
    }
    
}

int main(){
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;
    if(head->next == first){
        cout<<"yess";
    }
    printList(head);

    return 0;
}