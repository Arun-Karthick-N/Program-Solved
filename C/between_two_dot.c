#include <stdio.h>
int main()
{   char c[100];int a=0,b=0,i=0,j=0,k=0;
    printf("Enter the string:");
    scanf("%[^\n]s",c);
    printf("Ente the index:");
    scanf("%d",&a);

    for(i=0;c[i]!='\0';i++){
        if(c[i]==' ') 
            b++;
        if(b==a){
            for(k=i;c[k]!='.';k--);
            for(j=k+1;c[j]!='.';j++){
                if(c[j]=='.') break;
                printf("%c",c[j]);
            }
        }
        if(c[j]=='.') break;
    }
    return 0;
}