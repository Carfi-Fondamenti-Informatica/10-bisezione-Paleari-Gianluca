#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
    return y*y-cos(y);
}
int main() {
    cout<<"inserire estremi ";
    float a,b;
    cin >> a>> b;
    while((b-a)/2>0.0001)
    {
        float m=(a+b)/2;
        if(f(m)==0)
        {
            a=m;
            b=m;
        }
        else{
            if(f(m)<0)
            {
                a=m;
            }
            else{
                b=m;
            }
        }
    }
    


    return 0;
}
