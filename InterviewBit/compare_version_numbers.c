#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void trim(char *s)
{
    if (s == NULL)
    {
        s = "0";
        return;
    }
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
            break;
        else
        {
            for (int j = i; j < n - 1; j++)
                s[j] = s[j + 1];
            i--;
            n--;
        }
    }
    if (n == 0)
    {
        s[0] = '0';
        s[1] = '\0';
    }
    else
        s[n] = '\0';
}

int compareVersion(char *a, char *b)
{
    int flag=0;
    char *m = strtok_r(a, ".", &a);
    char *n = strtok_r(b, ".", &b);
    trim(m);
    trim(n);
    while (m != NULL && n != NULL)
    {
        printf("%s\t%s\n", m, n);
        if (strlen(m) == strlen(n))
        {
            if (strcmp(m, n) == 0)
                flag = 1;
            else if (strcmp(m, n) > 0)
                return 1;
            else if (strcmp(m, n) < 0)
                return -1;
            else
                flag=0;
        }
        m = strtok_r(a, ".", &a);
        n = strtok_r(b, ".", &b);
        trim(m);
        trim(n);
    }
    while(m!=NULL && n==NULL) 
    {
        if(*(m)!='0' && strlen(m)>=1) {
            return 1;
        }
        m = strtok_r(a, ".", &a);
        trim(m);
    }
    while(n!=NULL && m==NULL) {
        if(*(n)!='0'  && strlen(n)>=1) {
            return -1;
        }
        n = strtok_r(b,".", &b);
        trim(n);
    }
    return 0;
}

int main()
{
    char a[] = "1.0";
    char b[] = "1";
    // trim(a);
    int c = compareVersion(a, b);
    // printf("%s\n%d", a, strlen(a));
    printf("\n%d",c);
    return 0;
}