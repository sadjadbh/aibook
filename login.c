#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    
    // Hardcoded credentials for demonstration
    char correctUsername[] = "admin";
    char correctPassword[] = "12345";

    printf("=== System Login ===\n");

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // strcmp returns 0 if the strings are an exact match
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("\nLogin Successful! Welcome, %s.\n", username);
    } else {
        printf("\nLogin Failed. Invalid username or password.\n");
    }

    return 0;
}
