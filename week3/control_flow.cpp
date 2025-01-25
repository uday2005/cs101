#include <iostream>
using namespace std;
// int main()
// {
//     // if (true){
//     //     int x{ 5 }; // x is created here
//     //     } // x is destroyed here.
//     // else{
//     //     int x{ 6 };   // x is created here
//     // } // x is destroyed here
//     // std::cout << x << '\n'; // This will give error as x is not now available

//     // return 0;


// }

// #include <iostream>

// void ifelse(bool a, bool b, bool c)
// {
//     if (a)      // always evaluates
//         std::cout << "a";
//     else if (b) // only evaluates when prior if-statement condition is false
//         std::cout << "b";
//     else if (c) // only evaluates when prior if-statement condition is false
//         std::cout << "c";
//     std::cout << '\n';
// }

// void ifif(bool a, bool b, bool c)
// {
//     if (a) // always evaluates
//         std::cout << "a";
//     if (b) // always evaluates
//         std::cout << "b";
//     if (c) // always evaluates
//         std::cout << "c";
//     std::cout << '\n';
// }

// int main()
// {
//     ifelse(false, true, true);
//     ifif(false, true, true);

//     return 0;
// }


// char getFirstMatchingChar(bool a, bool b, bool c)
// {
//     if (a) // always evaluates
//         return 'a';
//     else if (b) // only evaluates when prior if-statement condition is false
//         return 'b';
//     else if (c) // only evaluates when prior if-statement condition is false
//         return 'c';

//     return 0;
// }
// whenever we encounter the first return in the function it will break out of the function 
// which is not in the case of cout so we shoul dremeber this.

// this can be also written as 

// char getFirstMatchingChar(bool a, bool b, bool c)
// {
//     if (a) // always evaluates
//         return 'a'; // returns when if-statement is true
//     if (b) // only evaluates when prior if-statement condition is false
//         return 'b'; // returns when if-statement is true
//     if (c) // only evaluates when prior if-statement condition is false
//         return 'c'; // returns when if-statement is true

//     return 0;
// }


// #include <iostream>

// void printDigitName(int x)
// {
//     switch (x)
//     {
//     case 1:
//         std::cout << "One";
//         return;
//     case 2:
//         std::cout << "Two";
//         return;
//     case 3:
//         std::cout << "Three";
//         return;
//     default:
//         std::cout << "Unknown";
//         return;
//     }
// }

// int main()
// {
//     printDigitName(2);
//     std::cout << '\n';

//     return 0;
// }

// void PrintLetters (char n){
//     switch (n){

//         case 'A':
//             std::cout << 'A';
//             return;
//         case 'B':
//             std::cout << 'B';
//             return;
//         case 'C':
//             std::cout << 'C';
//             return;
//         default:
//             std::cout << "No output";
//             return;
// }
// }

// //Each set of statements underneath a label should end in a break-statement
// // or a return-statement. This includes the statements underneath the last label in the switch.

// #include <iostream>

// void printDigitName(int x)
// {
//     switch (x) // x evaluates to 3
//     {
//     case 1:
//         std::cout << "One";
//         break;
//     case 2:
//         std::cout << "Two";
//         break;
//     case 3:
//         std::cout << "Three"; // execution starts here
//         break; // jump to the end of the switch block
//     default:
//         std::cout << "Unknown";
//         break;
//     }

//     // execution continues here
//     std::cout << " Ah-Ah-Ah!";
// }

// int main()
// {
//     printDigitName(3);
//     std::cout << '\n';

//     return 0;
// }

// if we do not put the break or retun on each case labels then it will cause to error like when the case value
// matches then the afterwards all the case condition will also mathes and to avoid this we use return and break

int calculate(int num1,int num2,char oper){
    switch(oper)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 -num2 ;
    case '*':
        return num1 * num2;
    case '/':
        return num1 /num2;
    case '%':
        return num1 % num2;
    default:
        std::cout << "Invalid operation";
        return 0;
    }
}


// int main()
// {
//     std::cout << "Enter an integer: ";
//     int x{};
//     std::cin >> x;

//     std::cout << "Enter another integer: ";
//     int y{};
//     std::cin >> y;

//     std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
//     char op{};
//     std::cin >> op;

//     // We'll call calculate first so an invalid operator prints an error message on its own line
//     int result{ calculate(x, y, op) };
//     std::cout << x << ' ' << op << ' ' << y << " is " << result << '\n';

//     return 0;
// }


// #include <iostream>

// int main()
// {
//     unsigned int count{ 10 }; // note: unsigned

//     // count from 10 down to 0
//     while (count >= 0)
//     {
//         if (count == 0)
//         {
//             std::cout << "blastoff!";
//         }
//         else
//         {
//             std::cout << count << ' ';
//         }
//         --count;
//     }

