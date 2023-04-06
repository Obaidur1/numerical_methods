#include <iostream>
using namespace std;
#define EP 0.01
double solution(double x)
{
   return x * x * x - x - 1;
}

void bisection(double a, double b)
{
   if (solution(a) * solution(b) >= 0)
   {
      cout << "You have not assumed right a and b\n";
      return;
   }
   double c = a;
   int it = 1;
   cout << "N"
        << "\t"
        << "a"
        << "\t\t"
        << "b"
        << "\t\t"
        << "c"
        << "\t"
        << "f(x)"
        << "\t"
        << "Error"
        << "\n";
   while ((b - a) >= EP)
   {

      c = (a + b) / 2;
      if (solution(c) == 0.0)
         break;
      else if (solution(c) * solution(a) < 0)
         b = c;
      else
         a = c;
      cout << it << "\t" << a << "\t\t" << b << "\t" << c << "\t" << solution(c) << "\t" << b - a << "\n";
      it++;
   }
   cout << "The value of root is : " << c;
}
int main()
{
   double a = 1, b = 2;
   bisection(a, b);
   return 0;
}