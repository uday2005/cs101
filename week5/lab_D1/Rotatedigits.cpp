#include <simplecpp>
#include <cmath>
// int digits(int num){
//     int count = 0;
//     for(;num >0;num /= 10){
//         count ++;
//     }
//     return count;
// }

int digits(int num){
    return (num==0) ? 1 : floor(log10(num))+1;
    // if num is zero then the digits will be also 1 which we need to specify
}

int power1 (int n,int m){
    int result = 1;
    for (int i= 0; i<m;i++){
        result = result * n;
    }
    return result;
}
int roateMe(int n , char m){
    int digit = digits(n);
    int power = power1(10,digit-1);
    if (m=='R') return ((n%10)* power + n/10);
    if (m=='L') return ((n%power)*10 + n/power);
    return n;

}
main_program{
int n;
cin >> n;
    while (true){
        char x;
        cin >> x;

        if (x=='X') break;
        else  n =  roateMe(n,x);
         cout <<  n << endl;

    }
    cout << n;
}
