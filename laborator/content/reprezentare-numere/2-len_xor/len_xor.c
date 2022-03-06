#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	/* TODO */
	int count = 0;
	while (*(str + count)) {
		count++;
	}
	return count;
}

void equality_check(const char *str)
{
	/* TODO */
	int dim=my_strlen(str);
	int i = 0;
	while (i < dim) {
		if (!(*(str + i))^((*(str + i + (1<<i))%dim)))
			printf("Address of %c is %p and %p\n", *(str+i), str+i, str+i+(1<<i));
		i++;
	}
}

int main(void)
{
	/* TODO: Test functions */
	char s[100];
	scanf("%s", s);
	printf("%d\n", my_strlen(s) );
	equality_check(s);
	return 0;
}
