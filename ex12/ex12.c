#include <stdio.h>

int main(int argc, char* argv[])
{

	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Zed";
	char full_name[] = {
	'Z','e','d',' ','A','.',
	'S','h','a','w','\0'
	};
	printf("The size of an int: %ld\n",sizeof(int));
	printf("The size of areas(int[]): %ld\n",sizeof(areas));
	printf("The number of ints in areas: %ld\n",sizeof(areas)/sizeof(int));
	
	printf("The first ares is %lu, the second is %lu\n",areas[0],areas[1]);
	printf("The size of a char is %lu\n",sizeof(char));
	printf("The number of chars in full_name %lu\n",sizeof(name)/sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
	printf("name =\"%s\" and full_name = \"%s\"\n",name,full_name);
	return 0;

}
