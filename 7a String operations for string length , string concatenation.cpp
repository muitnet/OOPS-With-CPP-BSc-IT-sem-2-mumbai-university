#include<iostream.h>
#include<conio.h>
int find_length(char string[])
{
int len=0,i;
for(i=0;string[i]!='\0';i++)
{
len++;
}
return len;
}
void join_strings(char string1[],char string2[])
{
int i,len1,len2;
len1=find_length(string1);
len2=find_length(string2);
for(i=len1;i<=len1+len2;i++)
{
string1[i]=string2[i-len1];
}
string1[i]='\0';
}
int main()
{
clrscr();
char string1[20],string2[20];
int choice;
cout<<"\n1.Find length \n2.concatenate \n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n Enter the string:";
cin>>string1;
cout<<"\n The length of string is:"<<find_length(string1);
break;
case 2:
cout<<"\n Enter two strings:";
cin>>string1>>string2;
join_strings(string1,string2);
cout<<"\n The concatenated string is:"<<string1;
break;
}
return 0;
