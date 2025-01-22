#include <simplecpp>
main_program {
    int month = 1;
    int years;
    int days;
    int total_days = 0;
    int days_in_month ;
    std::cin >> years;
    std::cin >> days ;

    while(true){
        if (month == 2){
            if ((years % 400 == 0 )  ||(years%4==0 && !(years%100==0))){ 
                days_in_month = 29;
            }
            else{
                days_in_month = 28;
            }
        }
            else if((month % 2)==0){
            days_in_month = 30;
        }
        else{
            days_in_month = 31;
        }

        if (total_days + days_in_month  >= days){
            break;
        }
        else{
            days  = days - days_in_month;
        }
        month += 1;
    
}
        std::cout << days << "/" << month << "/" << years << std::endl;
}