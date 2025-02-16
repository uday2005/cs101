#include <simplecpp>
bool is_Valid (unsigned int num){

if (num==0) return false;
  int count = 0;
    while (num >0){
        if(num & 1){
            count ++;
        }
        num = num >> 1;

    }
    return count==1;
}
main_program{

int test_cases;
cin >> test_cases;

for (int i=0;i<test_cases;i++){
    long unsigned int n;
    cin >> n;
    bool g = is_Valid(n);

    cout << (g ? "yes" : "no")<< endl;;
}

}

