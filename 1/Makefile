build: exe lib

exe: main.c hello.h lib
	gcc main.c -fPIC -ldl -o hello 

lib: hello.h hello.c
	gcc -shared hello.c -fPIC -o libhello.so

clean:
	-rm hello libhello.so 2>/dev/null
