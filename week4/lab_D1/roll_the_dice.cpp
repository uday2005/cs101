#include <simplecpp>

main_program {

    int N;
    cin >> N;

    // Generates a integer number in range 0 to 5
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int count_5 = 0;
    int count_6 = 0;

    while (N!=0){
    int value = (rand() % 6 )+1;
    if ( value == 1){
         ++ count_1;}
    else if (value == 2){ 
        ++count_2;}
    else if(value == 3){ 
        ++count_3;}
    else if (value == 4) {
        ++ count_4;}
    else if (value ==5) {
        ++ count_5;}
    else if (value == 6){
         ++ count_6;}
    N--;
    }

    std::cout << "1: " << count_1 << "\n" << "2: " << count_2 << "\n";
    std::cout << "3: " << count_3 << "\n" << "4: " << count_4 << "\n";
    std::cout << "5: " << count_4 << "\n" << "6: " << count_6 << "\n";
    





}