#include <iostream>
#include <cmath>
using namespace std;


double taylor_sinx (){
    double x;
    cin >> x;
    x = (x *3.14)/180;

    double term = x;
    double sum = term;
    double ephsilon = 1E-20;
    int k = 1;

    while(abs(term)>ephsilon){
        term *= (-1)*x*x;
        term  /= (k+1) * (k+2);
        k += 2;
        sum += term;
    }
    return sum;
}

double loge(){
    double x ; cin >> x;
    int n; cin >> n;

    double width = (x-1)/n;
    double area = 0;

    // width is the  width of the rectangle
    // n is number of component in that canbe done in complete area.


    for(int i = 0;i<n;i++){
        area += width/(1+i*width);
        }
    return area;
}
// it is quite inefifcient as it iwll iterate the k times
double expo(int n,int k){
    if(k==0) return 1;
    return (n * expo(n,k-1));
}
// we can do iyt as efficient by using poweer divisible by 2 

double expo1(int n , int k){
    

}
double square_bisection(){
    
    int low = 0;
    double ephsilon = 0.000001;
    int n;
    cin >> n;
    int high = n;
    double mid = (high + low )/2;



    while(high - low > ephsilon){
        if(mid * mid - n >0){
            high = mid;
        }
        else{
            low = mid;
        }
    }

    return mid;
    
}

double squarert_raphsom (){
    double x1 = 1;
    double y; cin >> y;
    double ephsilon = 0.000001;

    while ( abs(x1 *x1 - y) > ephsilon){
            x1 = (x1 + y/x1)/2;
        cout << x1;
    }
    return x1;

}

double lnx(int  x){
    double term = x;
    double termf = term;
    double sum  = termf;
    int precision = 20;

    for(int i = 2;i<precision;i++){
    term *= (-1 * x);
    termf = term/i;
    sum += termf;
    }
    return sum;

}
int main(){
    // cout << taylor_sinx();
    cout << loge() << endl;
    cout << lnx(10);
}