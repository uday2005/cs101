#include <simplecpp>

// Function to draw an equilateral triangle
void drawTriangle(double len) {
    repeat(3) {
        forward(len);
        left(120); // Angle for equilateral triangle
    }
}

// Recursive function to draw Sierpiński Triangle
void koch_equilateral(double len, int level) {
    if (level == 0) {
        drawTriangle(len);  // Base case: Draw a single triangle
        return;
    }

    // Draw the three smaller triangles recursively
    koch_equilateral(len / 2, level - 1); // Bottom-left triangle

    // Move to bottom-right corner
    forward(len / 2);
    koch_equilateral(len / 2, level - 1);

    // Move back to bottom-left corner
    forward(-len / 2);

    // Move to top corner
    left(60);
    forward(len / 2);
    right(60);
    koch_equilateral(len / 2, level - 1);

    // Reset position to bottom-left corner
    penUp();
    right(60);
    forward(-len / 2);
    left(60);
    penDown();
}

main_program {
    const double width = 800, height = 800, margin = 10;
    turtleSim("Sierpiński Triangle", width + 2 * margin, height + 2 * margin);

    penUp();
    forward(-200);          // Center horizontally
    left(90); forward(-200); right(90); // Center vertically
    penDown();

    int recursion_level = 2;   // Adjust recursion depth for detail
    double side_length = 100;  // Length of the base triangle

        koch_equilateral(side_length, recursion_level);             // Outer triangle orientation

    hide();
    getClick();
}
