#include <stdio.h>

struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
  Complex a,b,sum;
  printf("Enter a and b where a + bi is the First complex number.\n");
  a=input_complex();
  printf("Enter a and b where a + bi is the First complex number.\n");
  b=input_complex();
  sum=add_complex(a,b);
  output(a,b,sum);
}

Complex input_complex()
{
  Complex c1;
  if(scanf("%f%f",&c1.real,&c1.imaginary));
  return c1;
}

Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.real= a.real + b.real;
  sum.imaginary= a.imaginary + b.imaginary;
  return sum;
}

void output(Complex a, Complex b, Complex sum)
{
  printf("The sum of %d + %di and %d + %di is %d + %di\n",(int)a.real,(int)a.imaginary,(int)b.real,(int)b.imaginary,(int)sum.real,(int)sum.imaginary);
  return 0;
}