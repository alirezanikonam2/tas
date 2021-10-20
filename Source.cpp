#include<iostream>
#include<random>
#include<time.h>
using namespace std;
int main(){
	int c = 1,a=0;
	cout << "hellow welcom to this program this program is tas bazy if you bring six you got gift  " << endl;
	while (c == 1){
		cout << "if you want to roll dice enter 1  else enter 0 for exit"<<endl;
		cin >> c;
		if (c == 1){
			 srand(time(0));
			 a= (rand()%6)+1;
			 cout << a<<endl;
			 if (a == 6){
				 
				 a = (rand() % 6) + 1;
				 cout << a<<endl;

			 }
		}

	}





	system("pause");
	return 0;
}