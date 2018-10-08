//display node in a singlylinkedlist
void display() {
  int count = 0;
  NODE* tempnode = start;
  printf("display the linked list");
  while (tempnode != Null) {
    printf(" %d  ", tempnode->value);
    count++;
    tempnode = tempnode -> next;
  }
  printf("\Number of elements in the linked list : %d\n", count);
}
