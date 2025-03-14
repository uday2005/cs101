#include <iostream>
using namespace std;

// Decleare globally as inside in cpp array cannto be returned directly


int main(){
    float marks[100]; 

    for(int i= 0;i<100;i++)
    {
        cout << "The  marks of the roll number" << i+1  << "\n";
        cin >> marks[i];
    }


    while(true){
        cout << "Roll Number";
        int rollnum;
        cin >> rollnum;

        if(rollnum == -1) break;

        if(rollnum <1 || rollnum > 100){
            cout << "Please enter valid roll number";
            continue;
        }

        cout << "Marks" << marks[rollnum-1] << endl;
    }
    return 0;

    float maxsoFar = marks[0];
    for(int i = 0;i< 100;i++){
        if(maxsoFar <marks[i]) {
            maxsoFar = marks[i];
        }
    }

    for(int i = 0;i<100;i++){
        if(maxsoFar == marks[i]){
            cout <<  "Maximum marks" << i <<"\n";
        }
    }
}