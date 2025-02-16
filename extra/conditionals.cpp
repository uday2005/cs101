#include <simplecpp>

using namespace std;
void increasing_order(int n,int m, int l){
    if(n>m){
        int temp = m;
        m = n;
        n = temp;
    }
    if(m>l){
        int temp = l;
        l = m;
        m = temp;
    }
    if(n>l){
        int temp = l;
        l = m;
        n = temp;
    }
    cout << n << " " << m  << " "<< l ;
}

bool leap_year(int year){
    return ((year %400==0) || ((year%4==0) && (year%100 != 0) ));
}

// void know_date(int year,int days){
//     int month = 1;
//     if (days <=31) cout << days << "/" << month << "/" <<  year; 
//     while (days >= 31){
//         if (leap_year(year) && month ==2)
//         { 
//             days = days - 29;
//         }
//         else if ((!leap_year(year)) && month ==2){
//             days = days - 28;
//         }
//         else if( month==1 || month ==3 || month == 5|| month==7|| month ==8 || month == 10||month ==12)
//         {
//         days = days -31;
//         }

//         else if (month ==4 || month == 6 ||  month ==9||month ==11)
//         {
//             days = days - 30;
//         }
//         month++;
       
//     }
//     cout << days << "/" << month<<"/" <<  year;
// }

void know_date(int days , int year){
    int days_in_month ;
    int month = 1;
    
    while (true){
    if (month==2){
        days_in_month = leap_year(year) ? 29 : 28;
    } 
    else if( month==1 || month ==3 || month == 5|| month==7|| month ==8 || month == 10||month ==12)
        days_in_month = 31;
    else if (month ==4 || month == 6 ||  month ==9||month ==11)
        days_in_month  = 31;

    if(days > days_in_month){
        days  = days - days_in_month;
        month++;
    }
    else{
        break;
    }
    cout << days << "/" << month<<"/" <<  year;
}
}

void quadratic (int a,int b, int c){
    cout << (-1* b +sqrt(b*b-4*a*c))/2*a*c;

}
void vowel_or_consonant(char c){
    if (c =='a' || c=='i' || c =='e' || c=='o'|| c=='u' || c=='A' || c== 'E'|| c== 'I'|| c== 'O'|| c== 'U'){
        cout << 1;
    }
    else{
        cout << 0;
    }
}

bool is_prime(int a){
    for(int i = 2; i * i<= a;i++){
        if(a %i == 0) return false;
    }
    return true;
}

bool perfect_num(int num){
    int total = 0;
    for(int i = 1;i<num;i++){
        if (num%i == 0) total += i;
    }
    return (total == num);
}
// upper on is quite inefficient for the large numebr and ut migh toverflow also

bool perfect_num_2(int num){
    int total = 0;
    for(int i = 1; i * i <= num;i++){
        if (num %i ==0) { // if i is a divisor for  num then num/i will be also divisor
            total += i;
        
        if(i != num/i){ // we are checking if i and num/i are equals or not.
            total += num/i;
        }
        }
    }
    return (total == num);
}

void print_prime(int num){
    for(int i = 2;i<=num;i++ ){
        bool isprime = true;
        for (int j = 2;j * j<= i;j++){
            if(i%j==0) { 
                isprime = false;
                break; 
            }
        }
        if(isprime) cout << i << " ";
    }   
}
int main(){
    increasing_order(234,43,76);

    know_date(2011,62);
}

void marks(){
    int nextmarks;
    int total = 0;
    int count = 0;
    for(cin >> nextmarks;nextmarks >=0;cin>>nextmarks){
        total += nextmarks;
        count++;
    }
    cout << total/count;
}