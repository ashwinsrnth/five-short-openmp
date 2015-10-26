#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 128

int main () {
    int i;
    int tid;
    int nthreads;
    double x=0;

    #pragma omp parallel
    {
        #pragma omp atomic
        x += 1;
    }
    printf("%f\n", x);
}
