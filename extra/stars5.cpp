#include <iostream>
using namespace std;
// void stars(int num){
// for (int i= 1;i<=num;i++){
// 	for (int j = 0;j<i;j++){
// 	cout << "*";
// 	}
// 	if (i != num) cout << endl;
// }
// }
// void spaces (int num){
// for (int i= 1;i<=num;i++){
// 	for (int j = 0;j<num-i;j++){
// 	cout << " ";
// 	}
// 	if (i != num) cout << endl;
// }}

int main(){
	int num;
	cin >> num;

for (int i= 1;i<=num;i++){

	for (int j = 0;j<i;j++){
	cout << "*";
	}
	for (int j = 0;j<num-i;j++){
	cout << " ";
	}
	for (int j = 0;j<num-i;j++){
	cout << " ";
	}
	for (int j = 0; j<i;j++){
	cout << "*";
	}

	cout << endl;
}}
