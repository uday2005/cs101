#include <simplecpp>

main_program{


    int num;
    cin >>num;


  
    int smallest_digit = 9 ;
    int largest_digit = 0  ;
    int temp_num = num;
    while (temp_num >0){
    
    int digit  = temp_num % 10;

    if (digit > largest_digit){
        largest_digit = digit;

    std::cout << "largest digits: "<< largest_digit << std::endl;
    }

     if (digit <smallest_digit){
        smallest_digit = digit;
        std::cout << "smallest digit: "<<smallest_digit << std::endl;
    }
    temp_num = temp_num /10;
    
    }
    int output = largest_digit - smallest_digit;
    cout << output << endl;

    
}
