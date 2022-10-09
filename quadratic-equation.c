//quadratic equation
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b,c,d,X1,X2,real,imag;
    printf("Enter three coefficient\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0 && b==0)
    {
        printf("Invalid input\n");
    }
    else{
        d=b*b-4*a*c;
        if(d==0)
        {
            printf("roots are real and equal");
            X1=X2=-b/2*a;
            printf("The roots are %f and %f\n",X1,X2);
        }
        else if(d>0)
        {
            printf("The roots are real and distinct");
            X1=(-b+sqrt(d))/(2*a);
            X2=(-b-sqrt(d))/(2*a);
            printf("The roots are %f and %f\n",X1,X2);
        }
        else
        {
            printf("The roots are imaginary\n");
            real=-b/2*a;
            imag=sqrt(-d)/2*a;
            printf("root 1=%f+i%f\n",real,imag);
            printf("root 2=%f-i%f\n",real,imag);
        }
    }
    return 0;
}
