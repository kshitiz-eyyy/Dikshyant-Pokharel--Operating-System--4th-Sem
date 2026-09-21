#include  <stdio.h>

int main() {
printf("===Data Type Sizes on This System on  This System ===\n\n");
printf("char: %zu bytes\n", sizeof(char));
printf("int: %zu bytes\n", sizeof(int));
printf("long: %zu bytes\n", sizeof(long));
printf("short: %zu bytes\n", sizeof(short));
printf("long long: %zu bytes\n", sizeof(long long));
printf("unsigned int: %zu bytes\n", sizeof(unsigned int));
printf("float: %zu bytes\n", sizeof(float));
printf("double: %zu bytes\n", sizeof(double));
printf("pointer: %zu bytes\n", sizeof(int*));

return 0;
} 

