/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include<iostream>
#include<cmath>

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube = std::pow(cubeSide, 3);
    float volSphere = float(4.0/3.0) * M_PI * std::pow(sphereRadius, 3);
    float volCone = M_PI * std::pow(coneRadius, 2) * (coneHeight/3);
    
    std::cout <<"\nVolume of Cube: "<<volCube<<"\n";
    std::cout <<"\nVolume of Sphere: "<<volSphere<<"\n";
    std::cout <<"\nVolume of Cone: "<<volCone<<"\n";
    return 0;
}