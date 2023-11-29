#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// function for login
int login()
{
    char Username[20];
    char Password[20];
    printf( "Enter Username: ");
    scanf("%s", Username);
    printf( "Enter Password: ");
    scanf("%s", Password);
    FILE *file = fopen("data.txt", "r");
    char temp_username[20], temp_password[20];
    if (file != NULL)
    {
        char line[20];
        while (fgets(line, sizeof(line), file)) 
        {
            sscanf(line, "%s %s", temp_username, temp_password);
        }
        fclose(file);
    } 
    else
        printf("Error opening the file.\n");
    if (strcmp(Username, temp_username) == 0 && strcmp(Password, temp_password) == 0)
        return 1;
    else
        return 0;
}
// function for registration
void registration(char Username[], char Password[])
{
    FILE *file = fopen("data.txt", "a");
    if (file != NULL) {
        fputs(Username, file);
        fputs("\n", file);
        fputs(Password, file);
        fputs("\n", file);
        fclose(file);
    } else {
        printf("Error opening the file.\n");
    }
} 

int main(void)
{
    int answer = login();
    if(answer)
        printf("Welcome to the chatbot.\n");
    else
        printf("Invalid username or password.\n");
    return 0;
}