//inserting element at the end of the linked list
void InsertAtEnd(int element , node * head)
{
node * temp=createNode(element);
node * temp1=head;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=temp;
}
