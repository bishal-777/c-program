#include<stdio.h>
struct complex
{
    int real;
    int imag;
};
struct complex addcmplx(struct complex,struct complex);
    
    int main(void)
    {
        struct complex c1,c2,c3;
        printf("Enter real and imaginary part of 1st complex number:");
        scanf("%d%d",&c1.real,&c1.imag);
        printf("\nEnter real and imaginary part of 2nd complex number:");
        scanf("%d%d",&c2.real,&c2.imag);
        c3=addcmplx(c1,c2);
        printf("\nThe sum of two complex numbers is:\nReal=%d\tImaginary=%d",c3.real,c3.imag);
        return 0;
    }
struct complex addcmplx(struct complex a,struct complex b)
    {
        struct complex c;
        c.real=a.real+b.real;
        c.imag=a.imag+b.imag;
        return c;
    }
