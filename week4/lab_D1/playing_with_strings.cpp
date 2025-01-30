#include <simplecpp>
#include <string>
main_program{
    int length_1 ;
    string word_1 ;
    std::cin >> word_1;
    std::cin >> length_1;
    int weight = 0;
    for (int i=0;i<length_1;i++){
        cout << endl << i << endl;
       char yes  = word_1[i]; 
       cout  << yes;
       
        if (yes == 'o' || yes == 'a' ||yes == 'i' || yes=='e' || yes=='u'){
            weight = weight +  3+ 2;
            std::cout << "small-vowel-weight: " << weight << yes;
        }
        else if (yes == 'A'||yes =='E' || yes =='I' ||yes =='O'||yes == 'U'){
            weight = weight + 3 -1;
            std::cout << "Capital-Vowel-Weight: " << weight  << endl;
        }
        else if ((int(yes) >= 65 && int(yes) <= 90)){
            weight  = weight + int(yes)-65+1-1;
            std::cout << "Capital-Consonant-Weight: " << weight << endl;
        }
        else if (int(yes)>=97 && int(yes)<=122){
            cout << yes << endl;
            cout << int(yes);
            weight = weight + int(yes)- 97 +1+2;
        std::cout << "small-consonant-Weight: " << weight << endl;
        }
        else{
            int value = int(yes);
            weight = weight+ (value %10);
            std::cout << "special-char-weight: " << weight << endl;
        }
    }
    std::cout << weight;
    }