#include <iostream>
#include <math.h>

int main()
{
    float i = 0;
    long double answer;
    for ( i = 0.11; i < 0.37; i += 0.01 )
    {
        answer = ((pow(sin(i), 3) + pow(cos(i), 3)) * log(i));
        std::cout << answer << std::endl;
 
   }
   return 0;
}
