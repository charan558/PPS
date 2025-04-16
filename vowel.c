#include<stdio.h>
void main()
{
	char c[100];
	int i,l,t=0,v=0;
	l=strlen(c);
	printf("enter the character\n");
	scanf("%s",&c);
	printf("\ncharacter=%c",c);
	for(i=0;i<l;i++)
	{
		if(c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		{
			v++;	
		printf("\n%s is a vowel",c[i]);
		}
		//else
		//	printf("\n%c is a not vowel",c);
		else
		{
			t++;
			printf("%s",c[i]);
		}
	}

}
