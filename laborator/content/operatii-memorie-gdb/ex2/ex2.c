#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern)
{
	// char *neww = (char *)malloc((strlen(s) - strlen(pattern))*sizeof(char));
	// char *p = strstr(s, pattern);
	// if(p) {
	// 	for (int i = 0; i < (int)(p - s); i++)
	// 		*(neww + i) = *(s + i);
	// 	for (int i = (int)(p - s); i < strlen(s); ++i)
	// 		*(neww + i) = *(s + i - strlen(pattern));
	// }
	// return (char *)neww;
	char *aux = strstr(s, pattern);
	if (aux != NULL) {
		strcpy(aux, aux+strlen(pattern));
	}
	return aux;
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";
	char *p;
	// Decomentati linia dupa ce ati implementat functia delete_first.
	printf("%s\n", delete_first(p = strdup(s), pattern));
	free(p);
	return 0;
}
