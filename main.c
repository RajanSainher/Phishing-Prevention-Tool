#include<stdio.h>
#include<string.h>
//global variables
char txt[100],pat[100];
int M ,N ,lps[100],j=0,i=0;
char str[100000], ch[100];


int compare()
{
        FILE *f;
        int line_num = 1;
        int find_result = 0;
        char temp[512];//temp contains file string
    printf("Enter the link \n");
    char ch[100]; //ch is link enterd
    scanf("%s",ch);
        int i;
        if((f = fopen("text_file.txt", "r")) == NULL)
        {
                return(-1);
        }
        while(fgets(temp, 512, f) != NULL) {
                if((strstr(temp, ch)) != NULL) {
                         find_result++;
                }
                line_num++;
        }
        if(f)
        {
                fclose(f);
        }
        if(find_result == 0) {
        {//for ascii value comparison

int i=0,count=0;
int n=strlen(ch); //here ch is link


for(i=0;i<n;i++)
{
if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='0' && ch[i]<='9')||ch[i]=='_'||ch[i]=='!'||ch[i]=='@'||ch[i]=='#'||ch[i]=='$'||ch[i]=='%'||ch[i]=='^'||ch[i]=='&'||ch[i]=='*'||ch[i]=='('||ch[i]==')'||ch[i]=='~'||ch[i]=='`'||ch[i]=='-'||ch[i]=='='||ch[i]=='+'||ch[i]=='{'||ch[i]=='['||ch[i]==']'||ch[i]=='}'||ch[i]==']'||ch[i]==';'||ch[i]==':'||ch[i]=='\"'||ch[i]=='\''||ch[i]==','||ch[i]=='<'||ch[i]=='>'||ch[i]=='.'||ch[i]=='/')
{
continue;
}
else
{
count++;
}
}
if (count==0)
printf("This link has valid characters but may be a phihsing link");
else
printf("This is phishing link");
}
               
        }
        else
        {
               printf("Mtached, found in file");
        }
return 0;
}


//function for email

int email_link(char* str, char* ch)
{
   //str is copied content
   //ch is suspicious link

   int i, j=0, count = 0;
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch[j] == str[i])
           ++count;
   }

   printf("Count of link is  = %d \n", count);
   if(count>2)
   {
    printf("It might be a phishing mail\n");
   }
   else
   {
    printf("It is a neutral mail with very low chances of phishing\n");
   }

   return 0;
}

