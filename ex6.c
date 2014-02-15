#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	char initial = 'S';
	char first_name[] = "Nabeel";
	char last_name[] = "Qureshi";
	
	printf("You are %d miles away\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("My whole name is %s %c. %s.\n",
		first_name, initial, last_name);
		
	return 0;	
}