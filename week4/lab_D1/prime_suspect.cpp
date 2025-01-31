#include <simplecpp>

int main(){
    int num;
    cin >> num;
    for (int i=2;i<num;i++){
        if (num%i==0) {
            std::cout << "not sus";
            break;
            }
        else{
            std::cout << "sus";
            break;
        }
    }


}