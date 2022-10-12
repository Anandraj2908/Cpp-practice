#include<stdio.h>
#include<string.h>
void main()
{
    char ch[] = "sidhsdhead";
    
    char strg[] = " ";
    char c[]=" ";
    for(int i = 0; ch[i] != '\0'; i++ )
    {
        if(ch[i]!= 'a' && ch[i]!= 'e' && ch[i]!= 'i' && ch[i]!= 'o' && ch[i]!= 'u' ){
            c[0]=ch[i];
            strcat(strg,c);
        }
        
    }
    puts(strg);
    
}