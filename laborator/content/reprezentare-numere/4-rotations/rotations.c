#include <stdio.h>

void rotate_left(int *number, int bits)
{
	/* TODO */
	*number = (*number << bits) | ((*number) >> (32 - bits));
}

void rotate_right(int *number, int bits)
{
	/* TODO */
	*number = (*number >> bits) | ((*number) << (32 - bits));
}

int main()
{
	/* TODO: Test functions */
	int num, bits;
	scanf("%d %d", &num, &bits);
	int clone = num;
	rotate_left( &num, bits);
	printf("rotate_left %d\n", num);
	rotate_right(&clone, bits);
	printf("rotate_right %d\n", clone);
	return 0;
}