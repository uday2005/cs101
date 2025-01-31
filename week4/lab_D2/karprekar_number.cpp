#include <simplecpp>

int length(int num){
    int length = 0;
    for(;num>0;num= num/10){
        ++length;
    }
    return length;
}

int power (int n, int m){
    int result = 1;
    for (int i=0;i<m;i++){
        result *= n;
    }
    return result;
}
int main(){
int num;
cin >> num;

int len = length(num);

int square_value = num * num;

while (true){
    
    int num1 = square_value % power(10,len);
    int num2 = square_value /power(10,len);

    if (num1 + num2 == num && (num1!=0 && num2!=0 )){
        std::cout << 1;
        break;
    }
    else{
        std::cout << 0;
        break;
    }

}

return 0;
}