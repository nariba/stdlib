#include <stdio.h>
#include <stdlib.h>

int main(int argc,  char *argv[]) {
    printf("argc: %d\n", argc);
    if (2 != argc) {
        fprintf(stderr, "usage: atof number\n");
        return -1;
    }
    float output = atof(argv[1]);
    printf("input: %s output: %f\n", argv[1], output);
    return 0;
}
