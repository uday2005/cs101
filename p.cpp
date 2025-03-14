#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    n = n/2+1;
    
    for(int i = 1;i<=n;i++){

        for(int m = 1;m<=n-i;m++){
            cout << " ";
        }

        for (int j = 1; j<= 2* i-1;j++)
        {
            if (j<i) cout << "x";
            if(j>i) cout << "o";
            if (j==i)cout << "|";
        }
        cout <<  endl;
    }

     for(int i = n-1;i>0;i--){

        for(int m = 1;m<=n-i;m++){
            cout << " ";
        }

        for (int j = 1; j<= 2* i-1;j++)
        {
            if (j<i) cout << "x";
            if(j>i) cout << "o";
            if (j==i) cout << "|";
        }
        cout << endl;
    }
}


bool covers(int a,int b){
    for(int d = 2;b>0;b%d ? b /= d: d++){
        if(b%d==0 && a %d != 0){
            return false;
        }
    }
    return true;
}

bool PPE(int a , int b){
    return (covers(a,b) && covers(b,a));
}

int postinc(int &m){
    int actual_m = m;
    m = m+1;
    return actual_m;
}

int addtens(int a, int b, int c = 10);  // ✅ c = 10 is defined
int addtens(int a, int b = 10, int c);  // ❌ Invalid: c had a default earlier, but it's missing here
int addtens(int a, int b, int c) {  
    return a + b + c;  
}

