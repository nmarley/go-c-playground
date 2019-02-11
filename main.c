#include "nautilus.h"
#include <stdio.h>

// for further info:
// https://golang.org/cmd/cgo/#hdr-C_references_to_Go

int main(int argc, char *argv[], char *envp[]) {
    char *name = "Jack";

    printf("This is a C application\n");

    SayHello(argc > 1 ? argv[1] : name);
    SayBye();
    return 0;
}
