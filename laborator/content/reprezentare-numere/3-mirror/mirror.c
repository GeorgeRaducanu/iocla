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

void mirror(char *s)
{
	/* TODO */
	int N = my_strlen(s);
	int i = 0;
	char a;
	while(i< (N>>1)) {
		a = *(s+i);
		*(s+i) = *(s + (N - i -1));
		*(s + (N - i -1)) = a;
		i++;
	}
	printf("%s\n", s);
}

int main()
{
	/* TODO: Test function */
	char s[100];
	scanf("%s", s);
	mirror(s);
	return 0;
}
