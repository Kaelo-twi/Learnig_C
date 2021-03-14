/*Auther: Kaelo Medpupe
 * Purpose: C Program to Print the Words starting with Letter S
 *Date:14/03/2021
 */

#include <stdio.h>
#include <string.h>

char str[100];

void main() {
    int i, j=0, len;

    printf("Enter a string : ");
    scanf("%[^\n]s", str);

    len = strlen(str);

    str[len] = ' ';

    while (j<strlen(str))
    {

        if (str[j] == 's'&&(str[j-1])== ' ')
        {
            for (i = j; i < strlen(str); i++,j++)
            {
                printf("%c", str[j]);
                if (str[i] == ' ')
                {
                    i = strlen(str);
                }
            }

        }else
        {
            j=j+1;
        }

    }
}
