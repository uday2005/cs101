#include <simplecpp>

main_program {
  cin >> noskipws; //do not skip white spaces
  char c;

  for (cin >> c; c != '\n' ; cin >> c) {
    if (c >= 'a' && c <= 'z')       c = c - 'a' + 'A';
    else if (c >= 'A' && c <= 'Z')  c = c - 'A' + 'a';
    cout << c;
  }
}

//so  inside the for loop first condition is initiation and 
//second condtion is condition and third condition is update.


#include <simplecpp>

main_program {
  cin >> noskipws; //do not skip white spaces
  char c;

  const char casebit = 32; // casebit=00100000 switches the case
  for (cin >> c; c != '\n' ; cin >> c) {
    if ((c|casebit) >= 'a' && (c|casebit) <= 'z') // by taking or with casebit if we input the capital letter it will take 
    // input and convert it into small letters
        c ^= casebit ; // toggle the case bit
    cout << c;
  } 

}

// Uppercase letters (A-Z): ASCII values 65 ('A') to 90 ('Z').
// Lowercase letters (a-z): ASCII values 97 ('a') to 122 ('z').
// Difference between uppercase and lowercase: 97 - 65 = 32 → Exactly one bit difference (bit 00100000 in binary).