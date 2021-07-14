/*
 * Filename: retrieveLinkedList.c
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
 * Function Name: retrieveLinkedList
 * Function Prototype: retrieveLinkedList(linkedListNode_t** hashtbl,
 * 	char* string);
 * Description: Get an element in the hashtable
 * Parameters: string - pointer to a string to be retrieved
 * 			   hashtbl - pointer to a pointer of a hashtable to search
 * Side Effects: None
 * Return value: linkedListNode_t - pointer to a node that contains the 
 * 	specified element
 */
linkedListNode_t *retrieveLinkedList(linkedListNode_t** hashtbl, char* string) {
	
	// Find the index of the element and return the head node
	unsigned int elementIndex = hash(*string);
	elementIndex = elementIndex % DEFAULT_SIZE;

	return *hashtbl[elementIndex];
}
