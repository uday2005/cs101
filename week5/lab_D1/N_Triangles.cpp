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
		cout << " ";
		
    }
}


main_program{
int n;
cin >> n;
int num_spaces;
int num_stars;
    for (int i = 0; i< n; i++){
        num_spaces = n-i-1;
        num_stars = 2 * i + 1;
        print_starry_line(num_spaces,num_stars);
		cout << endl;
    }
    
}