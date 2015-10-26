barrier: barrier.c
	gcc -o out barrier.c -fopenmp

atomic_update: atomic_update.c
	gcc -o out atomic_update.c -fopenmp

stencil: stencil.c
	gcc -o out stencil.c -fopenmp

fill_array: fill_array.c
	gcc -o out fill_array.c -fopenmp

hello: hello.c
	gcc -o out hello.c -fopenmp

