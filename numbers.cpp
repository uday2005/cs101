#include <simplecpp>

main_program{
	double x = 22.0/7;
	double y = 22/7;
	double z = 6.022E23 + 1 - 6.022E23;
	double m = 6.022E23 - 6.022E23 +1;

	cout << x  << " " << y << " " << z  << " " << m ; 

}

main_program{
    int x = 100 * 99 * 98 * 97 * 96 * 95 / (1 * 2 * 3 * 4 * 5 * 6);
    int y = 100 / 1 * 99 / 2 * 98 / 3 * 97 / 4 * 96 / 5 * 95 / 6;
    int z = 100 / 6 * 99 / 5 * 98 / 4 * 97 / 3 * 96 / 2 * 95 / 1;
    int u = 100.0 * 99 * 98 * 97 * 96 * 95 / (1 * 2 * 3 * 4 * 5 * 6);
    int v = 100.0 / 1 * 99 / 2 * 98 / 3 * 97 / 4 * 96 / 5 * 95 / 6;
    int w = 100.0 / 6 * 99 / 5 * 98 / 4 * 97 / 3 * 96 / 2 * 95 / 1;

    cout << x << " " << y << " " << z << endl;
    cout << u << " " << v << " " << w << endl;
}

// x: Incorrect due to integer overflow.
// y & z: Incorrect due to integer division truncation.
// u: Nearly correct. The floating-point multiplication avoids overflow, but the final integer division might introduce a small rounding error (in this case, it didn't).
// v & w: Incorrect due to integer division truncation.


// float f1, f2, centigrade = 100;
// f1 = centigrade * 9 / 5 + 32; 
// f1 = centigrade * 9 / 5 + 32;:
// centigrade * 9: This is 100 * 9 = 900. Because centigrade is an integer, the multiplication is done using integer arithmetic. The result is an integer 900.
// 900 / 5: This is 900 / 5 = 180. Since both 900 and 5 are integers, integer division is performed. The result is the integer 180.
// 180 + 32: This is 180 + 32 = 212. The addition is performed using integer arithmetic.
// f1 = 212: The integer value 212 is assigned to the floating-point variable f1. C++ performs an implicit conversion from integer to float. So, f1 stores the floating-point value 212.0.
// Key Point: The reason f1 is calculated correctly (212 degrees Fahrenheit) is because the order of operations happens to work out in this specific case.  The multiplication is performed before the division, so we get the correct intermediate result.

// Why f2 is Incorrect (and the difference):

// In contrast, f2 is calculated as:

// C++

// f2 = 32 + 9 / 5 * centigrade;
// Here, integer division 9 / 5 is performed first, resulting in 1.  Then, 1 * centigrade is 1 * 100 = 100.  Finally, 32 + 100 = 132.

// In summary:

// f1 is calculated correctly due to the order of operations: multiplication before division.
// f2 is incorrect because integer division 9 / 5 is performed before the multiplication with centigrade, leading to a truncated intermediate result.


#include <iostream>

using namespace std;

int main() {
  int a, d, n;

  // Get input from the user
  cout << "Enter the first term (a): ";
  cin >> a;
  cout << "Enter the common difference (d): ";
  cin >> d;
  cout << "Enter the number of terms (n): ";
  cin >> n;

  // Print the arithmetic sequence
  cout << "The arithmetic sequence is: ";
  for (int i = 0; i < n; i++) {
    int term = a + i * d;
    cout << term;
    if (i < n - 1) {
      cout << ", "; // Add comma and space unless it's the last term
    }
  }
  cout << endl;

  return 0;
}

#include <simplecpp>

main_program{
    int a ,r, n;
    cin >> a >> r >> n;
int term  = a;

    for (int i=0;i<n;i++)
    {
        
        cout << term;

    if (i<n-1){
        cout << " , ";
    }
     term  *= r;
    }
}

#include <simplecpp>

main_program {
    turtleSim();
    int side , nsquares ,q;
    cin >> side >> nsquares >> q;

    repeat (nsquares){
    repeat(4){
        forward(side);
        right(90);

    }
    forward(side/2);
    side += q;
    getClick();
}
}


// concentric squares 
#include <simplecpp>

main_program {
    turtleSim();

    int side, nsquares, q;
    cin >> side >> nsquares >> q;

    // Draw nsquares concentric squares
    repeat(nsquares) {
    

        // Draw the square
        repeat(4) {
            forward(side);
            right(90);
        }

        // Move turtle back to the center for the next square
        penUp();
        wait(1);
        forward(-q);
        wait(1);
        left(90);
        forward(q);
        right(90);

        penDown();

        // Increase side length for the next square
        side += 2 * q;

        // Wait for a click before drawing the next square
        getClick();
    }
}

void getsquares(){
    int num = 11;
    while(num >= 11 && num <= 99){
        int square = 1;
        square *= num * num ;
        cout << square << " ";
        num++;
    }
}

#include <simplecpp>

// main_program{
//     getsquares();
// }

// main_program{
//     turtleSim();
//     int i=0;

//     repeat(30){
//         left(90);
//         forward(200*sine(i*10));
//         forward(-200*sine(i*10));
//         right(90);
//         forward(10);
//         i++;
//     }
//     wait(5);
// }

double binarysqrt(int n){
    double ephsilon = 0.000001;
    double high = n;
    double low = 0;

    while ((high - low) >= ephsilon){
        double mid = (high + low) /2;

        if (mid * mid > n) high = mid;
        else low = mid;
    }
    return (high + low)/2;
}

main_program{
    int x1,x2,y1,y2;
    cin >>x1 >> y1 >> x2 >> y2;

    double distance;

    distance = (x2-x1)*(x2-x1) + (y2-y1)* (y2-y1);
    distance = binarysqrt(distance);

    cout << distance ;
}