#include <stdio.h>
int main() 
{
    char ch;
    char c[100];
    char s[100];
    scanf("%c", &ch);        
    scanf("%s", c);          
    scanf("\n");    
    scanf("%[^\n]%*c", s); 
    printf("%c\n", ch);
    printf("%s\n", c);
    printf("%s\n", s);
    return 0;
}
