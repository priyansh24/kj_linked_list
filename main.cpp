#include<iostream>
using namespace std;

struct node{
  int data;
  struct node* next;
}*start=NULL;

typedef struct node Node;

void main(){
  
}

Node* createNode(){
  int num;
  cin>>num;
  
  Node* ptr;
  ptr=(Node*) malloc(sizeof(Node));
  ptr->data=data;
  ptr->next=NULL;
  
  return ptr;
}
