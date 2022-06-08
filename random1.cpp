#include <iostream>
#include <stdlib.h>//library untuk menggunakan fungsi rand()
#include <time.h> // library untuk time
using namespace std;

int main()

{
int matrix [6][6];
int total;
int random;
for(int i=0; i<10; i++){
	for (int k=0; k<10; k++){
		if (k%5==2){
		cout<<"0";

	 }else{
	 
	 	random=rand()%255;	
		cout<<"[" <<random<<"]";
	 }	
	 	
		
	}
	cout<<endl;
};

}

