#include <simplecpp>
#include <cmath>

main_program{
	int num;
	cin >> num ;
	int count = 0;
	int new_num = num;
	int reversed_num = 0;
	int digits;
	while (new_num>0)
	{
	count ++;
	new_num = new_num /10;

	}

	for (int i = 0;num>0;num= num/10){
	digits = num %10;
	reversed_num += digits * (pow(10,count-i-1));// so the first thing is that pow return the double value 
	// so it will casue inaccuracy which we shouldn't use.
       i++;

	}

	// if (new_num == reversed_num) std::cout << "is Palindrome" ;
	// else std::cout << "is not palindrome";

	// we can use the terniary operator instea of the if else

	std::cout << (new_num==reversed_num ? "is palindrome": "is not palindrome");

}

bool isPalindrome(int num){
	int original = num,reversed = 0;

	while (num >0){
		int digits = num %10;
		reversed = reversed * 10 + digits;
		num /= 10;
	}

	return original== reversed;
}
