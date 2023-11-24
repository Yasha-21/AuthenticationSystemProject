#include <stdio.h>
#include <string.h>

int main(void)
{
    //Usernames for test
    char TestUsername[] = "user";
    char TestPassword[] = "password123";
    // Variables to store user input
    char InputName[20];
    char InputPassword[20];
    //Printing message and geting user input
    printf("Enter your username: ");
    scanf("%s", InputName);
    printf("Enter your password: ");
    scanf("%s", InputPassword);
    // Comparing user input to test username and password
    if (strcmp(InputName, TestUsername) == 0 && strcmp(InputPassword, TestPassword) == 0)
        printf("Logged in successfully. Welcome, %s!", InputName);
    else
        printf("Incorrect username or password.");
    return 0;
}