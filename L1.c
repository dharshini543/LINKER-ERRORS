#include<stdio.h>

extern void foo();  // Declaration of foo()

int main()
 {
    foo();  // Call to foo(), but no definition
}



