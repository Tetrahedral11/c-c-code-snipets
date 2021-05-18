//a program that reads an array of elements and finds the highesr and lowest value 
// METHOD ARRAYS
#include<stdio.h>
int main(){
  int i, j, n, tab[20], max, min, temp;

  printf("Enter the number of array elements:");
  scanf("%d", &n);

  for (i=0; i<n; i++){
    printf("Enter element number %d:", i+1);
    scanf("%d", &tab[i]);
  }
    for (i=0; i<n; i++){
    printf("[%d]\t", tab[i]);
   
    }
    printf("\n");

    max=min=tab[0];

   for ( i = 0; i < n; i++)
   {
     if (tab[i]>max)  max=tab[i];
     if (tab[i]<min) min=tab[i];
   }
   
    
    printf("max=%d min=%d", max, min);
}

