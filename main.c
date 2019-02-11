#include "nautilus.h"
#include <stdio.h>

// for further info:
// https://golang.org/cmd/cgo/#hdr-C_references_to_Go

int main() {
    char *name = "jack";

    printf("This is a C application\n");

    SayHello(name);
    SayBye();
    return 0;
}
