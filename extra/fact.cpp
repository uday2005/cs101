#include <iostream>
using namespace std;

int factorial(int n)
{
	int result = 1;
	for(int i = 1;i<=n;i++){
		result *= i;
	}
	return result;	
}

int main()
{
int r ;
cin >> r;
	double term   = factorial(r);
	double result = term;
cout << result << " " ;

for (int i = 1; i<= r; i++){
term = (-1 * term) /i;
result += term;

}
cout <<  result;
}
