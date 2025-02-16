#include <iostream>
using namespace std;
 
// long long is just shorter of long long int
long long fib(int n){
	if (n==0 || n==1) return 1;
	return fib(n-1) + fib(n-2);
} // but this recurssion have so much time complexity  so we can use the iterative approach
  
long long fib2(int n){
	if (n==0 || n==1) return 1;

	long long f1 = 1,f0 = 1,f2;

	for(int i = 2; i<= n;i++){
	f2 = f1 + f0;
	f0   = f1;
	f1 = f2;

	}
return f2 ;}
int main() {

}
