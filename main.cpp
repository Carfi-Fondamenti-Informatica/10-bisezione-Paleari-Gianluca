#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
    return (y*y)*cos(y)+1;
}
int main() {
    float a, b,m,err;

    while ((f(a) * f(b)) >= 0) {
        cout << "inserire estremi " << endl;
        cin >> a >> b;
    }



    while(f(m)!=0){

         m=(a+b)/2;
        if(f(m)*f(b)<0)
        {
            a=m;

        }
        else {
            b = m;
        }
        err=abs((b-a)/2);
        if(err<(1e-6)) {
            break;
        }

    }
    m=m*10000;
    m=(int)m;
    m=m/10000;
    cout<<m;





    return 0;
}
