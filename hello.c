#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

/*
    set OMP_NUM_THREADS=n
    to print "Hello world!" using n threads
*/

int main () {

    #pragma omp parallel
    {
        printf("Hello world!\n");
    }
}
