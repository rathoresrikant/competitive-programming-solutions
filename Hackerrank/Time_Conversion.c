#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the timeConversion function below.
 */

/*
 * Please either make the string static or allocate on the heap. For example,
 * static char str[] = "hello world";
 * return str;
 *
 * OR
 *
 * char* str = "hello world";
 * return str;
 *
 */
char* timeConversion(char* s) {
    /*
     * Write your code here.
     */
    static char b[10];
    int i;
    for(i=0;i<8;i++)
    {
        b[i]=s[i];
    }
    if(s[0]=='1' && s[1]=='2' && s[8]=='A')
            {
                b[0]='0';
                b[1]='0';
                
            }
    else if(s[8]=='A')
            {
                
            }
    else if(s[0]=='1' && s[1]=='2' && s[8]=='P')
    {
        
    }
    else if(s[8]=='P')
    {
        if(s[0]=='0' && s[1]<='7')
            {
                b[0]='1';
                b[1]+=2;
                
            }
        else if(s[0]=='0' && s[1]>'7' && s[1]<='9')
        {
            b[0]='2';
                b[1]-=8;
                
        }
        else if(s[0]=='1')
        {
            b[0]='2';
                b[1]+=2;
                
        }
    }

return b;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
