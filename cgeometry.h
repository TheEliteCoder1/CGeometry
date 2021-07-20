#include <iostream>
#include <cmath>

// A C++ Geometry module comprised of geometry based classes for use in any program.

using namespace std;

// A Rectangle Class
class Rectangle {
    public:
    
    /* Attributes */
    int width;
    int length;
    int area;
    int perimeter;
    int sides = 4;
    int diagonal;

    Rectangle(int width, int length){
        this->width = width;
        this->length = length;
    }

    // Changes the area of the rectangle
    void changeArea(int area)
    {
        this->area = area;
    }

    void changePerimeter(int perimeter)
    {
        this->perimeter = perimeter;
    }

    // Returns the area of the rectangle
    int getArea()
    {
        this->area = this->width * this->length;
        return this->area;
    }

    // Returns the perimeter of the rectangle
    int getPerimeter()
    {
        this->perimeter = (this->width * 2) + (this->length * 2);
        return this->perimeter;
    }

    // Returns the diagonal of the rectangle
    int getDiagonal()
    {
        this->diagonal = (pow(this->width, 2) + pow(this->length, 2));
        return this->diagonal;
    }

    // Returns the amount of sides in a rectangle
    int getAmountOfSides()
    {
        return this->sides;
    }
};

// A Triangle Class
class Triangle {
    public:

    /* Attributes */
    string angle_type;
    int base_length;
    int height_length;
    int third_side_length;
    int base_angle;
    int height_angle;
    int third_side_angle;
    int area;
    int perimeter;
    int hypotneuse;
    int leg_a;
    int leg_b;


    Triangle(int base_length, int height_length, int third_side_length, int base_angle, int height_angle, int third_side_angle){
        this->base_length = base_length;
        this->height_length = height_length;
        this->third_side_length = third_side_length;
        this->base_angle = base_angle;
        this->height_length = height_length;
        this->third_side_angle = third_side_angle;
    }

    string getAngleType()
    {

        if (this->base_angle < 90 && this->height_angle < 90 && this->third_side_angle < 90)
        {
            this->angle_type = "acute";
            return this->angle_type;

        } else if (this->base_angle > 90 || this->height_angle > 90 || this->third_side_angle > 90)
        {
            this->angle_type = "obtuse";
            return this->angle_type;

        } else if (this->base_angle == 90 || this->height_angle == 90 || this->third_side_angle == 90)
        {
            this->angle_type = "right";
            return this->angle_type;
        }
 
    }
    
    // Returns the hypotneuse of the Triangle
    int getHypotneuse()
    {

        if (this->getAngleType() == "right")
        {
            cout << "Leg a: " << "\n";
            cin >> this->leg_a;
            cout << "Leg b: " << "\n";
            cin >> this->leg_b;
            this->hypotneuse = sqrt(pow(this->leg_a, 2) + pow(this->leg_b, 2));
            return this->hypotneuse;

        } else {
            cout << "Not a right triangle.";
        }
    }

    // Returns the area of the Triangle
    int getArea()
    {
        this->area = (this->base * this->height) / 2;
        return this->area;
    }

    // Returns the perimeter of the Triangle
    int getPerimeter()
    {
        this->perimeter = this->base + this->height + this->third_side;
        return this->perimeter;
    }

};


// A Circle class
class Circle {
    public:

    /* Attributes */
    int radius;
    int diameter;
    int circumfrence;
    int area;
    const double PI = 3.14;

    Circle(int radius){
        this->radius = radius;
    }

    // Returns the area of the circle
    int getArea()
    {
        this->area = PI * pow(this->radius, 2);
        return this->area
    }

    // Returns the circumfrence of the circle
    int getCircumfrence()
    {
        this->circumfrence = 2 * PI * this->radius;
        return this->circumfrence;
    }

    // Returns the diameter of the circle
    int getDiameter()
    {
        this->diameter = this->radius * 2;
        return this->diameter;
    }

    // Returns the radius of the circle
    int getRadius()
    {
        return this->radius;
    }

};

// A Point class
class Point {

    /* Attributes */
    int x;
    int y;
    int[2] point;

    Point(int x, int y){
        this->x = x;
        this->y = y;
        this->point = {x, y};
    }
};

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
{
    return num1 / num2;
}

double exponent(double num1, double num2)
{
    if(num2 >= 0){
        return pow(num1, num2);
    }else{
        return 1.0 / pow(num1,abs(num2));
    }

}

int square_root(int X)
{
    return sqrt(X);
}

int cube_root(int X)
{
    return cbrt(X);
}

int hypotneuse(int A, int B)
{
    int C = sqrt(pow(A, 2) + pow(B, 2));
    return C;
}

int cubic_volume(int length, int width, int height)
{
    int volume = length * width * height;
    return volume;
}

float spherical_volume(float radius)
{
    float PI = 3.14159265359;
    float volume = (1.33333333333)*PI*(pow(radius, 3));
    return volume;
}

float triangle_prisim_volume(float base_a, float base_b, float base_c, float height)
{
    const float QUART = 1/4;
    float s = (base_a+base_b+base_c)/2;
    float AB = sqrt(s*(s-base_a)*(s-base_b)*(s-base_c));
    float volume = AB*height;
    return volume;
}

float right_square_pyramid_volume(float base_edge, float height)
{
    float volume = (pow(base_edge, 2)) * (height/3);
    return volume;
}

float triangle_pyramid_volume(float triangle_base, float height)
{
    float volume = (1/3)*triangle_base*height;
    return volume;
}

float cylinder_volume(float radius, float height)
{
    const float PI = 3.14159265359;
    float volume = PI * (pow(radius, 2))* height;
    return volume;
}

float square_prisim_volume(float base_edge, float height)
{
    float volume = (pow(base_edge, 2))*height;
    return volume;
}

float cone_volume(float radius, float height)
{
    const float PI = 3.14159265359;
    float volume = PI * (pow(radius, 2)) * (height/3);
    return volume;
}

float square_area(float length, float width){
    return length * width;
}

float triangle_area(float base, float height){
    return (base * height)/2;
}

float circumfrence(float radius)
{
    const float PI = 3.14159265359;
    const int CIRCUM_2 = 2;
    return CIRCUM_2 * PI * radius;
}

float trapezoid_area(float base_a, float base_b, float height)
{
    float area = ((base_a+base_b)/2)*height;
    return area;
}

float parallelogram_area(float base, float height)
{
    return base * height;
}

float reg_hexagon_area(float side)
{
    float area = ((3 * (sqrt(3)))/2) * pow(side, 2);
    return area;
}

float reg_octagon_area(float side)
{
    float area = 2*(1+(sqrt(2)))*(pow(side, 2));
    return area;
}

float logarithim(float X)
{
    return log(X);
}

float cosine(float X)
{
    return cos(X);
}
