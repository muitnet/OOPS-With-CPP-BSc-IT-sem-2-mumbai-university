#include<iostream.h>
#include<conio.h>
int find_length(char string[])
{
int len=0,i;
for(i=0; string[i]!='\0';i++)
{
len++;
}
return len;
}
// comparision string
int compare_strings(char string1[],char string2[])
{
int len1,len2,i,count=0;
len1=find_length(string1);
len2=find_length(string2);
if(len1!=len2)
return 1;
for(i=0;i<len1;i++)
{
if(string1[i]==string2[i])
count++;
}
if(count==len1)
return 0;
return 1;
}
//reverse strings
void main()
{
clrscr();
char str[50],string1[20],string2[20];
char rev[50];
int i=0,j=0;
cout<<"Enter any string to be reversed:";
cin>>str;
while(str[i]!='\0')
{
i++;
}
i--;
while(i>=0)
{
rev[j]=str[i];
j++;
i--;
}
rev[j]='\0';
cout<<"Reverse string is:"<<rev;
cout<<"\n Enter two strings:";
cin>>string1>>string2;
if(compare_strings(string1,string2)==0)
{
cout<<"\n They are equal";
}
else
{
cout<<"\n They are not equal";
}
getch();
}
