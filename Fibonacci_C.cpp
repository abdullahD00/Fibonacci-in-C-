#include <iostream>



int main() {

int ilk,ikinci,ucuncu,i;
ilk=1;
ikinci=1;
for(i=0;i<=6;i++)
{
	ucuncu=ilk+ikinci;
	ilk=ikinci;
	ikinci=ucuncu;
	printf(" %d ",ucuncu);
}


	return 0;
}
