#include <simplecpp>

 float pow(float p, float q) {
    int result = 1; // Initialize result to 1
    for (int i = 0; i < q; i++) {
        result = result * p; // Multiply by p in each iteration
    }
    return result;
}

int max_power (int num){
    int n = 1;

    while ((pow(16,n) - num) <= 0){
        n += 1;
    }
    return (n-1);
}

main_program{
int num ;
cin >>num;
int high = max_power(num);

    
while (high >= 0)
{
    int power = pow(16,high);
    int number=( num /pow(16,high));
    num = num % power;
    
    if ( number <10 && number >=0){
        std::cout << number;
    }
        else if (number ==10){
        std::cout << "A";
    } 
        else if (number ==11){
        std::cout << "B";
    }
        else if (number ==12){
        std::cout << "C";
    }
        else if (number ==13){
        std::cout << "D";
    }
        else if (number ==14){
        std::cout << "E";
    }
        else if (number ==15){
        std::cout << "F";
    }

high = high-1 ;

}

}

void decimal_to_hexa (int num){
    if (num == 0){
        return; // Base case stop recurrsion
    }
    decimal_to_hexa(num/16);

    int remainder = num % 16 ;


    if(remainder>=0 && remainder <= 9){
        cout << remainder;
    }
    else
    cout << char('A'+(remainder-10));
    //     else if (num ==10){
    //     std::cout << "A";
    // } 
    //     else if (num ==11){
    //     std::cout << "B";
    // }
    //     else if (num ==12){
    //     std::cout << "C";
    // }
    //     else if (num ==13){
    //     std::cout << "D";
    // }
    //     else if (num ==14){
    //     std::cout << "E";
    // }
    //     else if (num ==15){
    //     std::cout << "F";
    // }
    

}

int main(){
    int num = 26;
    // cin >> num;

    if (num==0) cout << "0";

    decimal_to_hexa(num);
    cout << endl;
}

void decimal_to_hexa (int num){

    for(int i = 28;i>=0;i = i-4){
        
    int value = (num >> i) & 0xF;

    if (value <10) cout << value;
    else cout << char('A' + value - 10);
    }

}