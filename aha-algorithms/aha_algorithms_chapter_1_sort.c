#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

//  简单桶排序 算法思想 : 开辟一个足够容纳所有元素的空间,在空间里安置桶

int *simple_buket_sort(const int *p_number_arr, int length, int max_elem)
{
	// 错误处理
	if (max_elem < 0)
		return NULL;
	// 开辟空间
	int *res_number_arr = (int *)malloc(sizeof(int) * (max_elem + 1));
	// 初始化
	memset(res_number_arr, 0, sizeof(int) * (max_elem + 1));
	// 主要算法
	for (int i = 0; i < length && p_number_arr[i] <= max_elem; ++i)
		++res_number_arr[p_number_arr[i]];
	return res_number_arr;
}
// int main()
// {
// 	int _number_arr[4] = {0,0,0,0}; // 待排序数组
// 	int _length_number_arr = sizeof(_number_arr) / sizeof(*_number_arr); // 长度
// 	int _max_value = 0; // 最大值
// 	int *_res_arr = simple_buket_sort(_number_arr, _length_number_arr, _max_value); 
// 	for (int i = 0; i < _length_number_arr; i++)
// 		printf("%d ", _res_arr[i]); // for 打印结果
// 	return 0;
// }
