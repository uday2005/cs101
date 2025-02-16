#include <iostream>
using namespace std;

int main(){
int n;
cin >> n;

for (int i = 1;i<=n;i++){
	for (int j = 0; j<(n-i);j++){
	cout << " ";
	}
	for (int m = 0;m<n+2* (i-1);m++){
	cout << "*";	
}
cout << endl;
}

for (int p = n-1;p>=1;p--){


	for (int j = 0; j<(n-p);j++){
	cout << " ";
	}
	for (int m = 0;m<n+2* (p-1);m++){
	cout << "*";	
}
cout << endl;
}
}
