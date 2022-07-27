#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int indek[14];
   
    for(int i=1; i<=14; i++){
    int random=rand()%50;
    if(i%2==0){
    indek[i]=0;
}else{
indek[i]=random;
}cout<<" "<<indek[i]<<" ";
}cout<<endl;}


