//High Level Language means high level of Abstraction, which internally means Less efforts for the user.

/*
#include<stdio.h>
Preprocessor: replaces text (starting with #) with the actual content before the compilation begins.

Stdio.h: standard input output file.

Header file -> Contains declarations(prototypes) of functions like printf.
*/

#include<stdio.h>
int main() {
	printf("Shone Binu");
	return 0;
}

/*
Why Different Files?

Header Files-> Declaration of functions
C Standard library-> Actual definitions of functions
Linker-> maps the prototypes mentioned by the preprocessor to the actual code defined in the C library (Header files -> linker -> C standard library)

It's to decrease the size and computation power required to run the program. Now, if the function is called, the Header file will map it to the standard library.
*/