#include<cstdio>
 
int main()
{
        int caps, page, a, b;
        scanf("%i", &caps);
        int arr[caps];
        for (int i = 0; i < caps; i++){
                scanf("%i %i", &a, &b);
                arr[i] = b;
        }
        scanf("%i", &page);
 
        for (int j = 0; j < caps; j++){
                if (page <= arr[j]){
                        printf("%i\n", caps-j);
                        j = j + caps;
                }
        }
 
        return 0;
}
