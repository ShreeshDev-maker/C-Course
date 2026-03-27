#include <stdio.h>
#include <math.h>


int main(){

    float x = 45;

    //x = sqrt(x);
    //x = pow(x,3); power
    //x = round(x); round 
    //x = ceil(x);  always round up
    //x = floor(x); always round down  
    //x = abs(x);
    //x = log(x);   natural log (to base e)
    x = sin(x);
    printf("%f", x);

    return 0;
}