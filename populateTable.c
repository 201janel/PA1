/*
 * Filename: populateTable.c
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
 * Function Name: populateTable
 * Function Prototype: populateTable(linkedListNode_t** hashtbl, 
 * 	FILE* dataFile);
 * Description: Populates hashtable by reading the datafile
 * Parameters: hashtbl - the hashtable to be populated
 * 			   datafile - the file to read from
 * Side Effects: None
 * Return value: None
 */

void populateTable(linkedListNode_t** hastbl, FILE* dataFile){
	char str[31];
	const char ch = '\n';
	char *charToReplace;

	// Read in each line of email addresses and store into str
	if (fgets(str, 31, dataFile) != NULL) {
		charToReplace = strchr(str, ch);
		*charToReplace = '\0';

		// For each character of str, turn character into a lower case
		for (size_t i = 0; i < strlen(str); i++) {
			tolower((unsigned char) str[i]);
		}

		// Add new string to the table
		llTableAddString(&hashtbl, &str);
	}
}
