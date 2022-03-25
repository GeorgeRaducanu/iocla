#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = v[5]; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;

	/* TODO: Implement binary search */
label:
	if (v[(start+end)/2] == dest)
		goto out;
	if (v[(start+end)/2] < dest) {
		start = (start+end)/2;
		goto label;
	}
	if (v[(start+end)/2] > dest) {
		end = (start+end)/2;
		goto label;
	}
out:
	// (void) dest;
	// (void) start;
	// (void) end;
	printf("%d\n", (start+end)/2);
}
