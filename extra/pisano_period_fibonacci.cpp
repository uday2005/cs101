#include <simplecpp>

int fib(int n){
	if (n==0) return 0;
	if (n==1) return 1;
	else{
	return fib(n-1)+ fib(n-2);
	}

}

main_program
{
	int modulo ;
	cin >> modulo;
	int count = 0;
	while(true){
	int num = (fib(count)%modulo);		
	}

}
