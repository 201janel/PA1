/*
 * Filename: checkTable.c
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
 * Function Name: checkTable
 * Function Prototype: checkTable(char* str, linkedListNode_t** hashtbl);
 * Description: Check a hashtable for a specified string
 * Parameters: str - pointer to a string to be checked
 * 			   hashtbl - pointer to a pointer of a hashtable to search
 * Side Effects: None
 * Return value: int that represents if string was found
 */
int checkTable(char* str, linkedListNode_t** hashtbl) {
	
	// Check if hashtbl contains the element
	if (retrieveLinkedList(*hashtbl, *str) == NULL) {
		return 0;
	}

	// Look for node with element 
	linkedListNode_t* current = retrieveLinkedList(*hashtbl, *str);
	while (current != NULL) {
		if (strcmp(current->value, str) == 0) {
			return 1;
		} else {
		current = current->next;
		}
	}
	return 0;
}

