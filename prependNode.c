/*
 * Filename: prependNode.c
 * Author: Janel Yap
 * UserId: cs30s121br
 * Date: July 13, 2021
 * Sources of help: PA1 writeup
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include "pa1.h"
#include "pa1Strings.h"
#include "util.c"

/*
 * Function Name: prependNode
 * Function Prototype: prependNode(linkedListNode_t** head, char* str);
 * Description: Pushes a node onto the front of a linked list
 * Parameters: str - pointer to a string to add
 * 			   head - pointer to a pointer of the head of a linked list
 * Side Effects: None
 * Return value: None
 */
void prependNode(linkedListNode_t** head, char* str) {
	// Create new node
	linkedListNode_t * newHead = newLinkedListNode();
	char * newStr = malloc(strlen(str)+1); 
	strcp(newStr, str);
	newHead->value = newStr;

	// Attach the new node to the list as the head
	newHead->next = *head;
	*head = newHead;
}
