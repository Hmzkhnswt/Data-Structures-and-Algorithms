#include<iostream>
using namespace std;


int main(){
	
	int array[3][4] = {{2,3,4,5},{1,2,3,4},{6,7,8,9}};
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<array[i][j]<<"  ";
		}
	}
	
	int 1darray[100];
	ent =0 ;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			array[ent++] = array[i][j];
		}
	}
	
	
	
	return 0;
}
