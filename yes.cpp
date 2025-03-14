// // #include <simplecpp>
// // #include <cmath>

// // int digits(int num){
// //     int count = 0;
// //     for(;num >0;num /= 10){ 
// //         count ++;
// //     }
// //     return count;
// // }

// // int addtens(int a, int b, int c = 10);  // ✅ c = 10 is defined
// // int addtens(int a, int b = 10, int c); 
// //  // ❌ Invalid: c had a default earlier, but it's missing here
// // int addtens(int a, int b, int c) 
// // {  

// //     return a + b ;  
// // }

// // int main(){

// //     cout << addtens(10,10,2);


// // }

// // bool is_palindrome (string &s , int start , int end){
// //     if(start>= end) return true;
// //     if(s[start] != s[end]) return false;

// //     return (is_palindrome(s,start+1,end-1));
// // }

// // int main(){
// //     string s;
// //     cin >> s;

// //     is_palindrome(s,0,s.length()-1) ? cout << "This is palindrome\n": cout <<  "Not the palindrome\n" ;
// // }

// bool is_even(int m){
//     return (m%2==0) 
// }

// int main(){
//     cout << is_evben(m)
// }
#include <simplecpp>

main_program {
    turtleSim();
    penUp();
    int i = 1;
    repeat(6) {
        wait(2);
    left(90);
    wait(2);
    forward(50);
    wait(2);
    penDown();
    wait(2);
    right(120);
    wait(2);
    repeat(6) {
    forward(50);
    wait(2);
    right( 60 );
    wait(2);
    }
    right(60);
    wait(2);
    penUp();
    wait(2);
    forward(50);
    wait(2);
    left( 90 );
    wait(2);
    right( 60*i );
    wait(2);
    forward(50*sqrt(3));
    wait(2);
    left( 60*i );
    wait(2);
    i = i+1 ;
    
    }
    getClick();
    }
