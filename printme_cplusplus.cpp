#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    freopen(__FILE__, "r", stdin);
	
	//Hey, I'm going to print this source code file as output
	
	char c;
	while((c = getchar()) != EOF)
	{
		cout<<c;		
	}
	fclose(stdin);

    
    return 0;
}