//calculte how many students got a score superior to the class avegrage score
#include<stdio.h>

int main (){

    //variable declaration
    int i, n, num=0;
    float tab[100], sum=0, average=0;

    //input number of students

    printf("Enter of students:");
    scanf("%d", &n);
     printf("\n");

    //input of score for each student

    for (i = 0; i < n; i++)
    {  
        printf("Enter the score of student num[%d]: ", i+1);
        scanf("%f", &tab[i]);
       
    }


    //printig the scores table
    
    printf("*****************//Class Scores Table//*****************");
    printf("\n");
    for ( i = 0; i < n; i++)
    {
   
       printf("stu%d:[%.2f] | ",i+1, tab[i]);
    }
    printf("\n");


    //calculating the average class result
    printf("*****************//Class Scores Table//*****************");
    printf("\n");
     for (  i = 0; i < n ; i++){
         sum+=tab[i];
     }
     printf("-class sum=%.2f", sum);
      printf("\n");
     average=sum/n;
     printf("-class average=%.2f", average);
     printf("\n");

     //numbers of students with score higher than averaqge class score

     for (i=0; i<n; i++){
         if (tab[i]>average){
             ++num;
         }
        
     }
     printf("number of students with a score higher than class average are: %d", num);
     printf("\n");



}