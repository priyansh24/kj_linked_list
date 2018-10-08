#include<iostream>
using namespace std;

struct node{
  int data;
  struct node* next;
}*start=NULL;

typedef struct node Node;

Node* createNode();
void InsertAtEnd(int element);

void main(){
  
}

Node* createNode()
{
  int num;
  cin>>num;
  
  Node* ptr;
  ptr=(Node*) malloc(sizeof(Node));
  ptr->data=data;
  ptr->next=NULL;
  
  return ptr;
}

void InsertAtEnd(int element)
{
 Node * temp=creatNode(element);
 Node * temp1=start;
 while(temp1->next!=NULL)
 {
  temp1=temp1->next;
 }
 temp1->next=temp;
}
