#include <iostream>
using namespace std;

int main(){
double result = 1.0;
double term = result;
int n;
cin >> n;

for (int i = 1; i<= n; i++){
	term = term /i;
	result += term;
}
cout << result;
}
