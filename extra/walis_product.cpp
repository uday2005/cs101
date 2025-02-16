#include <simplecpp>
#include <iomanip>

main_program{
double product = 2;
int  n ;
cin >> n;
	for (int i = 1;i<=n;i++){
		
		product = (product * (2 * i)* (2 * i))/((2 * i -1)*(2 * i+1)); 
	}
	std::cout << std::fixed << std::setprecision(10) <<  product;
}
