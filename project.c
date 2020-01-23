#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
//source: programmingsimplified.com/c-program-generate-random-numbers
double thirdTriangleSide (int x, int y);
double perimeterofTriangle (int x, int y, double ts);

int randomfunc (int low, int high, int count)
{
  int i;
  int num;
  for (i = 0; i < count; i++)
    {
      num = (rand() % (high - low + 1)) + low;
    }
  return num;
}

int main()
{
  int a, b;
  int low = 1, high = 50, count = 1;
  srand(time (0));
  a = randomfunc (low, high, count);
  b = randomfunc (low, high, count);
  printf("height = %d \nbase = %d\n", a, b);
  if (a <= 25 && b<= 25)
    {
      printf("Because both values were less than 25, triangle-based calculations were done.\n");
      double ts = thirdTriangleSide (a, b);
      perimeterofTriangle (a, b, ts);
      if (b <= 12)
      {
	printf("A base value of 12 or less prints looped area calculations.\n");
	int z;
        for (z = 1; z <= b; z++)
	{
	  printf("Area of the triangle with base = %d is %d.\n", z, a*z/2);
	}
      }
      else
      {
      printf("Area of the triangle is %d.\n", a*b/2);
      }
    }
  else
    {
      printf("Because one or both number(s) were above 25, rectangle-based calculations were done.\n");
      int pr;
      pr = 2*a + 2*b;
      printf("Perimeter of the rectange is %d.\n", pr);
      int p;
      p = a*b;
      printf("Area of the rectangle is %d.\n", p);
    }
  return 0;
}
double thirdTriangleSide(int x, int y)
{
  double th;
  double c;
  c = pow(x, 2) + pow(y, 2) - (2*x*y*cos(90));
  th = sqrt(c);
  printf("The third side of the triangle is %f.\n", th);
  return th;
}
double perimeterofTriangle (int x, int y, double ts)
{
  printf("Perimeter of the triangle is %f.\n", x + y + ts);
  return 0;
}
