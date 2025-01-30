#include <simplecpp>
#include <string>

int result (int length,string word){
int weight = 0;
    for (int i=0;i<length;i++){
       char yes  = word[i]; 
       
        if (yes == 'o' || yes == 'a' ||yes == 'i' || yes=='e' || yes=='u'){
            weight = weight +  3+ 2;
        }
        else if (yes == 'A'||yes =='E' || yes =='I' ||yes =='O'||yes == 'U'){
            weight = weight + 3 -1;
        }
        else if ((int(yes) >= 65 && int(yes) <= 90)){
            weight  = weight + int(yes)-65+1-1;
        }
        else if (int(yes)>=97 && int(yes)<=122){
            weight = weight + int(yes)- 97 +1+2;
        }
        else{
            int value = int(yes);
            weight = weight+ (value %10);
        }
    }
      return weight;
}
main_program{
    int length_1 ,length_2;
    string word_1 ,word_2 ;
    std::cin >> length_1 >> length_2 ;
    std::cin >> word_1;
    std::cin >> word_2;

    int result_1 = result(length_1,word_1);
    int result_2 = result(length_2,word_2);

    int differnce = abs(result_1-result_2);
    std::cout << differnce << " ";
    if (differnce <10) std::cout  << "Close";
    else if(differnce >=10 && differnce <50) std::cout << "Moderate";
    else std::cout << "Far";
    }