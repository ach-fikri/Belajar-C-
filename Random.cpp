#include <iostream>
#include <stdlib.h>//library untuk menggunakan fungsi rand()
#include <time.h> // library untuk time
using namespace std;

int main()
{
int random;
for(int i=0; i<73; i++){
		if (i%18==4){
		cout<<"OKE";}
	for (int k=0; k<73; k++){
//	if (k%19==4){
//		cout<<"**";
//	}	
		random=rand()%255;	
		cout<<"[" <<random<<"]";
	}
	cout<<endl;
};

}

