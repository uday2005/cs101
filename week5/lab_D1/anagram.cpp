#include <simplecpp>

bool is_Anagram(int m,int n)
{
int sum1 = 0;
int sum2 = 0;
int prod1 = 1;
int prod2 = 1;
int real_n = n;
int count = 0;
while(real_n>0){
    count++;
    real_n = real_n/10;
    
}

for (int i=0;i<count;i++){
    sum1 = sum1 + (m%10);
    sum2 = sum2 + (n%10);
    prod2 = prod2 * (n%10);
    prod1 = prod1 * (m%10);
    m = m/10;
    n = n/10;
}
cout << sum1 << " " << sum2 << " " << prod1 << " " << prod2 ;
return ((sum1 == sum2 && prod1 == prod2 ) ? 1 : 0 ) ;

}

main_program{
    int n,m;
    cin >> n>> m;

    int value = is_Anagram(n,m);
    
    if (value == 1) cout << "YES";
    else cout << "NO";
}