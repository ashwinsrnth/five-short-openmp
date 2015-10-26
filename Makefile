fill_array: fill_array.c
	gcc -o out fill_array.c -fopenmp

hello: hello.c
	gcc -o out hello.c -fopenmp

