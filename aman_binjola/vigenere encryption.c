#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int shift(char c);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    
	// checking if user input is all alphabets
	
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]))
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
	
	int l = strlen(argv[1]);
    
    string p = get_string("plaintext: ");
    printf("chiphertext: ");
	
	// a new array so, ascii code doesn't overflow
	
	for (int i = 0, n = strlen(p), s[n]; i < n; i++)
    {
		s[i] = p[i];
		if (isupper(p[i]))
		{
			s[i] += shift(argv[1][i%l]);
			if (s[i] > 90)
			{
				s[i] -= 26;
			}
		}
		else if (islower(p[i]))
		{
			s[i] += shift(argv[1][i%l]);
			if (s[i] > 122)
			{
				s[i] -= 26;
			}
		}
		printf("%c", s[i]);
        
    }
    printf("\n");
}

int shift(char c)
{
    if (isupper(c))
    {
        return c - 65;
    }
    else if (islower(c))
    {
        return c - 97;
    }
    else
    {
        return c;
    }
}
