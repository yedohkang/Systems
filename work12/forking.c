#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int child() {
  printf("Child process is starting...\n");
  printf("Child PID: %d\n", getpid());
  int rand_int = (rand() + (int)getpid()) % 16 + 5;
  sleep(rand_int);
	printf("Sleeping for %d seconds...\n", rand_int);
	printf("Child process %d is done!\n\n", getpid());
  return rand_int;
}

int main(){
	printf("Parent process is starting...\n");
	
  srand(time(NULL));

  printf("Pre-fork!\n\n");
	int g;
  int f = fork();
	int status = 0;

  //if is child
	if(f){
		g = fork();
	}
  if(f == 0 || g == 0){
    child();
  }
  //if is parent
  else{
    wait(&status);
		if (WIFEXITED(status)) {
   	 //printf("Child PID: %d\n", f);
   	 printf("Parent process is done!\n\n");
		}
  }
  return 0;
}
