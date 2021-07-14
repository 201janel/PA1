/*
 * Filename: spamFilter.c
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
 * Function Name: main
 * Function Prototype: main(int argc, char* argv[]);
 * Description: Parse the command line arguments and build a hashtable of emails
 * Parameters: argc - number of args
 * 			   argv - pointer to a string of arguments
 * Side Effects: None
 * Return value: int that represents end result: 0-sucess, 1-failure
 */
int main(int argc, char* argv[]) {
	if (argc == 1) {
		fprintf(stderr, SHORT_USAGE);
		return 1;
	}
	if (argc == 2) {
		fprintf(stderr, LONG_USAGE);
		return 0;
	}
	if (argc = 3) {

		// Create a new hashtbl
		linkedListNode** newList = newLinkedListArray(DEFAULT_SIZE);
		populateTable(&newList, &argv[2]);
		launchUserQuery(&newList);
		cleanup(&newList);
		return 0;
	} else {
		fprintf(stderr, INVALID_ARGS);
		return 1;
	}
}

