#include <stdio.h>
#include <stdlib.h>

int my_strlen(int *str)
{
	/* TODO */
	int count = 0;
	while (*(str + count)) {
		count++;
	}
	return count/2;
}

void print_binary(int number, int nr_bits)
{
	/* TODO */
	nr_bits = 32;
	printf("0b0");
	long i;
	for (i = (1<<(nr_bits -2)); i > 0; i=i/2) {
		if(number&i)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

void check_parity(int *numbers, int n)
{
	/* TODO */
	int nr = 32;
	//n=my_strlen(*numbers);
	for (int i = 0; i < n; ++i)
		if( (*(numbers + i) | 1) > (*(numbers + i)))
			print_binary(*(numbers +i), nr);
		else {
			printf("0x%x\n", (*(numbers + i)));
		}
}

int main()
{
	/* TODO: Test functions */
	int numbers[3]={214,233271,84};
	int n=my_strlen(numbers);
	check_parity(numbers, n);
	return 0;
}

