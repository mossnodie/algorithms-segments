#include <stdio.h>
#include <stdlib.h>

//  base numbers is small  

int * simple_buket_sort (int * p_number_arr,int length){
	
	// new
	int * res_number_arr = (int)malloc(sizeof(int) * length);
	
	// init 
	for(int i = 0 ;i < length; i++){
		res_number_arr[i] = 0;
	}
	
	// algorithm
	int i = -1;
	while(length>i)
		if(++i < length){
			
			++res_number_arr[p_number_arr[i]];
			
		}
		
	// return 
	return res_number_arr;
	
//	int _number_arr[8] = {8,7,6,5,4,3,2,1};
//	
//	int * _res_arr = simple_buket_sort(_number_arr,8);
//	
//	for(int i = 0 ;i < 8; i++){
//		printf("%d ",_res_arr[i]);
//	}
//	
//	return 0;
	
}


int * bubble_sort(int * p_number_arr,int length){
	
	// new
	int * res_number_arr = (int)malloc(sizeof(int) * length);
	
	// init 
	for(int i = 0 ;i < length; i++){
		res_number_arr[i] = p_number_arr[i];
	}	
	
	int flag = 0;
	for(int i = 0;i < length-1 ; i++){
		flag = 0;
		for(int j = 0 ; j < length - 1 - i ; j++){
			if(res_number_arr[j]>res_number_arr[j+1]){
			
				int t = res_number_arr[j];
				res_number_arr[j] = res_number_arr[j+1];
				res_number_arr[j+1] = t;
				flag = 1; 
				
			}
		}
		if(flag == 0) break; 
	}
	
	return res_number_arr;
	
//	int _number_arr[8] = {8,7,6,5,4,3,2,1};
//	
//	int * _res_arr = bubble_sort(_number_arr,8);
//	
//	for(int i = 0 ;i < 8; i++){
//		printf("%d ",_res_arr[i]);
//	}
//	
//	return 0;
	
}

void quick_sort(int pl,int ph,int * p_number_arr){
	
	int left  = pl;
	int right = ph;
	
	if(left > right){
		return;
	}
	
	int base_number = p_number_arr[left];
	
	while(ph!=pl){
		
		while(p_number_arr[ph] >= base_number && ph>pl){
			--ph;	
		}
		while(p_number_arr[pl] <= base_number && ph>pl){
			++pl;	
		}		
		
		if(ph>pl){
			int t = p_number_arr[ph];
			p_number_arr[ph] = p_number_arr[pl];
			p_number_arr[pl] = t;
		}
		
	}
	
	p_number_arr[left] = p_number_arr[pl];
	p_number_arr[pl] = base_number;
	
	quick_sort(left,pl-1,p_number_arr);
	quick_sort(ph+1,right,p_number_arr);
	
//	int _number_arr[8] = {8,7,6,5,4,3,2,1};
//	
//	quick_sort(0,7,_number_arr);
//	
//	for(int i = 0 ;i < 8; i++){
//		printf("%d ",_number_arr[i]);
//	}
//	
//	return 0;

	
}

int main() {
	
	int _number_arr[8] = {8,7,6,5,4,3,2,1};
	
	quick_sort(0,7,_number_arr);
	
	for(int i = 0 ;i < 8; i++){
		printf("%d ",_number_arr[i]);
	}
	
	return 0;

}
