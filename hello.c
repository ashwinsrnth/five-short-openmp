#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

/*
This is Hello world in OpenMP.
Set the environment variable
OMP_NUM_THREADS to some integer between 1 and 4
and run this program.
Remember to compile with -fopenmp
*/

int main () {

    #pragma omp parallel
    {
        printf("Hello world!\n");
    }
}
