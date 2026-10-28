#include <stdio.h>

int main() {
    int score; // Uninitialized local variable (contains garbage value)
    
    // Bug: Reading 'score' before assigning it a value
    printf("Your score is: %d\n", score);
    
    return 0;
}
