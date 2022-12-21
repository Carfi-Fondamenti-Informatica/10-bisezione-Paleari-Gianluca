#include <iostream>
#include <cmath>
using namespace std;

double f(float y){
    double a=0
    a=(y*y)*cos(y)+1;
    return a;
}
int main() {
    double a, b,m,err=1;

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
