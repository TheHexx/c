#include <stdio.h>

void main(int argc, char* argv[]) {
  if(argc == 2)
  {
    printf("Hello %s \n",argv[1]);
  }
  else 
  {
    printf("ERROR: Invalid number of parameters.\n\nUsage : %s <name>\n",argv[0]);
  }
}
