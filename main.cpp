#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main() 
{
	char src[100];
	char dest[65536];


	dest[0] = 0;//??
	
	
	while (true) 
	{
		cout << "please type!" << endl;
		gets_s(src, sizeof(src) - 1);
		//ha �rok nem 0-la ker�l az src-be
		//ha enter-t �t�k akkor nulla ker�l az src-be
		//az enter-t vagyis a null�t fogom tesztelni!
		//ezek szerint a gets_s() csin�lja, hogy null�t rak az src-be ha entert �t�k
		if (src[0]==0)
		{
			break;
		}
		//ezut�n mindezt tegy�k bele dest-be + egy sz�netet
		strcat(dest, src);
		strcat(dest, " ");
	}


	//most �rjuk ki a c�lt
	printf("%s\n", dest);
	//szavak elej�t tartalmaz� pointer t�mb

	char* szavak_elejet_tartalmazo_pointer_tomb[1000];
	char* p1 = &dest[0];

	int i = 0;
	bool flag = true;
	while (*p1 != 0)
	{
		if (*p1 == ' ')
		{
			flag = true;
			*p1 = 0;
		}
		else if (flag)
		{
			szavak_elejet_tartalmazo_pointer_tomb[i] = p1;
			flag = false;
			i++;
		}
		else
		{
			flag = false;
		}
		p1++;
	}
	for (int j = 0; j < i; j++)
	{
		printf("%s\n", szavak_elejet_tartalmazo_pointer_tomb[j]);
	}
	system("pause");
	return 0;
}



