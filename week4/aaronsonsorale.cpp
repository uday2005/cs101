#include <simplecpp>

main_program {
    char key, next_key = 0;
    char last1 = 0, last2 = 0, last3 = 0;  // Storing the last three keys
    
    int count_jjj = 0, count_jjk = 0, count_jkj = 0, count_jkk = 0;
    int count_kjj = 0, count_kjk = 0, count_kkj = 0, count_kkk = 0;

    int num_trials = 0, correct_guesses = 0;

    cout << "Type 'j' or 'k'. Type 'x' to exit." << endl;

    while (true) {
        cin >> key;

        if(next_key == 'j' || next_key == 'k') { // Only if next_key is set,
                                                 // compute accuracy
            if(key == next_key)
              correct_guesses+=1;
        }
        
        if (key == 'x') {
            break;  // Exit the loop if the user types 'x'
        }
        
        // Ensure the key is valid
        if (key != 'j' && key != 'k') {
            cout << "Please only type 'j' or 'k'." << endl;
            continue;
        }

        // Shift the values of the last 3 keys to make space for the new one
        last3 = last2;
        last2 = last1;
        last1 = key;

        // After 3 keys have been entered, start making predictions
        if (last1 && last2 && last3) {
            
           // Maintain 3-gram counts
            if (last3 == 'j' && last2 == 'j' && last1 == 'j') {
                count_jjj++;
            } else if (last3 == 'j' && last2 == 'j' && last1 == 'k') {
                count_jjk++;
            } else if (last3 == 'j' && last2 == 'k' && last1 == 'j') {
                count_jkj++;
            } else if (last3 == 'j' && last2 == 'k' && last1 == 'k') {
                count_jkk++;
            } else if (last3 == 'k' && last2 == 'j' && last1 == 'j') {
                count_kjj++;
            } else if (last3 == 'k' && last2 == 'j' && last1 == 'k') {
                count_kjk++;
            } else if (last3 == 'k' && last2 == 'k' && last1 == 'j') {
                count_kkj++;
            } else if (last3 == 'k' && last2 == 'k' && last1 == 'k') {
                count_kkk++;
            }

            // Based on 3-gram counts derived from 2-gram histories,
            // make a next letter prediction
            if(last2 == 'j' && last1 == 'j') {
              if(count_jjj > count_jjk) 
                next_key = 'j';
              else
                next_key = 'k';
            } else if(last2 == 'j' && last1 == 'k') {
              if(count_jkj > count_jkk) 
                next_key = 'j';
              else
                next_key = 'k';
            } else if(last2 == 'k' && last1 == 'j') {
              if(count_kjj > count_kjk) 
                next_key = 'j';
              else
                next_key = 'k';
            } else {
              if(count_kkj > count_kkk) 
                next_key = 'j';
              else
                next_key = 'k';
            }

            num_trials+=1;
        }
    }

    cout << "*****************************************************\n";
    cout << " PREDICTION ACCURACY: " << correct_guesses << " out of " << num_trials << " trials are correct" << endl;
    cout << "*****************************************************\n";
}
