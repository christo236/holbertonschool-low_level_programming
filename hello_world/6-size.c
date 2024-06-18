#include <stdio.h>

int main(void) {
    printf("Taille de char: %lu octet(s)\n", sizeof(char));
    printf("Taille de int: %lu octet(s)\n", sizeof(int));
    printf("Taille de long int: %lu octet(s)\n", sizeof(long int));
    printf("Taille de long long int: %lu octet(s)\n", sizeof(long long int));
    printf("Taille de float: %lu octet(s)\n", sizeof(float));
    printf("Taille de double: %lu octet(s)\n", sizeof(double));
    printf("Taille de long double: %lu octet(s)\n", sizeof(long double));
    return 0;
}
