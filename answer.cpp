#include <iostream>
#include <math.h>

int main()
{
    float x = 0;
    long double answer;
    for ( x = 0.11; x < 0.37; x += 0.05 )
    {
        answer = ((pow(sin(x), 3) + pow(cos(x), 3)) * log(x));
        std::cout << answer << std::endl;
 
   }
   return 0;
}
