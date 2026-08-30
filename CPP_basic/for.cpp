#include<iostream>
int count_x(const char* p, char x);
int main()
{
    using namespace std;
    int v[]={1,2,3,4,5};
    char pstr[]="there are two x in this x string";
    char find='x';

    for (auto& x: v)
    {
        
        cout << x << "\n";
        ++x;
    }

    for(auto x:{10, 20 , 30, 40, 50})
    {
        cout << x << "\n";
    }
    cout <<"there are "<< count_x(pstr,find)
    <<" of "<< find <<" in the string"<< endl;
    return 0;
}

int count_x(const char* p, char x)
{
    if(p==nullptr) return 0;
    int count = 0;
    for(;*p!='\0'; ++p)
    {
        if(*p==x) 
            ++count;
    }
    return count;
}