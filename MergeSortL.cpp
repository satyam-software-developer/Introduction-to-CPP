// #include <bits/stdc++.h>
// using namespace std;
// class Node 
// { 
//     public:
//     int data; 
//     Node* next; 
// };
// Node* MergeSortedLists(Node* head1, Node* head2) 
// { 
//     Node* result = NULL; 
      
//     if (head1 == NULL) 
//         return(head2); 
//     else if (head2 == NULL) 
//         return(head1); 
      
//     if (head1->data <= head2->data) 
//     { 
//         result = head1; 
//         result->next = MergeSortedLists(head1->next, head2); 
//     } 
//     else
//     { 
//         result = head2; 
//         result->next = MergeSortedLists(head1, head2->next); 
//     } 
//     return(result); 
// } 
// void insert(Node** head_ref, int new_data) { 
//     Node* newNode = new Node();
//     newNode->data = new_data; 
//     newNode->next = (*head_ref); 
//     (*head_ref) = newNode; 
// } 
// void printNodes(Node *node) { 
//     while (node!=NULL) { 
//         cout<<node->data<<" "; 
//         node = node->next; 
//     } 
// }
  
// int main() 
// { 
//     Node* result = NULL; 
//     Node* head1 = NULL; 
//     Node* head2 = NULL; 
    
//     insert(&head1, 9);
//     insert(&head1, 6);
//     insert(&head1, 4); 
//     insert(&head1, 2); 
//     insert(&head1, 1); 
    
//     insert(&head2, 8);
//     insert(&head2, 7); 
//     insert(&head2, 4); 
//     insert(&head2, 3); 
//     result = MergeSortedLists(head1, head2); 
  
//     printNodes(result); 
//     return 0; 
// } 

// #include <bits/stdc++.h>
// using namespace std;
// class Node 
// { 
//     public:
//     int data; 
//     Node* next; 
// };
// void MoveNode(Node** destRef, Node** sourceRef) 
// { 
//     Node* newNode = *sourceRef; 
//     assert(newNode != NULL); 
  
//     *sourceRef = newNode->next; 
  
//     newNode->next = *destRef; 
//     *destRef = newNode; 
// } 
// Node* MergeSortedLists(Node* head1, Node* head2) 
// { 
//     Node dummy; 
  
//     Node* result = &dummy; 
  
//     dummy.next = NULL; 
//     while (1) 
//     { 
//         if (head1 == NULL) 
//         { 
//             result->next = head2; 
//             break; 
//         } 
//         else if (head2 == NULL) 
//         { 
//             result->next = head1; 
//             break; 
//         } 
//         if (head1->data <= head2->data) 
//             MoveNode(&(result->next), &head1); 
//         else
//             MoveNode(&(result->next), &head2); 
  
//         result = result->next; 
//     } 
//     return(dummy.next);  
// } 
// void insert(Node** head_ref, int new_data) { 
//     Node* newNode = new Node();
//     newNode->data = new_data; 
//     newNode->next = (*head_ref); 
//     (*head_ref) = newNode; 
// } 
// void printNodes(Node *node) { 
//     while (node!=NULL) { 
//         cout<<node->data<<" "; 
//         node = node->next; 
//     } 
// }
  
// int main() 
// { 
//     Node* result = NULL; 
//     Node* head1 = NULL; 
//     Node* head2 = NULL; 
    
//     insert(&head1, 9);
//     insert(&head1, 6);
//     insert(&head1, 4); 
//     insert(&head1, 2); 
//     insert(&head1, 1); 
    
//     insert(&head2, 8);
//     insert(&head2, 7); 
//     insert(&head2, 4); 
//     insert(&head2, 3); 
//     result = MergeSortedLists(head1, head2); 
  
//     printNodes(result); 
//     return 0; 
// } 


// #include <bits/stdc++.h>
// using namespace std;
// class Node 
// { 
//     public:
//     int data; 
//     Node* next; 
// };
// void MoveNode(Node** destRef, Node** sourceRef) 
// { 
//     Node* newNode = *sourceRef; 
//     assert(newNode != NULL); 
  
