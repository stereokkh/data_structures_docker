#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

//////////////////////////////////////////////////////////////////////////////////

typedef struct _listnode
{
	int item;
	struct _listnode *next;
} ListNode;			// You should not change the definition of ListNode

typedef struct _linkedlist
{
	int size;
	ListNode *head;
} LinkedList;			// You should not change the definition of LinkedList

int main(){
    ListNode node = {0, NULL};
    LinkedList ll = {1, &node};

    LinkedList* ll_pointer = (LinkedList *)((char *)&ll.head - offsetof(LinkedList, head));
    
 