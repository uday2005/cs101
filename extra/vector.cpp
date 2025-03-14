// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     std::vector<int> arr {84,26,92,76,52};
//     std::size_t length {arr.size()};

//     int average {(arr[0]+arr[1]+ arr[2]+arr[3]+arr[4])/static_cast<int>(length)};

//     std::cout << "The Class Average is " << average ;
// }

#include <iostream>
#include <limits>
#include <vector>
#include <cassert>
#include <string_view>



void Print_Array(std::vector <int> &ds){
    std::size_t length {ds.size()};
    // Add your code here
    for (std::size_t  i {0} ;i<length;i++){
        std::cout << ds[i] << " ";
    }
}

// down one is necessary for using
// template <typename T>
//int Print_array(const std::vector<T> &arr)

template <typename T>
int findIndex(const std::vector<T>& arr, T val)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        if (arr[index] == val)
            return static_cast<int>(index);
    }
    return -1; // -1 is not a valid index, so we can use it as an error return value
}


int Print_array(const std::vector<int> &arr){
    std::size_t length {arr.size()};

    for(std::size_t i {0};i<length;i++){
        std::cout << arr[i] << " ";
    }

}

int Largest_value(const std::vector<int> &arr ){
    int s  = arr[0];

    for(int i = 1;i<arr.size();i++){
        if(s > arr[i]) {
            s = arr[0];
        }
        else{
            s = arr[i];
        }
    }

    return s;
}

int getValidNumber(){
    int number;

    while(true){
        std::cout << "Enter numebr b/w 1 to 9";
        std::cin >> number;

        if(number >= 1 && number <= 9) break;

        std::cout << "Invalid characters please try again";
        std::cin.clear();
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
    return number;
}




void fizzbuzz(int count){
    const std::vector<int> divisors  { 3, 5, 7, 11, 13, 17, 19 };
	const std::vector<std::string> words { "fizz", "buzz", "pop", "bang", "jazz", "pow", "boom" };

    assert((divisors.size()) == (words.size()) && "fizzbuzz: array sizes do not match");

    for(int i{1};i<= count;++i){
        bool printed = false;
        for(std::size_t j {0} ; j< divisors.size();++j){
            if(i%divisors[j]==0){
                std::cout << words[j];
                printed = true;
            }
        }
        if(!printed){
            std::cout << i;
        }
        std::cout << std::endl;
    }   
}

int main()
{
    std::vector<int> arr{ 4, 6, 7, 3, 8, 2, 1, 9 };
    Print_Array(arr);
    std::cout << Largest_value(arr);
    fizzbuzz(150);
    return 0;
}