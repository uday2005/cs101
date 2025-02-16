#include <simplecpp>
#include <cmath>

int digits(int num){
    int count = 0;
    for(;num >0;num /= 10){ 
        count ++;
    }
    return count;
}


int main(){


}