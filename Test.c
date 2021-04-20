#include <stdio.h>
 
int main(void) {
	FILE *fp;

	fp = fopen("file.txt", "a");
	fprintf(fp, "Hello World\n");
	fclose(fp);
	return 0;
}
