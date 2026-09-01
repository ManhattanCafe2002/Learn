#include<iostream>

class Vector
{
    private:
        double* elem;
        const int sz;
    public:
        //constructor
        // elem gets a new array of doubles of size s, then gives s to sz
        Vector(int s) :elem{new double[s]}, sz{s} {}
        //return the ith element of the array
      
        double& operator[](int i){ return elem[i];} 
        //means that the operator[] returns a reference to the ith
        //element of the array elem. 
        //This allows you to access and modify the elements 
        //of the Vector object using the subscript notation (e.g., v[i]).
        /*
        ==
        double&  operator[](int i)
        { 
            return elem[i];
        } 
        */
       //v[3] = v.operator[](3) = v.elem[3] = 7.7
        int size() {return sz;}

};
// Vector v(6) //s =6


//double& operator[](int i){ return elem[i];}

union Value
{
    int i;
    double d;
    char c;
};
// The union Value can hold either an int, a double, or a char, but only one of them at a time.
enum class Color {red=0, green=1, blue=2};
enum class Traffic_light {green=0, yellow=1, red=2};

Color col = Color::red;
Traffic_light light = Traffic_light::red;
// The above code defines two enumerations: Color and Traffic_light.
// Color x = red; // This is not allowed because Color and Traffic_light are distinct types.
// Color y = Traffic_light::red; // This is also not allowed for the same reason.
Traffic_light& operator++(Traffic_light& t)
{
    switch(t)
    {
        case Traffic_light::green:
            return t = Traffic_light::yellow;
        case Traffic_light::yellow:
            return t = Traffic_light::red;
        case Traffic_light::red:
            return t = Traffic_light::green;
    }
}
Traffic_light next = ++light; // This will change light from red to green, and next will also be green.