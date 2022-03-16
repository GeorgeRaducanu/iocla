#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    int nr_elem = sizeof(v)/sizeof(int);

    char *char_ptr = (char *)&v;
    for (int i = 0; i<nr_elem * 4; ++i)
    	printf("%p -> 0x%hhx\n", char_ptr + i, *(char_ptr + i));

    short *short_ptr = (short *)&v;
    for (int i = 0; i<nr_elem * 2; ++i)
    	printf("%p -> 0x%hx\n", short_ptr + i, *(short_ptr + i));

    int *int_ptr = (int *)&v;
    for (int i = 0; i<nr_elem; ++i)
    	printf("%p -> 0x%x\n", int_ptr + i, *(int_ptr + i));

    return 0;
}
