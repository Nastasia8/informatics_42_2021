#include <iostream>
#include <iomanip>
#include <cmath>

float locate(float start, float end, float step);
void finde(float start, float end, const float accuracy);
double function (float input);

int main(int argc, char const *argv[]){
    float start = 0;
    float end = 10;
    float step = 0.2;
    const float accuracy = 0.0001;
    float change = locate(start,end,step);
    finde(change-step,change, accuracy);
    return 0;
}

double function (float input){
    return pow(exp(1),-input) - 2*sqrt(input);
}

float locate(float start, float end, float step){
    double ans1,ans2;
    ans1 = function(start);
    std:: cout << "x" << "\t" << "y" << std::endl;
    std:: cout << start << "\t" << ans1 << std::endl; 
    int count = 0;
    for (float i = start + step; i <= end; i+=step){
        ans2 = function(i);
        std:: cout << i << "\t" << ans2 << std::endl; 
        count ++;
        if (ans1 * ans2 < 0){
            std:: cout << "Root of equation located by " << count << " iterations" << std::endl; 
            return i;
        }
        ans1 = ans2;
    }
    return 0;
}

void finde(float start, float end, const float accuracy){
    float half;
    double fa, fc, fproduct;
    int count = 1;
    std::cout << "Iteration " << std::setw( 10 ) << "a" 
                        << std::setw( 15 ) << "b"
                        << std::setw( 15 ) << "c"
                        << std::setw( 15 ) << "|a-b|"
                        << std::setw( 15 ) << "f(a)"
                        << std::setw( 15 ) << "f(c)"
                        << std::setw( 15 ) << "f(a)*f(c)"
                        << std::endl; 
    while (fabs(start - end) > accuracy){
        half = (start+end)/2;
        fa = function(start);
        fc = function(half);
        fproduct = fa*fc;
        std::cout << std::setw(5) << count << std::setw( 15 ) << start
                        << std::setw( 15 ) << end
                        << std::setw( 15 ) << half
                        << std::setw( 15 ) << fabs(start - end)
                        << std::setw( 15 ) << fa
                        << std::setw( 15 ) << fc
                        << std::setw( 15 ) << fproduct
                        << std::endl; 
        if (fproduct < 0){
            end = half;
        }
        else{
            start = half;
        }
        count++;
    }
    
}