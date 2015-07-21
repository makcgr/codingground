#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello, World!\n");
    char *str1 = "hello", str2[100];
    strlen(str1);              //get the length up to but excluding the ’\0’
    strncpy(str2, str1, 100); //copy at most 100 bytes from str1 to str2
    strncat(str2, str1, 100); //append at most 100 bytes from str1 onto str2
    strcmp(str1, str2);       //are str1 and str2 different? zero=no, nonzero=yes
    snprintf(str2,  100, "str1 says: %s", str1); //write to a string, as above.
    
    return 0;
}

