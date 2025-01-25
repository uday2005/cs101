#include <iostream>
using namespace std;
#include <string_view>
// Write the function getQuantityPhrase() here
std::string_view getQuantityPhrase(int n){
    if (n<0) return string("Negative");
    else if (n==0) return string("no");
    else if (n==1) return string("a single");
    else if (n==1) return string("a couple of");
    else if (n==2) return string("a few");
    else return string("many");

}

std::string getApplesPluralized (int m){
    return (m==1) ? string("apple"):string("apples");
}

// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}

