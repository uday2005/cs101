#include <simplecpp>

int is_Largest(int num){
	int largest = 0;

	while (num>0){
		int digit = num % 10;
		largest = largest>digit ? largest : digit;
		num = num /10;
	}
	return largest;

}


main_program{
	int num_of_integer ;
	cin >> num_of_integer;
	int value = 0;
	while(num_of_integer > 0){
		int number;
		cin >>number;
	int largest_digit  = is_Largest(number);
	value = 10 * value + largest_digit;
    num_of_integer--;

	}
	std::cout << value; 
}
