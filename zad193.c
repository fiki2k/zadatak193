/*  Program treba obrisati samoglasnike iz stringa.  */

#include <stdio.h>
#include <string.h>

int samoglasnik(char);

int main()
{
        char s[100], t[100];
        int i, j = 0;

        printf("Unesi neki string : ");
        gets(s);

        for(i = 0; s[i] != '\0'; i++) {
                if(samoglasnik(s[i]) == 0) {       // nije samoglasnik.
                        t[j] = s[i];
                        j++;
                }
        }

        t[j] = '\0';

        strcpy(s, t);    // mijenjamo pocetni string

        printf("\nString nakon sto smo obrisali samoglasnike je : [ %s ]\n", s);

        return 0;
}


int samoglasnik(char c)
{
        switch(c) {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                return 1;
                default:
                return 0;
        }
}
