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
  ptr->data=num;
  ptr->next=NULL;
  
  return ptr;
}

void InsertAtEnd()
{
Node * temp=createNode();
  Node * temp1=start;
  while(temp1->next!=NULL)
  {
  temp1=temp1->next;
  }
temp1->next=temp;
}
