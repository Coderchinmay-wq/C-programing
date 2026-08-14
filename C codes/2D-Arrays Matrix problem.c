#include<stdio.h>

void read(int r, int c ,int m[r][c]);
void display(int r, int c ,int m[r][c]);
void sum(int r ,int c,int m1[r][c],int m2[r][c],int s[r][c]);


int main()
{
    int r,c;
    printf("enter the size\n");
    scanf("%d %d",&r,&c);
    int m1[r][c],m2[r][c],s[r][c];
    read(r,c,m1);
    display(r,c,m1);
    read(r,c,m2);
    display(r,c,m2);
    sum(r,c,m1,m2,s);
    printf("sum of two matrix:\n");
    display(r,c,s);
    return 0;
}
void read(int r, int c ,int m[r][c])
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
}
void display(int r, int c ,int m[r][c])
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
}
void sum(int r ,int c,int m1[r][c],int m2[r][c],int s[r][c])
{
    int i,j;
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[i][j]=(m1[i][j]+m2[i][j]);
        }
    }
}
