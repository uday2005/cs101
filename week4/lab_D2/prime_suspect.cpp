#include <simplecpp>
using namespace std;


#include <chrono>

// int main(){
//     auto start = std::chrono::high_resolution_clock::now();
//     int num;
//     cin >> num;
//     for (int i=2;i<num;i++){
//         if (num%i==0) {
//             std::cout << "sus";
//             break;
//         }
//         else{
//     std::cout << "not sus";
//         }
//     }

//     auto stop = std::chrono::high_resolution_clock::now();
//     auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

//     std::cout << "Duration: " << duration.count() << " microseconds" << endl;
// }


int main(){
    auto start = std::chrono::high_resolution_clock::now();
    int num;
    cin >> num;
    int real_num = num;
    for (int i=2;i<num;i++){
        if (i%2==0) continue;
        else {
            num = num /i;
        }

    }
    if (real_num != num){
            std::cout << "sus" << std::endl;;
        }
    else{
         std::cout << "not sus"<< std::endl; ;
    }
    
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Duration: " << duration.count() << " microseconds" << endl;
    
}



// #include <simplecpp>
// #include <chrono>
// #include <iostream>

// using namespace std;
// using namespace std::chrono;

// int main(){
//     auto start = high_resolution_clock::now();
//     int num;
//     cin >> num;
//     for (int i = 2; i < num; i++){
//         if (num % i == 0) {
//             cout << "sus";
//             return 0;
//         }
//     }
//     cout << "not sus";
//     auto stop = high_resolution_clock::now();
//     auto duration = duration_cast<microseconds>(stop - start);
//     cout << "Duration: " << duration.count() << " microseconds" << endl;
// }