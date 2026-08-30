#include<iostream>

class Vector
{
    private:
        double* elem;
        int sz;
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
