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


void lcm(int n , int m){
int hcf_value = 1;
int i = 2;
int lcm_value ;
int real_n = n;
int real_m= m;
// int limit  = (m<n) ? m: n;

while( i <=m && i<= n){
  while(n%i==0 && m%i==0){
      n /= i;
      m /= i;
    hcf_value *= i;
    }
  ++i;
}
lcm_value = (real_m * real_n)/hcf_value;
cout << lcm_value;

}
// so the upper one is the brute force method which is quite sufficient and we can use
// eculid divison lemma for finding hcf and then finding lcm.

int  lcm_2(int n,int m){
  int real_m = m;
  int real_n = n;
while(m != 0){
  int temp = m;
  m = n%m;
  n= temp; 
}
// n will be the hcf

return (real_m/n)*real_n;

}