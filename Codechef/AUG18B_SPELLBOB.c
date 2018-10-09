#include <stdio.h>

int compare(char *a, char *b, char *c){
    if((a[0]==b[0])||(a[0]==c[0])){
        if((a[1]==b[1])||(a[1]==c[1])){
            if((a[2]==b[2])||(a[2]==c[2])){
                return 1;
            }
        }
    }
    
    return 0;
}

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    char f[4];
	    char b[4];
	    scanf("%s",f);
	    scanf("%s",b);
	    //case 1 search o b b
	    //case 2 search b b o
	    //case 3 search b o b
	    //if any return 1 skip the rest print yes
	    //if none return 1 print no
	    char *str1="obb";
	    char *str2="bbo";
	    char *str3="bob";
	    
	    if(compare(str1, f, b) || compare(str2, f, b) || compare(str3, f, b)){
	        printf("yes\n");
	    }else{
	        printf("no\n");
	    }
	    
	}
	
	return 0;
}
