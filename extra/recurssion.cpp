#include <iostream>
#include <string>
using namespace std;

int virankha_by_looping(int n){
    int v1 = 1;
    int v2 = 2;
    int current;
    if(n==1) return v1;
    else if(n==2) return v2;
    else{
        int second_last = v1;
        int last = v2;
            // so we need to calulate n virahane then we need to change everytime last to current value
            // and second last to last value  and it will go till n-2 times of virahna numebr as 2 value v1 and v2
            // are already definded
        for(int i = 2;i< n;i++){
            current = second_last  + last;
            second_last =last;
            last = current;
        }
    }
    return current;
}

int virahna(int n){
    if (n==1) return 1;
    if(n==2) return 2;

    return (virahna(n-1)+ virahna(n-2));
}


int findlargestDigit(int n){
    if (n<10) return n;
    else{
        return std::max(n%10,findlargestDigit(n/10));
    }
}

int expontiate(int n, int k){
    int result  = 1;
    for(int i = 0;i<k;i++){
        result *= n;
    }
    return result;
}

int expontiate_by_rec(int n,int k){
    if (k==0) return 1;
    return (n * expontiate_by_rec(n,k-1));
}

long double factorial(int n){
    if(n==0) return 1;
    return (n * factorial(n-1));
}

double ncr(int n,int r){
    if(r==n) return 1;
    if( r ==0 ) return 1;
    return (ncr(n-1,r)+ ncr(n-1,r-1));
}

int GCD(int m,int n){
    if(n==0) return m;
    return GCD(n,m%n);
}
bool diphto(int a,int b,int c){
    return ((c % GCD(a,b))==0) ; 
}

int wn(int n){
    if(n==0 || n==1 || n==2) return 1;
    return (wn(n-1)+ wn(n-2) + wn(n-3));
    
}
// assmption in both is n will be always greate rthan equal to 3.
int wn_loop(int n){
    int w0 = 1;
    int w1  = 1;
    int w2 = 1 ;

    if(n==1 || n == 0|| n==2) return 1;

    int third_last = w0;
    int second_last = w1;
    int  last = w2;

    int current;
    for(int i = 3; i<= n;i++){
        current =  second_last + last + third_last;
        third_last = second_last;
        second_last = last;
        last = current;
    }
return current;
}

int virahna_test(int n){
    if (n==1) return 0;
    if(n==2) return 0;

    return (virahna(n-1)+ virahna(n-2) + 2);
}

bool ispalindrome(string &s , int start , int end){
    if(start >= end) return true;
    if(s[start] != s[end]) return false;
    return ispalindrome(s,start +1,end -1);

}

void print_all(string s){
    

}

void Tower_of_Hanoi(int n,int start,int end){
    int middle = 6 - start - end;

    if(n==1){
        cout << "move disk 1 from the " << start << "to" <<  end << endl;
        return ;
    }

    Tower_of_Hanoi(n-1,start,middle); 
    // move n-1 rod to target rod that is middle rod and it will be iusing the recurssion
    cout << "MOve Disk " << n << "from" << start << "to" << end << endl;
    // move last disk from first to last rod
    Tower_of_Hanoi(n-1,middle,end);
}
void char_perm(string &str , int l , int r){
    if(l==r) { // BAse Case
        cout << str << endl;
    }
    else{
        for(int i = l;i<=r;++i){
            swap(str[l],str[i]);
            char_perm(str,l+r,r);
            swap(str[l],str[i]);
        }
    }
}
void oppsi_n(int i ,int n){
    if(i>n) return ;
    cout << n << endl;
    oppsi_n(i,--n);
}

void pri_n(int i , int n){
    if(i<1) return ;
    pri_n(i-1,n);
    cout<<i;
}
void f(int arr[], int i ,int n){
    if (i >= n/2) return ;
    swap(arr[i],arr[n-i-1]);
    f(arr, i+1, n);
}

int recu_Step(int n){
    if(n==1) return 0;
    if(n==0) return 0;

    return (recu_Step(n-1) + recu_Step(n-2) + 2);
}
int main(){
    // cout << factorial(5) << endl;
    // cout << ncr(5,4);
    cout << wn(3) << endl;
    cout << wn(4) <<  endl;
    cout << wn_loop(3) << endl;
    cout << wn_loop(4) <<  endl;
    cout << virahna(6) << endl;
    cout << virankha_by_looping(6) << endl;
    // virahna will caculate the no of the test cases to reach the naswer including itself.
    cout << virahna_test(6) << endl;

    // string s;
    // cin >> s;

    // (ispalindrome(s,0,s.length()-1) 
    //                     ? (cout << s << "is Palindrome")
    //                     : (cout << s << "not palindrome")); 

    // Tower_of_Hanoi(3,1,3);
    oppsi_n(1,4);

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0;i<n;i++) cin >> arr[i];
    f(arr,0,n);
    for(int i = 0 ; i<n ; i++) cout << arr[i];
    return 0;
}
