#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char** parse_args(char* line){
  char** args = (char**)calloc(6, sizeof(char*));
  int i = 0;
  char * tp;
  while(line){
    tp = strsep(&line, " ");
    args[i] = tp;
    i++;
  }
  return args;
}

int main(){
  char line[] = "ls -a -l";
  char** args = parse_args(line);
  execvp(args[0], args);
	return 0;
}
