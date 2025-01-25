#include <simplecpp>

main_program {
  int left = 0, right = 100, mid = -1, num, it = 1;
  char response;

  cout << "Think of a number between 0 and 100\n";
  cin >> num;

  while(left <= right) {
    mid = (right + left)/2; 

    cout << "Is your number " << mid <<"? Enter y (for yes), h (for higher) and l (for lower)\n";
    cin >> response;

    if(response == 'y') {
      cout << "Found it in " << it << " tries. You thought of the number " << mid << "!" << endl; 
      break;
    }
    else if(response == 'h') {
      cout << "Your number is higher than " << mid << endl;
      left = mid + 1;
    } 
    else if(response == 'l') { 
      cout << "Your number is lower than " << mid << endl;
      right = mid - 1;
    }
    else
    {
      cout << "Response should be one of y OR h OR l\n";
      continue;
    }
    it+=1;
  }
}
