#include <simplecpp>

bool isAnagram(int m,int n){

    long int sum1 = 0;
    long int prod1 = 1;
    char p;
    char q;
    long int sum2 = 0;
    long int prod2 = 1;
      for (int i = 0; i < m; i++) {
        char p;
        cin >> p;
        if (p >= 'A' && p <= 'Z') {
            p = p - 'A' + 'a'; // Convert to lowercase
        }
        int value = p;
        sum1 += value;
        prod1 *= value;
    }

      for (int i = 0; i < n; i++) {
        char q;
        cin >> q;
        if (q >= 'A' && q <= 'Z') {
            q = q - 'A' + 'a'; // Convert to lowercase
        }
        int value = q;
        sum2 += value;
        prod2 *= value;
    }
    
    if (m != n) return 0;
    return ((sum1 == sum2 && prod1 == prod2) ? 1 : 0 );
}

main_program{
    int t;
    cin >> t;

    for (int i=0;i<t;i++){
        int m;
        int n;
        cin >> m >> n;
        int value = isAnagram(m,n);
        std::cout << value << endl;
    }

}