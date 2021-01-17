#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sortstring(char str[]);
int main()
{
	//char str1[]="";
	//int i,n=11,j ;
char newString[10][10]; 
    int i,j,ctr;
	
	int n=1;
	char *ptr ;
	ptr=(char *)malloc(n*sizeof(char));
	for(i=0; ;i++){
		scanf("%c",&ptr[i]);
		if(ptr[i]=='\n')
		break ;
		ptr=(char *)realloc(ptr,++n);
		
	}
	char array[n];
	for(i=0;i<n;i++)
	{
		array[i]=ptr[i];
	}
	 sortstring(array);
   
    return 0;

}
void sortstring(char str[])
{
	int len=strlen(str) , i, words=1 ;
	
	for(i=0;i<len;i++)
		if(str[i]==' ')
			words++;
			
	int j , k=0 , word_len[words] , temp; 
	char temp1 , array[words][20];
	
	for(i=0;i<words;i++,k++)
		for(word_len[i]=0,j=0;j<20;j++,k++,word_len[i]++)
			if(str[k]==' ' || k==len)
				break;
			else
				array[i][j]=str[k];
	
	for(i=0;i<words;i++)
		for(j=0;j<words;j++)
			if (word_len[i]>word_len[j])
			{
				temp=word_len[j];
				word_len[j]=word_len[i];
				word_len[i]=temp;
				for(k=0;k<20;k++)
				{
					temp1=array[i][k];
					array[i][k]=array[j][k];
					array[j][k]=temp1;
				}
			}
			
	for(i=0;i<words;i++)
	{
		for(j=0;j<word_len[i];j++)
			printf("%c" , array[i][j]);
		printf("\n");
	}
}