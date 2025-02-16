#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	double term ;
	double result = 1;
	for (int i = 1; i<=n;i++){
	       	term = 1.0 / i ;
		cout << term <<  endl;
		result += term;
		}
	cout <<  result ;	
}
	
int main(){
int n;
cin >> n;
	
	double term = 1.0;
	double result = term;
	

	for(int i =1 ; i<=n ; i++){
		term = term/i;
		result += term;
	}
	cout <<  result;
}
