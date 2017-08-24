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
		//ha írok nem 0-la kerül az src-be
		//ha enter-t ütök akkor nulla kerül az src-be
		//az enter-t vagyis a nullát fogom tesztelni!
		//ezek szerint a gets_s() csinálja, hogy nullát rak az src-be ha entert ütök
		if (src[0]==0)
		{
			break;
		}
		//ezután mindezt tegyük bele dest-be + egy szünetet
		strcat(dest, src);
		strcat(dest, " ");
	}


	//most írjuk ki a célt
	printf("%s\n", dest);
	//szavak elejét tartalmazó pointer tömb

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



