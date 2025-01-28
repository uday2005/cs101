#include <simplecpp>

main_program{
    int n;
    cin >>n;
    char count = 'A';
    for (int i=1;i<=n;i++){

        for (int j=1;j <=i;j++){
            if (count  > 'Z')
            {
            count = 'A';
            }
            std::cout << char(count) << " "; 

            count ++; 
        }
        
        std::cout << std::endl;
    }
}