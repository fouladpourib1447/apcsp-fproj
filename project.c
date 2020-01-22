#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
//source: programmingsimplified.com/c-program-generate-random-numbers
double thirdTriangleSide (int x, int y);
double perimeterofTriangle (int x, int y, double ts);
void perimeterofRectangle (int x, int y);
void product (int x, int y);

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
      double ts = thirdTriangleSide (a, b);
      perimeterofTriangle (a, b, ts);
      printf("Area of the triangle is %d.\n", a*b/2);
    }
  else
    {
      perimeterofRectangle (a, b);
      product (a, b);
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
  return 0;
}
double perimeterofTriangle (int x, int y, double ts)
{
  printf("Perimeter of the triangle is %f.\n", x + y + ts);
  return 0;
}
void perimeterofRectangle (int x, int y)
{
  int pr;
  pr = 2*x + 2*y;
  printf("Perimeter of the rectangle is %d.\n", pr);
}
void product (int x, int y)
{
  int p;
  p = x*y;
  printf("Area of the rectangle is %d.\n", p);
}
