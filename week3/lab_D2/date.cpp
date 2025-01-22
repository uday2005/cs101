#include <simplecpp>

main_program{
    int days;
    int years;

    cin >> years;
    cin >> days;

    int month = days / 30 ;
    
    
    int total = 0;

    while (month > 0){
        if (month == 2){
            if ((years % 400 == 0 )  ||(years%4==0 && !(years%100==0))){ 
                total += 29;
            }
            else{
                total += 28;
            }
        }
        else if((month % 2)==0){
            total += 30;
        }
        else{
            total += 31;
        }
        month = month -1;
    }
    
    int date = days - total ;
    int again_month = days/30;
     
    std::cout << date << "/" << (again_month+1) << "/" << years << std::endl;


}