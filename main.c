#include <stdio.h>
#include <string.h>
// function for login
int login(char Username[], char Password[])
{
    // declare variables for test
    char R_username[] = "admin";
    char R_password[] = "admin";
    // comparing user input with test
    if(strcmp(Username, R_username) == 0 && strcmp(Password, R_password) == 0)
        return 1; // successfull login 
    else
        return 0; // incorrect login
}
int main(void)
{
    // variables to store user input
    char InputName[20];
    char InputPassword[20];
    // printing message and geting user input
    printf("Enter your username: ");
    scanf("%s", InputName);
    printf("Enter your password: ");
    scanf("%s", InputPassword);
    // calling function to check login
    int LogginStatus = login(InputName, InputPassword);

    // if login successfull print welcome message
    if(LogginStatus)
        printf("Login successfull. Welcome %s\n", InputName);
    // if login unsuccessfull print error message
    else
        printf("Error: Incorrect username or password\n");
    return 0;
}