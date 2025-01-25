#include <iostream>
using namespace std;
int main(){
    int smaller {};
    int larger {};

    cout << "Enter a Integer:" ;
    cin >> smaller;
    cout << "Enter a larger Integer";
    cin >> larger;

    {
        int temp{};
        if (smaller > larger){
            temp = smaller;
            smaller = larger;
            larger = temp;
        }
    }
        cout << "the smaller integer is " << smaller;
        cout << "The larger integer is " << larger; 

}