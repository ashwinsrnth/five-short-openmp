#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 32

int main () {
    double *a, *b;
    int i;
    int tid;
    int nthreads, chunk_size;
    
    a = malloc(N*sizeof(double));
    b = malloc(N*sizeof(double));

    for (i=0; i<N; i++) {
        a[i] = i;
        b[i] = 0;
    }

    #pragma omp parallel private(i, tid)
    {
        nthreads = omp_get_num_threads();
        tid = omp_get_thread_num();

        #pragma omp for
        for (i=1; i<N-1; i++) {
            b[i] = (a[i+1] - a[i-1])/2.0;
        }
    }

    for (i=0; i<N; i++) {
        printf("%f\n", b[i]);
    }
}
