/*
 * Filename: hash.c
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

/*
 * Function Name: hash
 * Function Prototype: unsigned int hash(char* str);
 * Description: Create the hash key of a string
 * Parameters: str - pointer to the string to be counted
 * Side Effects: None
 * Return value: The hash key of str
 */
unsigned int hash(char* str){
	unsigned int hashVal = HASH_START_VAL;
	
	// Compute hashVal and HASH_PRIME for characters on even indices
	int i;
	for(i = 0; i < strlen(str); i++) {
		if(i % 2 == 0) {
			hashVal = (hashVal * HASH_PRIME) + (int)str[i];
		} else {}
	}

	// Compute hashVal and HASH_PRIME for characters on odd indices
	for (i = 0; i < strlen(str) i++) {
		if(i % 2 == 0) {
		} else {		
			hashVal = (hashVal * HASH_PRIME) + (int)str[i];
		}
	}
	return hashVal;
}


