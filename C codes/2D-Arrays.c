#include<stdio.h>
void read(int r, int c, int m[r][c]);
void display(int r,int c, int m[r][c]);
int main()
{
    int r,c;
    printf("enter the valve\n");
    scanf("%d %d",&r, &c);
    printf("Matrix the value \n");
    int m[r][c];
    read(r,c,m);
    display(r,c,m);
    return 0;
}
 void read(int r, int c, int m[r][c])
 {
     int i,j;
     printf("matrix is\n");
     for(i=0; i<r; i++)

        {
            for(j=0; j<c; j++)
             {
                 scanf("%d", &m[i][j]);
             }
             printf("\n");
        }
 }
 void display(int r, int c, int m[r][c])
 {
     int i,j;
     printf("matrix elements are\n");
     for(i=0; i<r; i++)
     {
         for(j=0;j<c;j++)
         {
             printf("%d", m[i][j]);
         }
         printf("\n");
     }
 }
