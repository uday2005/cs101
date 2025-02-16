
#include <iostream>
using namespace std;

int calculator(int n,char assign ,int number){
    int total = n;

        if(assign == '+') total += number;
        else if (assign == '-') total -= number;
        else if(assign == '*') total *=  number;
        else if (assign == '/') total /= number;

    return  total;
}
int main(){
    int n;
    char c;
    int m;
    cin >> n ;
    int result = n;

    while (true){
        cin >> c >> m;
        if (c =='X') break;
    result =  calculator(result,c,m);

    }
    cout << result;

    

}