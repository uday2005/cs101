#include <iostream>
using namespace std;
bool covers(int m , int n){
	
	for (int d=2;m>1;(m%d==0) ? m/=d : d++){
	if (m%d==0 && n % d != 0){
		return false;
	}
	}
	return true;
}



int main() {
  int a, b;
  cin >> a >> b;
  bool a_covers_b = covers(a,b);
  bool b_covers_a = covers(b,a);
  cout << ((a_covers_b && b_covers_a) ? "Equivalent!" : "Not equivalent!") << endl;
}
