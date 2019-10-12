#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
		return 1;
    }

	// this checks whether argv[1] is a all digits or not

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

	// key is changed into integer from string

    int key = atoi(argv[1]);
    key = key % 26;
    printf("key = %i\n", key);

	// input from user 

    string p = get_string("plaintext: ");
    printf("chiphertext: ");

	// a new array so, ascii code doesn't overflow

	for (int i = 0, n = strlen(p), s[n]; i < n; i++)
    {
        s[i] = p[i];
        if (isupper(p[i]))
        {
            s[i] += key;
            if (s[i] > 90)
            {
                s[i] -= 26;
            }
        }
        else if (islower(p[i]))
        {
            s[i] += key;
            if (s[i] > 122)
            {
                s[i] -= 26;
            }
        }
        printf("%c", s[i]);
    }
    printf("\n");
}
