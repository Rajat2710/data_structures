#include<stdio.h>
int main()
{
        int m=4,n=3;
        int count=0;


        int *arr=(int *)malloc(m*n*sizeof(int));

        for(int i=0;i<4;i++)
        {
                for(int j=0;j<3;j++)
                        *(arr + i*n + j) = count++;
        }



 for(int i=0;i<4;i++)
        {
                for(int j=0;j<3;j++)



        printf("%d",*(arr+ i*n+j));
        }
        return 0;
}
