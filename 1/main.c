#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <dlfcn.h>


void (*hello_message)(const char *);

bool init_library() {
	void *hdl = dlopen("./libhello.so", RTLD_LAZY);
	if (NULL == hdl){
		return false;
	}

	hello_message = (void (*)(const char*))dlsym(hdl,"hello_message");

	if (NULL == hello_message)
		return false;
}

int main(){
	if(init_library()){
		hello_message("Игорь");
	}else{
		printf("Error");
	}
	return 0;
}
