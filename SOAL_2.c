#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void evaluate_strings(const char *d1, const char *d2)
{
    if (strcmp(d1, d2) == 0)
    {
        printf("IDENTIK\n");
    }
    else if (strlen(d1) == strlen(d2))
    {
        printf("MIRIP\n");
    }
    
    if (strlen(d1) != strlen(d2)) {
        printf("BERBEDA\n");
        return;
    }
}

int main(void)
{
    char d1[MAX_LENGTH + 1];
    char d2[MAX_LENGTH + 1];
    
    
    fgets(d1, sizeof(d1), stdin);
    d1[strcspn(d1, "\n")] = '\0';
    
    
    fgets(d2, sizeof(d2), stdin);
    d2[strcspn(d2, "\n")] = '\0';
    
    evaluate_strings(d1, d2);
    
    return 0;
}