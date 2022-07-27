#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
	int s,b;
	
	for (b=1; b<=25; b++){
		for (s=1; s<=25; s++){
			if(b==13 || s==13){
				cout<<setw(5)<<"";
			}else{
				if(s%2!=0){
					cout<<setw(7)<<"0";
				}else{
					cout<<setw(7)<<rand()%255<<"";
				}
			}
		}
		cout<<endl;
	}
}
