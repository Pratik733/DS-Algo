#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
        int value;
        Node* next;
};

//Print List
void printList(Node* head){
    while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

//Delete with head given
void deleteNode(Node* head, int num){
    Node* prev = head;

    if(head->value == num){
        head->value = head->next->value;
        head->next = head->next->next;
        return;
    }

    head = head->next;

    while(head != NULL){
        if(head->value == num){
            prev->next = head->next;
            return;
        }
        prev = head;
        head = head->next;
    }
    
    cout<<"Node with value "<<num<<" not found"<<endl;
}

//Delete without head given
// void deleteWithoutHead(Node* node){
//     if(node->next==NULL){
//         node->value = NULL;
//         return;
//     }
//     node->value = node->next->value;
//     Node* temp = node->next;
//     node->next = temp->next;
//     temp->next = NULL;
// }

void insertNode(Node* head, Node* node, int num){
    // Node* prev = head
    while(head!=NULL){
        if(head->value==num){
            break;
        }
        // prev = head;
        head = head->next;
    }
    Node* temp = head->next;
    head->next = node;
    node->next = temp;
}

void reverseList(Node* head){
    Node* prev = NULL;
    Node* next = head->next;
    while(head!=NULL){
        head->next = prev;
        prev = head;
        head = next;
        if(next==NULL)
            break;
        next = next->next;
    }
    printList(prev);
}

// int x = 10;
int main(){
    int x = 10;
    {
        int x = 20;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    Node* head = new Node();
    Node* one = new Node();
    Node* two  = new Node();
    Node* three = new Node();
    Node* end = new Node();
    Node* odd = new Node();

    head -> value = 0;
    head -> next = one;

    one -> value = 1;
    one -> next = two;

    two -> value = 2;
    two -> next = three;

    three -> value = 3;
    three -> next = end;

    end -> value = 4;
    end -> next = NULL;

    odd -> value = 99;
    odd -> next = end;
    
    printList(head);

    // deleteNode(head,4);
    // printList(head);

    // deleteWithoutHead(end);
    // printList(head);
    
    insertNode(head,odd,0);
    printList(head);

    reverseList(head);


    return 0;
}