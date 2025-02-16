
#include <iostream>
using namespace std;



int main(){
    cout << int('a') << int('A') ;
    int n,m;
    cin >> n>>m;

    int result1 = 0;
    int result2 = 0;
        int num_vowels = 0;
        int num_conso = 0;
    for (int i = 0;i<n;i++){
        char s;
        cin >> s;
        if(s=='a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
            num_vowels ++;

            if(num_conso != 0){
                int w = 1;
                while(num_conso >0){
                    w *= 2;
                    num_conso--;
                }
                result1 += w;
            }
        }

        else{
            num_conso++;

            if(num_vowels != 0){
                int w = 1;
                while(num_vowels >0){
                    w *= 3;
                    num_vowels--;
                }
                result1 += w;
            }

        }
    }
                if(num_conso != 0){
                int w = 1;
                while(num_conso >0){
                    w *= 2;
                    num_conso--;
                }
                result1 += w;
            }
                if(num_vowels != 0){
                int w = 1;
                while(num_vowels >0){
                    w *= 3;
                    num_vowels--;
                }
                result1 += w;
            }

        for (int i = 0;i<m;i++){
        char s;
        cin >> s;
        if(s=='a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
            num_vowels ++;

            if(num_conso != 0){
                int w = 1;
                while(num_conso >0){
                    w *= 2;
                    num_conso--;
                }
                result2 += w;
            }
        }

        else{
            num_conso++;

            if(num_vowels != 0){
                int w = 1;
                while(num_vowels >0){
                    w *= 3;
                    num_vowels--;
                }
                result2 += w;
            }

        }
    }
                if(num_conso != 0){
                int w = 1;
                while(num_conso >0){
                    w *= 2;
                    num_conso--;
                }
                result2 += w;
            }
                if(num_vowels != 0){
                int w = 1;
                while(num_vowels >0){
                    w *= 3;
                    num_vowels--;
                }
                result2 += w;
            }

cout << result1 <<  " " << result2 << " " << result1 - result2;

}

