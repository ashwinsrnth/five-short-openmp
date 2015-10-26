barrier: barrier.c
	gcc -o out barrier.c -fopenmp

atomic: atomic.c
	gcc -o out atomic.c -fopenmp

stencil: stencil.c
	gcc -o out stencil.c -fopenmp

fill: fill.c
	gcc -o out fill.c -fopenmp

hello: hello.c
	gcc -o out hello.c -fopenmp

clean:
	rm -f out
