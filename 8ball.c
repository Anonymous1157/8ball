#include <stdlib.h>
#include <stdio.h>

int main () {
	FILE *r;
	const char *msg[5] = {
		"Yes!",
		"No.",
		"Maybe?",
		"I don't know...",
		"Can you repeat that question?"
	};

	r = fopen("/dev/random","r");

	if (r) {
		srand((unsigned int)fgetc(r));
		fclose(r);

		printf("Magic 8-ball says: %s\n", msg[rand()%5]);

		return 0;
	} else
		return 1;
}
