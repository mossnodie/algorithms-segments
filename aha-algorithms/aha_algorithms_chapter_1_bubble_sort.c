#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int * unordered_arr, int length){
    //  提前结束标注
    int flag = 0;
    // 冒泡排序核心算法
    for (int i = 0; i < length - 1; ++i) {
        flag = 0;
        for (int j = 0; j < length - i -1; ++j) {
            if(unordered_arr[j]>unordered_arr[j+1]) {
                flag = 1;
                int temp = unordered_arr[j];
                unordered_arr[j] = unordered_arr[j + 1];
                unordered_arr[j + 1] = temp;
            }
        }
        if(!flag)
            return; //if 若没有交换，则返回
    }
}
//
//int main(){
//
//    int unordered_arr[1] = {1};
//    int length = sizeof(unordered_arr)/ sizeof(*unordered_arr);
//    bubble_sort(unordered_arr,length);
//
//}