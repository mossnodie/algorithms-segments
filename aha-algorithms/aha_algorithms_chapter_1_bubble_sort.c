#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int * unordered_arr, int length){
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i -1; ++j) {
            if(unordered_arr[j]>unordered_arr[j+1]) {
                int temp = unordered_arr[j];
                unordered_arr[j] = unordered_arr[j + 1];
                unordered_arr[j + 1] = temp;
            }
        }

    }
}

int main(){

    // 输入缓冲区
    char * input_buffer = (char *)malloc(sizeof(char) * 20);

    scanf("%s",input_buffer);

    int length = atoi(input_buffer);

    int * unordered_arr = (int*)malloc(sizeof(int) * length);

    scanf("%s",input_buffer);

    while(*input_buffer!='\0'){

        char * start = input_buffer;

        int num = 0;

        if(*input_buffer==' '){

            input_buffer = '\0';

            num = atoi(start);

            *(unordered_arr) = num;

            ++unordered_arr;

        }

        ++input_buffer;

    }




 	for (int i = 0; i < length; i++)
 		printf("%d ", unordered_arr[i]); // for 打印结果
 	return 0;

}