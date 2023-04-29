#include <iostream>
#include <stdio.h>
#include <string.h>

void encrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] - key;
    }
}

void decrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] + key;
    }
}
int main() {

    while (true) {
        char password[20];
        printf("\n""Enter the password: ");
        scanf("%s", password);
        printf("Password = %s", password);
        encrypt(password, 0XAED);

        printf("\n""Encrypted value = %s", password);
        decrypt(password, 0XAED);
        printf("\n""Decrypted value = %s", password);

        printf("\n""Enter the decryption: ");
        scanf("%s", password);
        printf("Password = %s", password);
        decrypt(password, 0XAED);
        printf("\n""Decrypted value = %s", password);

        if (password == 0){
        }
    }
    return 0;
}
