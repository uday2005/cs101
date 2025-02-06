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
    int num_of_test_cases;
    cin >> num_of_test_cases;

    while (num_of_test_cases != 0){
        unsigned int num;
        cin >> num;

        bool yes =  is_Valid(num);
        cout << (yes ? "yes": "no");
        num_of_test_cases--;
        std::cout << std::endl;

    }
    

}

