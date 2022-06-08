#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int random;
    int a = 24;
    int kosong=0;
    for(int i=0; i<a; i++){
    	for(int j=0; j<a; j++){
    		random = rand()%255;
    		if((i%2==0)&&(j==0)){
    			cout<<"0";
			}else if((i%2==1)&&(j== a-1)){
				cout<<"0";
			}else{
				cout << " " << random<< " ";
			}
		}
		cout<< endl;
	}
	return 0;
}
