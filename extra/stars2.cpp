#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
for(int i=n;i>= 1;i--){
	for (int j = 0;j<n-i;j++){
		cout << " ";
	}
	for (int m = 0; m< 2* i-1;m++){
		cout << "*";
	}
	cout << endl;
}
}
