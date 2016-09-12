build: exe

exe: main.c hello.h lib
	gcc main.c -fPIC -L. -lhello -ohello 

lib: hello.h hello.c
	gcc -shared hello.c -fPIC -o libhello.so

clean:
	-rm hello libhello.so 2>/dev/null
