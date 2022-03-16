#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 9000

int main(void) {

	FILE* fp = fopen("test_trace.txt", "wt");

	if (fp != NULL) {
		srand((unsigned int)time(NULL));

		for (int i = 0; i < MAX_SIZE; i++) {
			fprintf(fp, "%d, ", rand() % 301);
		}
		fclose(fp);
	}
	return 0;
}