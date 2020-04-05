#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#define PI 3.14159265
int n,i,j,s=0;
void main()
{
    int add();
    int sub();
    float mul();
    float divi();
    float perc();
    float sq();
    float sroot();
    float cu();
    float croot();
    float po();
    float ro();
    float fact();
    float area();
printf("Calculator ON \n");
printf("a. Addition \n");
printf("b. Subtraction \n");
printf("c. Multiplication \n");
printf("d. Division \n");
printf("e. Square \n");
printf("f. Square Root \n");
printf("g. Cube \n");
printf("h. Cube Root \n");
printf("i. x raised to n-th power \n");
printf("j. x to the n-th root \n");
printf("k. Factorial \n");
printf("l. Area \n");
printf("m. Percentage \n");
printf("Press O to POWER OFF \n");
char ch;
int null = 0;
while(null==0)
{
scanf("%c",&ch);
if((ch=='o')||(ch=='O'))
{
    null = 1;
}
switch(ch)
{
case 'a' :
    {
        add();
        break;
    }
case 'b' :
    {
        sub();
        break;
    }
case 'c' :
    {
        mul();
        break;
    }
case 'd' :
    {
        divi();
        break;
    }
case 'e' :
    {
        sq();
        break;
    }
case 'f':
    {
       sroot();
       break;
   }
case 'g':
    {
        cu();
        break;
    }
case 'h':
    {
        croot();
        break;
    }
case 'i':
    {
        po();
        break;
    }
case 'j':
    {
        ro();
        break;
    }
case 'k':
    {
        fact();
        break;
    }
case 'l':
    {
        area();
        break;
    }
case 'm':
    {
        perc();
        break;
    }
case 'O':
    {
        printf("Power OFF \n");
	break;
    }
case 'o':
    {
        printf("Power OFF \n");
    }

}
}
}
int add()
{
printf("Addition \n");
printf("Enter the Number of Numbers you wish to add : \n");
scanf("%d",&n);
int a[n];
printf("Enter the Numbers : \n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    s = s+a[i];
}
for(i=0;i<n;i++)
{
    if(i<n-1)
    {
        printf("%d + ",a[i]);
    }
    else
    {
        printf("%d = ",a[i]);
    }
}
printf("%d\n",s);
s = 0;
}

int sub()
{
int n1,n2,s;
printf("Subtraction \n");
printf("Enter First Number : ");
scanf("%d",&n1);
printf("Enter the Second Number : ");
scanf("%d",&n2);
s = n1-n2;
printf("The Difference between %d and %d = %d\n",n1,n2,s);
}
float mul()
{
printf("Multiplication \n");
printf("Enter the Number of Numbers you wish to Multiply : \n");
scanf("%d",&n);
float a[n];
printf("Enter the Numbers : \n");
float m=1;
for(i=0;i<n;i++)
{
    scanf("%f",&a[i]);
    m = m * a[i];
}
printf("Multiplication = %.1f\n",m);

}
float divi()
{
float x,y,d;
printf("Division \n");
printf("Enter the Dividend : ");
scanf("%f",&x);
printf("Enter the Divisor : ");
scanf("%f",&y);
d = x/y;
printf("Quotient = %f\n",d);
}
float sq()
{
printf("Square \n");
printf("Enter the Number you wish to find the Square of : \n");
scanf("%d",&n);
s = n*n;
printf("Square : %d\n",s);
}
float sroot()
{
float k,sq;
printf("Square Root \n");
printf("Enter the Number you wish to find the Square Root of \n");
scanf("%f",&k);
sq = sqrt(k);
printf("Square Root = %f\n",sq);

}
float cu()
{
printf("Cube \n");
float c;
printf("Enter the number \n");
scanf("%d",&n);
c = n*n*n;
printf("Cube : ");
printf("%.1f\n",c);
}
float croot()
{
printf("Cube Root \n");
int n;
float cu;
printf("Enter the Number : ");
scanf("%d",&n);
cu = exp(log(n)/3);
printf("Cube Root = %.2f\n",cu);
}
float po()
{
    int x,n;
    float a;
printf("x raised to n-th power \n");
printf("Enter x : ");
scanf("%d",&x);
scanf("%d",&n);
a = pow(x,n);
printf("X raised to n-th power is : %.0f  \n",a);
}
float ro()
{
printf("x to the n-th root \n");
printf("Enter x : ");
float x,n,a;
scanf("%f",&x);
printf("Enter n : ");
scanf("%f",&n);
a=exp(log(x)/n);
printf("Answer : %f\n",a);
}
float fact()
{
printf("Factorial \n");
float f=1;
printf("Enter the Number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    f*=i;
}
printf("Factorial = %.1f\n",f);
}
float area()
{
printf("Area \n");
printf("1. Square \n");
printf("2. Rectangle \n");
printf("3. Triangle \n");
printf("4. Circle \n");
int c;
scanf("%d",&c);
switch(c)
{
case 1:
    {
        printf("Square :\n");
        printf("Enter the side : ");
        int s;
        scanf("%d",&s);
        printf("The Area of the Square is : %d\n",(s*s));
        break;
    }
case 2:
    {
        printf("Rectangle : \n");
        printf("Enter the Length : ");
        int l,b,a;
        scanf("%d",&l);
        printf("Enter the Breadth : ");
        scanf("%d",&b);
        a = l*b;
        printf("Area = %d\n",a);
        break;
    }
case 3:
    {
        printf("Triangle : \n");
        printf("Enter the Length :");
        float l,h,a;
        scanf("%f",&l);
        printf("Enter the Breadth :");
        scanf("%f",&h);
        a = (0.5)*l*h;
        printf("Area = %.1f\n",a);
        break;
    }
case 4:
    {
        int r;
        float a;
        printf("Circle \n");
        printf("Enter the radius \n");
        scanf("%d",&r);
        a = PI*r*r;
        printf("Area : %.2f\n",a);
        break;
    }
}
}
float perc()
{
    printf("Percentage \n");
    printf("Enter the Percent value : ");
    float p,k,o;
    scanf("%f",&p);
    printf("Enter the Number to find its %.2f Percent ",p);
    scanf("%f",&k);
    o = (p/100)*k;
    printf("Percentage = %.4f\n",o);
}
