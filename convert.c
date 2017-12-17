#include <stdio.h>
#include <stdlib.h> 

#define LITRES_PER_GALLON 4.54

int main(int argc, char* argv[]) {
  if(argc == 3) 
  {
    float litres = atof(argv[1]);
    float miles = atof(argv[2]);
    if (litres == 0){
      printf("ERROR: Number of litres cannot be zero!\n");
      return 1;
    }
    float gallons = litres / LITRES_PER_GALLON;
    float mpg = miles / gallons;
    printf("Fuel consumption : %.1f mpg.\n",mpg);
  }
  else 
  {
    printf("ERROR: Invalid number of parameters.\n\nUsage : %s <litres> <miles>\n",argv[0]);
    return 1;
  }
}
