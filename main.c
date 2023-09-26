#include <stdio.h>
#include "threadpool.h"

void taskFunc(void* arg){
    int num = *(int*)arg; // 任务函数中的参数是一个int型的指针，所以要先转换成int型的指针，再取值
    printf("thread %ld is working, number = %d\n", pthread_self(), num);
    usleep(1000); // 休眠1000us，模拟任务执行时长
}


int main(){
    // 创建线程池
    ThreadPool* pool = threadPoolCreate(3, 10, 100); // 线程池中最小线程数为3，最大线程数为10，队列最大容量为100

    // 添加任务
    for (int i = 0; i < 100; i++){
        int* num = (int*)malloc(sizeof(int)); // 为任务函数的参数申请空间
        *num = i + 100; // 为任务函数的参数赋值
        threadPoolAdd(pool, taskFunc, num); // 添加任务
    }

    sleep(30); // 等待所有任务完成

    threadPoolDestroy(pool); // 销毁线程池
    return 0;
}