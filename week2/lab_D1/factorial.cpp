#include <simplecpp>

main_program{
    int n;
    cin >> n;

    int factorial = 1;
    int i = 1;


    if (n == 0){
        factorial = 1;
    }
    else
    {
        repeat(n){
        factorial = factorial * i;
        i  = i+1;
        }
    }
    std::cout << factorial;
}

// one more way to do this is  by using recurrsion

long long factorial (int num){
	if (num==0 || num==1) return 1;// base case
	return num * factorial(num-1);//Recursive call

}
