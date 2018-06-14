#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

int generate(){
  int rand_fd = open("/dev/random", O_RDONLY);
  int rand;
  read(rand_fd, &rand, 4);
	/*
  if(rand_fd < 0){
    printf("No random file!\n");
    exit(0);
  }
	*/
  if (errno) {
      printf("Errno number: %d\n", errno);
      printf("Message: %s\n", strerror(errno));
  }
  close(rand_fd);
  return rand;
}

int main(){
  //generating the array and printing it
  int i;
  //int * result = generate();
  printf("Generating random numbers...\n");
  int result[10];
  for(i = 0; i < 10; i++){
    result[i] = generate();
    printf("\trandom %d: %d\n", i, result[i]);
  }

  //writing into the file...
  printf("Writing numbers into the file...\n");
  int results_fd = open("rand_results.txt", O_CREAT | O_RDWR, 0644);
  write(results_fd, result, sizeof(result));
  close(results_fd);
  //reading
  printf("Reading numbers from the file...\n");
  int results_read[10];
  results_fd = open("rand_results.txt", O_RDONLY);
  read(results_fd, results_read, sizeof(results_read));
  close(results_fd);

  //
  printf("Verifying that written numbers are the same...\n");
  int j;
  for(j = 0; j < 10; j++){
    printf("\trandom %d: %d\n", j, results_read[j]);
   }
	 return 0;
        
}
