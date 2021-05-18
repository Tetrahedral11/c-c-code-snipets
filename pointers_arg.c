#include<stdio.h>
int main(){
    void exchange (int *pt0, int *pt1);
      int a,b;

          printf("give a value for a & b respectively:");
          scanf("%d%d",&a,&b);

            printf("*******Value Before Exchange********");
            printf("\n");
            printf("a=%d\n b=%d", a,b);
            printf("\n");
            exchange (&a,&b);

            printf("*******Value After Exchange********");
            printf("\n");
            printf("a=%d\n b=%d", a,b);
            printf("\n");
}
void exchange (int *pt0, int *pt1){
    int temp;
    temp=*pt0;
    *pt0=*pt1;
    *pt1=temp;
}