/*
 * Filename: testprependNode.c
 * Author: Janel Yap
 * UserId: cs30s121br
 * Date: July 13, 2021
 * Sources of help: PA1 writeup
 */

#include <string.h>
#include <stdlib.h>

#include "test.h"
#include "pa1.h"

void testprependNode() {
	// Create new node and new hashtable to test
	linkedListNode_t* node1 = newLinkedListNode(); 
	linkedListNode_t ** list = newLinkedListArray(DEFAULT_SIZE);
	
	char str1[] = "First";
	node1->value = str1;
	
	unsigned int index1 = hash(str1) % DEFAULT_SIZE;

	// test empty list
	TEST(prependNode(*list, str1));
	// test linked list with one element
	// test linked list with multiple elements
	// test calling prepend multiple times on an empty list
	// test calling prepend multiple times on list with multiple nodes

}

/*
 * Function name: main()
 * Function prototype: int main();
 * Description: The test driver for. Runs specified tests.
 * Side Effects: None
 * Error Conditions: None
 * Return Value: 0 on exit success.
 */
int main() {
	fprintf( stderr, "Testing prependNode...\n\n" );
	testprependNode();
	fprintf( stderr, "\nDone running tests.\n" );
	return 0;
}
