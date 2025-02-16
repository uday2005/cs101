#include <iostream>
using namespace std;

int main(){
double result = 1.0;
double term = result;
float x;
for (int i = 1;i<= 15;i++){
	term *= x/i;
	result += term;
}
cout << result;
}
