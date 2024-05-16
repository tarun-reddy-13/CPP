/* Including the Headder files */
#include<IOStream>

/* Defining the constants */
#define PI 3.14

/* Defining the macros (Macro to find the area of circle) */
#define Area(x) (PI*x*x)

/* Function declerations*/
int getRadius();
double caliculateArea(int);

/* Function Definations */

/* Function defination to take the radius of a circle as input from user -- takes nothing, returns integer */
int getRadius(){

    int radius;
    
    std::cout<<"Enter the radius of the Circle: ";
    std::cin>>radius;

    return radius;

}

/* Function defination to calculate Area of circle using defined macro Area(x) -- takes integer, returns double  */
double caliculateArea(int radius){

    return Area(radius);

}

/* main program */
int main(){

    int radius = getRadius();
    double area = caliculateArea(radius);

    std::cout<<std::endl<<"Area of the circle is: "<<area<<std::endl;

    return 0;

}