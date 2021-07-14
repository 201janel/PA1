/*
 * Filename: llTableAddString.c
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
 * Function Name: llTableAddString
 * Function Prototype: 
 * 		llTableAddString(linkedListNode_t** hashtbl, char* string)
 * Description: Add a string to hash table using Nodes
 * Parameters: string - pointer to a string to add
 * 			   hashtbl - pointer to a pointer of a hash table
 * Side Effects: None
 * Return value: None
 */
void llTableAddString(linkedListNode_t** hashtbl, char* string) {
	
	// Find the right index to add the string to
	unsigned int hashVal = hash(*string);
	unsigned int index = hashVal % DEFAULT_SIZE;

	// Add the string to the hashtable using the index
	prependNode(&hashtbl[index], &string);
}

