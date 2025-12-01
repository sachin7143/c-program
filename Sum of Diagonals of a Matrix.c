#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fptr;
    char data[100];
    fptr = fopen("demo_file.txt", "w");
    if (fptr == NULL) 
    {
        printf("File could not be opened\n");
        return 1;
    }
    printf("Enter some text: ");
    gets(data);
    fprintf(fptr, "%s", data);
    fclose(fptr);
    fptr = fopen("demo_file.txt", "r");
    if (fptr == NULL) {
        printf("File could not be opened\n");
        return 1;
    }
    printf("\nData read from file:\n");
    while (fgets(data, 100, fptr) != NULL)
    {
        printf("%s", data);
    }
    fclose(fptr);
    return 0;
}
