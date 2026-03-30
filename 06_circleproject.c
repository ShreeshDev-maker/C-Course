#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    const double pi = 3.141592653589;
    printf("Enter the radius of the circle (cm): ");
    scanf("%lf", &radius);
    area = pi * pow(radius, 2);
    double surface_area = 0.0;
    surface_area = 4 * pi * pow(radius, 2);
    double volume = 0.0;
    volume = (4.0/3.0) * pi * pow(radius, 3);
    
    printf("Radius of the circle is %lf cm\n", radius);
    printf("Area of the circle is %lf cm^2\n", area);
    printf("Surface area of the sphere is %lf cm^2\n", surface_area);
    printf("Volume of the sphere is %lf cm^3\n", volume);
    return 0;
}
