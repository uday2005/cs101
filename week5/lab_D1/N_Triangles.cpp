#include <simplecpp>
void print_spaces (int num){
    for (int i = 0;i<num ;i++){
        std::cout << " ";
    }
}

void print_stars (int num) {
    for (int i=0; i < num;i++){
        std::cout << "*";
    }
	
}

void print_starry_line (int num_spaces ,int num_stars){
    for (int i = 0;i<3;i++){
        print_spaces(num_spaces);
        print_stars(num_stars);
        print_spaces(num_spaces);		
    }
}


main_program{
int n;
cin >> n;
int num_stars;
int num_spaces;
    for (int i = 0; i< n; i++){
        num_spaces = n-i-1;
        num_stars = 2 * i + 1;
        print_starry_line(num_spaces,num_stars);
		cout << endl;
    }
    
} 



#include <iostream>

using namespace std;

int main(){
    int n ;
    cin >> n;

    for (int i=0;i<n;i++){
        
        for(int m = 0;m<3;m++)
        {
        for(int j = 0 ;j<n-i;j++) {
            cout << "&";
        }
        for(int j = 0; j<2 * i+1;j++){
            cout << "*";
        }
        for(int j = 0 ;j<n-i;j++) {
            cout << "&";
        }
        }
        cout << endl;
    }
}