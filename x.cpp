#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // for(int i = 1;i<= n;i++){
    //     for(int j = 1;j<=i-1;j++){
    //         cout << " ";
    //     }
    //     for(int j = n-i+1;j>0;j--){
    //         for(int m = 0;j<= )
    //     }
    // }

    for(int i = 1;i<= n;i++){

        for( int j = 1;j<= i-1;j++){
            cout <<" ";
        }
        for (int j = 1;j<= n-i+1;j++){
            if(j%2==0){
                cout << "X";
            }
            else{
                cout << "O";
            }
        }
        cout << endl;
    }
}


