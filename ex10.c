#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	// go through each string in argv
	// why skip argv[0]? because 0 is the program name.
	
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	// let's make our own array of strings
	
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;
	
	for(i = 0; i < num_states; i++) {
		printf("State %d: %s\n", i, states[i]);
	}
	
	return 0;
}