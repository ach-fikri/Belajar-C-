#include <iostream>
#include <stdlib.h>//library untuk menggunakan fungsi rand()
#include <time.h> // library untuk time
using namespace std;

int main()
{
int A[9];
int random;
srand(time(NULL));// untuk mengubah nilai rand di setiap kali kita running program


for(int i=0; i<9; i++){
	for (int k=0; k<9; k++){
		random=rand()%100;	
		cout<<"[" <<random<<"]";
	}
	cout<<endl;
};

}


