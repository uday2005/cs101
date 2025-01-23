#include <simplecpp>

main_program{
    int num ;
    cin >> num;
    int total = 0;
    if (num <0){
        num *= -1;
    }
    while (num >= 10){
        int number = num %10;
        total += number;
        num = num/10;

    }
    total += num;
    cout << total;
}