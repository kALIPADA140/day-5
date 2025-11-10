#include<stdio.h>
int main(){
	char x;
	scanf("%c",&x);
	switch(x)
	{
		case'a':
			case'e':
				case'i':
					case'o':
						case'u':
							printf("%c is a vowel:\n",x);
							break;
							default:printf("%c is a consonant:\n",x);
							break;
	}
	return 0;
}