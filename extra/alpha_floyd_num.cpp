#include <simplecpp>

main_program{
    int n;
    cin >>n;
    int count = 1;
    for (int i=1;i<=n;i++){

        for (int j=1;j <=i;j++){
            if (count  > 9)
            {
            count = 1;
            }
            std::cout << count << " "; 

            count ++; 
        }
        
        std::cout << std::endl;
    }
}