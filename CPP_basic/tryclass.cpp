#include<iostream>
#include<stdexcept>

class Vector
{
    private:
        double* elem;
        int sz;
    public:
        //constructor
        // elem gets a new array of doubles of size s, then gives s to sz
        Vector(int s)
        {
            if(s<0)
                throw std::length_error{"Vector constructor: negative size"};
            elem=new double[s];
            sz=s;
            for(int i=0; i!=s;++i)
                elem[i]=0;
        }
        //return the ith element of the array
        Vector(std::initializer_list<double>);//constructor that takes an initializer list
        void push_back(double);


        ~Vector(){delete[] elem;}//destructor
      
        double& operator[](int i)
        {
            if(i<0 || i>=sz)
                throw std:: out_of_range{"Vector::operator[]"};
            return elem[i];
        } 
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

// abstract class Container with pure virtual functions
class Container
{
    public:
        virtual double& operator[](int)=0;   
        //=0 mains pure virtual function, 
        //which means that the derived classes must provide an implementation 
        //for this function.
        virtual int size()const=0;
        virtual ~Container(){}
};

void use(Container& c)
{
    const int sz =c.size();
    for(int i=0; i!=sz; ++i)
        std::cout<<c[i]<<'\n';
}

class Vector_container: public Container
{
    private:
        Vector v;
    public:
        Vector_container(int s):v(s){}
        double& operator[](int i) override {return v[i];}
        int size() const override {return v.size();}
        ~Vector_container() override {}
};

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

static_assert(4<=sizeof(int),"integers are too small, what are you using?");


constexpr double C = 299792.458;   // km/s

void f(double speed)
{
    double speed;
    constexpr double local_max = 160.0 / (60 * 60);   // km/h to km/s
    //static_assert(speed < C, "can't go that fast");   //compile-time error: speed is not a constant expression
    static_assert(local_max < C, "can't go that fast"); // OK
}