#include <stdio.h>

/**
 * This line defines a function called first with the
 * __attribute__((constructor)) directive. 
 * This directive indicates that the first function will be
 * executed before the main function is called.
 */
void first()__attribute__((constructor));

/**
 * first - outputs the message
 */

void first()
{
  printf("You're beat! and yet, you must allow,\n");
  printf("I bore my house upon my back!\n");
}