//     *sourceRef = newNode->next; 
  
//     newNode->next = *destRef; 
//     *destRef = newNode; 
// }
// Node* MergeSortedLists(Node* head1, Node* head2) 
// { 
//     Node* result = NULL;
  
//     Node** lastptr = &result;
  
//     while (1) {
//         if (head1 == NULL) {
//             *lastptr = head2;
//             break;
//         }
//         else if (head2 == NULL) {
//             *lastptr = head1;
//             break;
//         }
//         if (head1->data <= head2->data)
//             MoveNode(lastptr, &head1);
//         else
//             MoveNode(lastptr, &head2);
  
//         lastptr = &((*lastptr)->next);
//     }
//     return (result);
// } 
// void insert(Node** head_ref, int new_data) { 
//     Node* newNode = new Node();
//     newNode->data = new_data; 
//     newNode->next = (*head_ref); 
//     (*head_ref) = newNode; 
// } 
// void printNodes(Node *node) { 
//     while (node!=NULL) { 
//         cout<<node->data<<" "; 
//         node = node->next; 
//     } 
// }
  
// int main() 
// { 
//     Node* result = NULL; 
//     Node* head1 = NULL; 
//     Node* head2 = NULL; 
    
//     insert(&head1, 9);
//     insert(&head1, 6);
//     insert(&head1, 4); 
//     insert(&head1, 2); 
//     insert(&head1, 1); 
    
//     insert(&head2, 8);
//     insert(&head2, 7); 
//     insert(&head2, 4); 
//     insert(&head2, 3); 
//     result = MergeSortedLists(head1, head2); 
  
//     printNodes(result); 
//     return 0; 
// } 



#include <iostream>
using namespace std;
class Node 
{ 
    public:
    int data; 
    Node* next; 
};
void reverse(Node *&head_ref) {
    Node *temp = NULL;
    Node *prev = NULL;
    Node *current = (head_ref);
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (head_ref) = prev;
}
void MoveNode(Node** destRef, Node** sourceRef) 
{ 
    Node* newNode = *sourceRef; 
    (newNode != NULL); 
  
    *sourceRef = newNode->next; 
  
    newNode->next = *destRef; 
    *destRef = newNode; 
}
Node* MergeSortedLists(Node* head1, Node* head2) 
{ 
    Node* res = NULL;
  
    Node* temp = NULL;
    reverse(head1);
    reverse(head2);
    
    while (head1 and head2) {
        if(head1->data>=head2->data){
            temp = head1->next;
            head1->next = res;
            res = head1;
            head1=temp;
        }
        else{
            temp = head2->next;
            head2->next = res;
            res = head2;
            head2 = temp;
        }
    }
    while(head1){
        temp = head1->next;
        head1->next = res;
        res = head1;
        head1=temp;
    }
    while(head2){
        temp = head2->next;
        head2->next = res;
        res = head2;
        head2 = temp;
    }
    return (res);
} 

void insert(Node** head_ref, int new_data) { 
    Node* newNode = new Node();
    newNode->data = new_data; 
    newNode->next = (*head_ref); 
    (*head_ref) = newNode; 
} 
void printNodes(Node *node) { 
    while (node!=NULL) { 
        cout<<node->data<<" "; 
        node = node->next; 
    } 
}
  
int main() 
{ 
    Node* result = NULL; 
    Node* head1 = NULL; 
    Node* head2 = NULL; 
    
    insert(&head1, 9);
    insert(&head1, 6);
    insert(&head1, 4); 
    insert(&head1, 2); 
    insert(&head1, 1); 
    
    insert(&head2, 8);
    insert(&head2, 7); 
    insert(&head2, 4); 
    insert(&head2, 3); 
    result = MergeSortedLists(head1, head2); 
  
    printNodes(result); 
    return 0; 
} 