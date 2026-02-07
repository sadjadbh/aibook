#include <stdio.h>

typedef struct {
    int id;
    int is_logged_in;
} User;

void logout(User *u) {
    u->is_logged_in = 0; // Set flag to false
    printf("User %d logged out.\n", u->id);
}

int main() {
    User currentUser = {101, 1}; // User is logged in

    printf("Login status: %d\n", currentUser.is_logged_in);
    
    logout(&currentUser);
    
    printf("Login status after logout: %d\n", currentUser.is_logged_in);
    return 0;
}
