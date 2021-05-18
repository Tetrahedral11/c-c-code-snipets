//a program that reads an array of elements and finds the highesr and lowest value 
// METHOD ARRAYS
#include<stdio.h>

int main(){
  int t[6];
  int i, count, max, min;

  printf("Enter the number of array elements:");
  scanf("%d", &count);

  for ( i = 0; i < count; i++)
  {
     printf("Enter the element num[%d]:", i+1);
     scanf("%d", &t[i]);
  }
  
  max=min=*t;
   
   for ( i = 0; i < count; i++)
   {
      if (*(t+i)>max) max=*(t+i);
     if (*(t+i)<min) min=*(t+i);

   }
   
 
  printf("max=%d & min=%d", max, min);
  
  return 0;
}

