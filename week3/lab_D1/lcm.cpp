#include <simplecpp>

main_program{
 int num1;
 int num2;

 cin >> num1;
 cin >> num2;

int you1 =num1;
int you2 =num2;
int result = 1;

 int i = 2;

 while (i <= num1 && i<=  num2){
 if ((num1 %i ==0)&&(num2 %i ==0)){
  while (num1 %i ==0 && num2 %i ==0){
    num1 = num1 /i;
    num2 = num2 /i;
    result  *= i;
  }
  i++;
}
else{
    i++;
    
}
}
int result1 = (you1 * you2);
int result2 = result1 /result;

std::cout << result2 <<std::endl;
}