#include <stdio.h>
#include <stdlib.h>

//  base numbers is small  

int * sort(int * p_number_arr,int length){
	
	// new
	int * res_number_arr = (int)malloc(sizeof(int) * length);
	
	for(int i = 0 ;i < length; i++){
		res_number_arr[i] = 0;
	}
	
	int i = -1;
	while(length>i)
		if(p_number_arr[++i] <= 10)
			++res_number_arr[p_number_arr[i]];
	
	return res_number_arr;
	
}


int main(int argc, char *argv[]) {
	
	int length = 9;
	int _number_arr[9] = {9,8,7,6,5,4,3,2,1};
	
	int * _res_arr = sort(_number_arr,9);
	
	for(int i = 0 ;i < 10; i++){
		printf("%d ",_res_arr[i]);
	}
	
	return 0;
}
