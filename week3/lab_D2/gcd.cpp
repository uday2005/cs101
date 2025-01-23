#include <simplecpp>

main_program{
 int num1;
 int num2;
 cin >> num1;
 cin >> num2;
int result = 1;

 int i = 2;
if (num1 == 0){
    result =num2;
}
if(num2 == 0){
    result = num1;
}

 
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
std::cout << result <<std::endl;
}