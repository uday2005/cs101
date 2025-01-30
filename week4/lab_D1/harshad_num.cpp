#include <simplecpp>

main_program{
    int num;
    cin >> num;
    int total = 0;
    int real_num = num;
    for(;num>0;num = num/10){
        total = total + num %10;
    
       
    }
    if(real_num%total == 0){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }

    }