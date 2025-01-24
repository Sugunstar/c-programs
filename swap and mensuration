#include <stdio.h>
#include <math.h>

void swap (int ,int );
void a_and_c (double ,double* ,double* );
int main() 
{
    int a,b;
    double r,area,cir;
    double* p1=&area;
    double* p2=&cir;
    printf("enter radius\n");
    scanf("%lf", &r);
    printf("enter 2 numbers\n");
    scanf("%d %d", &a,&b);
    
    swap(a,b);
    a_and_c (r,&area,&cir);
    
    printf("area=%lf \ncircumference=%lf",*p1,*p2);
    
    return 0;
}

//swapping 2 numbers using bitwise xor
void swap (int x,int y)
{
    printf("before swapping a=%d b=%d\n",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("after swapping a=%d b=%d\n",x,y);
    
    return ;
}

//area and cir of circle
void a_and_c (double r1,double* area,double* cir)
{
    *area=3.14*pow(r1,2);
    *cir=2*3.14*r1;
    
    return ;
}
