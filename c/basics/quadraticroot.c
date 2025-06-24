#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    double a,b,c,d,r1,r2;
    printf("Enter the values of a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=(b*b)-4*a*c;
    if (d>0)
    {
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
        printf("The roots are real= %lf\t%lf",r1,r2);
    }
    else if (d==0)
    {
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("The roots are real and equal= %lf\t%lf",r1,r2);
    }
    else printf("The roots are imaginary");
    getch();
}