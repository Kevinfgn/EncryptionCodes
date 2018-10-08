#include <iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main() {
    setlocale(LC_CTYPE, "Spanish");
    char alfabeto[100]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char cadena[100];
    int longitudcadena,i,j;
    printf("DIGITE TEXTO A CIFRAR: ");
    scanf("%s", &cadena);
    system("PAUSE");
    longitudcadena=(sizeof(&cadena));

    char cadenacifrada[longitudcadena];

    for(i=0;i<(longitudcadena);i++)
    {
        cadena[i]=toupper(cadena[i]);
    }


    for (i=0;i<(longitudcadena);i++)
    {
        for (j=0;j<26;j++)
        {
            if (cadena[i]==alfabeto[j])
            {
                if (cadena[i]!='\0')
                {
                    cadenacifrada[i]=(alfabeto[j+3]);
                }

            }
        }
    }

    printf("EL TEXTO ORIGINAL ES: %s\n", cadena);
    for(i=0;i<(longitudcadena);i++)
    {
        printf("%c\n", cadenacifrada[i]);
    }

    system("PAUSE");
}