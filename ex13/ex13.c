#include <stdio.h>

int main(int argc, char *argv[])
{
int i =0;

//go through each string in argv
//why skip argv[0] ? because its is the calling programs name

	for(i =1; i < argc; i++){
		printf("arg %d: %s\n",i,argv[i]);
	}	

	char *states[] = {
	"California", "Oregon",
	"Washington", "texas"
	};//need semicolons after declarations

	int num_states = 4;

	for(i=0; i< num_states; i++){
		printf("state %d: %s\n",i, states[i]);
	}// do not need semicolons after 
	return 0;
}
