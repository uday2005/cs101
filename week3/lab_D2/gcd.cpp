#include <simplecpp>

main_program{
 int num1;
 int num2;
 cin >> num1;
 cin >> num2;
 cout << num1 << num2 ;
int result = 1;

 int i = 2;

 
 while (i <= num1 && i<=  num2){
 if ((num1 %i ==0)&&(num2 %i ==0)){
  while (num1 %i ==0 && num2 %i ==0){
    num1 = num1 /i;
    num2 = num2 /i;
    result  *= i;
    std::cout << "result everytime " << result << "num1: " <<num1 << "num2: "<<num2 << std::endl;
  }
  i++;
  std::cout << "If num and num2 is divisible by i " << i <<std::endl;
  std::cout << "Final result after every unique " << result << std::endl;
}
else{
    i++;
    std::cout << "If num1 and num2 is not divisible by i " << i<< std::endl;
    
}
std::cout <<"attempting to find final result" << result <<std::endl;

}
}