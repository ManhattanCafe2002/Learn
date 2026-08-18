#include<iostream>

double multiple2(double);

int main()
{
    using namespace std;    //make difination of cout and endl available
    //OR
    //using std::cout;
    //using std::endl;
    //using std::cin;
    int days = 7;
    int day;
    cout << "Hello, World!" << endl;
    cout << "This is my first C++ program." << endl;
    cout << "There are " << days << " days in a week." << endl;
    cout << "today is the day";
    cin >> day;
    cout <<"day"<< multiple2(day) <<" is a good day."<< endl;
    cin.get();                // wait for user to press enter
    return 0;               // as same as c       
}
double mutiple2(double x)
{
    return x * 2;
}
