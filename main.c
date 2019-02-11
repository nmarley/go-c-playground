#include "nautilus.h"
#include <stdio.h>

int main() {
    printf("This is a C application\n");

    // via https://golang.org/cmd/cgo/#hdr-C_references_to_Go :
    //
    // Go functions that take arguments of type string may be called with the C
    // type _GoString_, described above. The _GoString_ type will be
    // automatically defined in the preamble. Note that there is no way for C
    // code to create a value of this type; this is only useful for passing
    // string values from Go to C and back to Go.
    GoString name = {"Jack", 4};

    // ... because of the above, not sure how useful this really would ever be. :/

    SayHello(name);
    SayBye();
    return 0;
}
