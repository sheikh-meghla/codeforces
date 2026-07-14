#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d",&n);
    char ch[200];

    for (int i = 0; i < n; i++)
    {
        scanf("%s",ch);
        int len = strlen(ch);

        if (len <= 10)
        {
            printf("%s",ch);
        }
        else if (len > 10)
        {
            printf("%s %d %s\n",ch[0],len-2,ch[len]);
            
        }
        
    }
    
    
    return 0;
}