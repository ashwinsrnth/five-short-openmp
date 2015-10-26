#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 32

/*
    In this program, we introduce
    the idea of private variables,
    and the omp for directive
*/

int main () {
    double *a;
    int i;
    int tid;
    int nthreads, chunk_size;
    
    a = malloc(N*sizeof(double));

    #pragma omp parallel private(i, tid)
    {
        nthreads = omp_get_num_threads();
        chunk_size = N/nthreads;
        tid = omp_get_thread_num();

        #pragma omp for
        for (i=0; i<N; i++) {
            a[i] = tid;
        }
    }

    for (i=0; i<N; i++) {
        printf("%f\n", a[i]);
    }
}
