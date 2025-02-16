#include <simplecpp>


void Pascal_triangle(int num){
	for(int i = 0;i<num;i++)
	{
		int value = 1;
		std::cout << 1 << " ";
	for(int j = 0;j<i;j++){
		value = value *(i-j)/(j+1);
		// value = value *((i-j)/(j+1)); // so this is wrong as i and j are integers and inside nrcket will
		// be exececueted first which will cause the integer divison and by doing so it will 
		// round off the float value to int which will cause inaccuracy.

		std::cout << value << " ";
	}
	std::cout << std::endl;
	}

}
main_program{
    int n;
    cin >>n;

    for (int i=0;i< n;i++)

    {
	int sum = 0;
	int value = 1;
	for (int j = 0; j<= i; j++)
	{
	sum += value; 
	std::cout << sum << " ";
	value  =  (value * (i-j))/ (j+1);

	}
	
	std::cout << endl;
    }
}

// Function to compute factorial
long long fact(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}

// Function to compute nCr = n! / (r! * (n - r)!)
long long nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

// Function to print Pascal's Triangle
void printPascal(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";  // Compute C(i, j)
        }
        cout << endl;
    }
}