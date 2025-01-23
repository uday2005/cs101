#include <simplecpp>

main_program{
    int n;
    cin >> n;
    int height = floor(n/2);
    for(int i =1;i<=n;i++){
        for (int m=0;m<(n-i);m++){
            std::cout << " ";
        }
        for(int j=0;j<(2*i-1);j++){
            if (j%2 != 0){
                std::cout << "+";
            }
            else{
                std::cout << "*";
            }
          
        }
    std::cout << std::endl;
}

    for(int m=0;m<height;m++){
        for (int q=0;q<n-2;q++){
            std::cout << " ";
        }
        std::cout << "***";
        std::cout << std::endl;
    }
    
}