//     std::cout << '\n';

//     return 0;
// }

// #include <iostream>

// void printUpto(int outer)
// {
//     // loop between 1 and outer
//     // note: inner will be created and destroyed at the end of the block
//     int inner{ 1 };
//     while (inner <= outer)
//     {
//         std::cout << inner << ' ';
//         ++inner;
//     }
// } // inner destroyed here

// int main()
// {
//     // outer loops between 1 and 5
//     int outer{ 1 };
//     while (outer <= 5)
//     {
//         // For each iteration of the outer loop, the code in the body of the loop executes once

//         // This function prints numbers between 1 and outer
//         printUpto(outer);

//         // print a newline at the end of each row
//         std::cout << '\n';
//         ++outer;
//     }

//     return 0;
// }


// #include <iostream>

// int main()
// {
//     char myChar{ 'a' };
//     while (myChar <= 'z')
//     {
//         std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
//         ++myChar;
//     }

//     char myChar1 {'A'};
//     int count = 65;
//     while (myChar1 <= 'Z' )
//     {
//         std::cout << myChar1 << ' ' <<count  <<'\n';
//         ++myChar1;
//         ++count;
//     }
//     return 0;
// }

#include <iostream>

void reverse_num() {
    int i = 5;
    while (i >= 1) {
        int j = 5;
        while (j >= i) {
            std::cout << j << " ";
            --j;
        }
        --i;
        std::cout << std::endl;
    }
}

void reverse_num_ver ();
void  num_1_20();
int sum(int to);
void fizzbuzz(int num);
void fizzbuzzpop(int till);
int main() {
    // reverse_num(); // Call the function to execute
    reverse_num_ver();
    num_1_20();
    sum (5);
    fizzbuzz(15);
    fizzbuzzpop(150);
    return 0;
}
void reverse_num_ver (){
    int outer {1};
    while (outer <= 5){
        int space = 1;
        while ( space <= 5-outer){
            cout << " ";
            ++space;
        }
        int inner = outer;
        while (  inner  > 0){
            cout  << inner ;
            --inner;
        }
        ++outer;
        cout << endl;
    }
}


#include <cstdint> // for fixed-width integers

// returns the value base ^ exponent -- watch out for overflow!
std::int64_t pow(int base, int exponent)
{
    std::int64_t total{ 1 };

    for (int i{ 0 }; i < exponent; ++i)
        total *= base;

    return total;
}
void  num_1_20(){
    for (int i{0};i<=20;i += 2){
        std::cout << i << std::endl;
    }
}

int sum(int to){
    int result = 0;
    for(int i{1};i<=to;i++){
        result += i;
    }
    std::cout << result;
    return result;

}


void fizzbuzz(int num){
    // std::string total5 {" "};
    std::string total6 = " ";
    for (int i{1};i<= num;i++){
        if ((i%3==0)) std::cout << "Fizz" << endl; 
        if ((i%5==0)) std::cout << "Buzz" << endl;
        if ((i%3==0 && i%5==0)) std::cout <<"FizzBuzz" << endl;
        else std::cout << i << endl;
    }
}

void fizzbuzzpop(int till){
    
     for (int i{1};i<= till;++i){
        std::string total = "";
        if (i%3==0) {
            total += "fizz";
        }
        if (i%5==0){
            total += "buzz";
        }
        if (i%7==0){
            total += "pop";
        }
        if(total.empty()){
            total =  std::to_string(i);
        }
       std::cout << total << " ";
     }
     std::cout << std::endl;
}

// upwards what i wrote is correct in python but not in cpp as we are adding int to string variable.
// so i am changing the upward thing .

// There is one more way to do this without string which obviously i was unable to think.

// we can use boolean condition to see if the number has matche done of the conditions.



void fizzbuzz2(int count)
{
	for (int i{ 1 }; i <= count; ++i)
	{
		bool printed{ false };
		if (i % 3 == 0)
		{
			std::cout << "fizz";
			printed = true;
		}
		if (i % 5 == 0)
		{
			std::cout << "buzz";
			printed = true;
		}
		if (i % 7 == 0)
		{
			std::cout << "pop";
			printed = true;
		}

		if (!printed)
			std::cout << i;

		std::cout << '\n';
	} // end for loop
}

#include <iostream>

int main()
{
    int count{ 0 }; // count how many times the loop iterates
    bool keepLooping { true }; // controls whether the loop ends or not
    while (keepLooping)
    {
        std::cout << "Enter 'e' to exit this loop or any other character to continue: ";
        char ch{};
        std::cin >> ch;

        if (ch == 'e')
            keepLooping = false;
        else
        {
            ++count;
            std::cout << "We've iterated " << count << " times\n";
        }
    }

    return 0;
}


