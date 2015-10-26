#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define NTHREADS 4 

/*
    For this example, ensure that the number of
    threads = 4
*/

int main () {
    int i;
    int tid;
    int locals[4];
    int nthreads;
    int total;

    #pragma omp parallel private(tid, total)
    {   
        total = 0;
        tid = omp_get_thread_num();
        locals[tid] = 1; 
        //#pragma omp barrier
        total = locals[0] + locals[1] + locals[2] + locals[3];
        printf("%d\n", total);
    }
    
}
