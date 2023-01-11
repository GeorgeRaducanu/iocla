#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max;
	int i;

	/* TODO: Implement finding the maximum value in the vector */
	max = v[0];
	i = 1;
label1:
	if (i == sizeof(v)/sizeof(v[0]))
		goto out; 
	if(max < v[i]) {
		max = v[i];
	}
	i++;
	goto label1;
out:
	printf("%d\n", max);
}
