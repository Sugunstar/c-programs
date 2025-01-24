#include <stdio.h>
#include <stddef.h>

void add (int n)
{
   int arrA[n][n];
   printf("enter A\n");
   
   for(int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           scanf("%d",&arrA[i][j]);
       }
   }
   
   printf("enter B\n");
    int arrB[n][n];
    for(int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           scanf("%d",&arrB[i][j]);
       }
   }
   
   for(int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           arrB[i][j]=arrB[i][j]+arrA[i][j];
       }
   }
   printf("output \n");
   for(int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           printf("%d ",arrB[i][j]);
       }
       printf("\n");
   }
   
}
void diagonal (int n)
{
   int arrA[n][n];
   
   printf("enter A\n");
   for(int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           scanf("%d",&arrA[i][j]);
       }
   }
   
    int flag=0;
    for(int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           if(i!=j && arrA[i][j]==0)
           {
               flag=0;
           }
           else
           {
               flag=1;
               break;
           }
       }
       if(flag==1)
           break;
   }
   if(flag==1)
   printf("not diagonal\n");
   else
   printf("diagonal\n");
}

void symmetric (int n )
{
    
   int arrA[n][n];
   printf("enter A");
   for(int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           scanf("%d",&arrA[i][j]);
       }
   }
   
    int flag=0;
    for(int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           if( arrA[i][j]!=arrA[j][i])
           {
               flag=1;
               break;
           }
       }
       if(flag==1)
           break;
   }
   if(flag==1)
   printf("not sym");
   else
   printf("sym ");
}
int main() 
{
   printf("enter the order of square matrix A\n");
   int n;
   scanf("%d", &n);
   
   add(n);
   diagonal (n);
   symmetric (n);
}
