#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	char res;
	int i=1;
	while(i==1){
		cout<<"eres un bachaco?"<<endl;
		cin>>res;
		if (res!='y')
		{
			i=0;
		}
		system("cls");
		
	}

	return 0;
}

