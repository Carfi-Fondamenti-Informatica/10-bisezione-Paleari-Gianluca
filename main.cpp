#include <iostream>
#include <cmath>
using namespace std;

double f(double y){
    double a=0
    a=(y*y)*cos(y)+1;
    return a;
}
int main() {
    double a=0, b=0,x=0,err=1;

    while ((f(a) * f(b)) >= 0) {
        cout << "inserire estremi " << endl;
        cin >> a >> b;
    }



    while(f(x)!=0){

         x=(a+b)/2;
        if(f(x)*f(b)<0)
        {
            a=x;

        }
        else {
            b = x;
        }
        err=abs((b-a)/2);
        if(err<(1e-6)) {
            break;
        }

    }
    x=x*10000
    x=(int)x;
    x=x/10000;
    cout<<x;





    return 0;
}
