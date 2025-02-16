#include <simplecpp>

main_program{
    int n;
    cin >> n;
    n = n/2+1;

    for(int i=1 ; i<=n;i++){
        for (int j = 1;j<=n-i;j++){
            cout << " ";
        }
        for (int j = 1; j<=2*i-1;j++){
            if (i==j) cout << "|";
            if(i<j) cout << "O";
            if(i>j) cout << "X";
        }
        cout <<  endl;
    }

    for(int i=n-1 ; i>0;i--){
        for (int j = 1;j<=n-i;j++){
            cout << " ";
        }
        for (int j = 1; j<=2*i-1;j++){
            if (i==j) cout << "|";
            if(i<j) cout << "O";
            if(i>j) cout << "X";
        }
        cout << endl;
    }
}