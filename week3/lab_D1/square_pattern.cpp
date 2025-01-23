#include <simplecpp>

main_program{
    int num;
    cin >> num;

    for(int i=1;i<=num;i++ ){
        if (i==1 || i== num){
            for(int i = 0; i<num;i++){
                std::cout << "* ";
            }
            std::cout << std::endl;
        }
        else if(i%2==0){
            for(int j=1;j<=num;j++){
                if(j==1 || j==num){
                    std::cout << "* ";
                }
                else if(j%2==0){
                    std::cout << "- ";
                }
                else{
                    std::cout << "+ ";
                }
            }
            std::cout << std::endl;
        }
        else{
                for(int p=1;p<=num;p++){
                if(p==1 || p==num){
                    std::cout << "* ";
                }
                else if(p%2==0){
                    std::cout << "+ ";
                }
                else{
                    std::cout << "- ";
                }
            }
        std::cout << std::endl;
        }
        }


    }