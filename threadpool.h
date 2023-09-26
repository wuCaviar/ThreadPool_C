#ifndef _THREADPOOL_H_
#define _THREADPOOL_H_

typedef struct ThreadPool ThreadPool; //前置声明

/*
    * @function: threadPoolCreate
    * @desc: 创建线程池并初始化
    * @param min: 线程池中最小线程数
    * @param max: 线程池中最大线程数
    * @param queueSize: 线程池中任务队列的最大容量
    * @return: 成功返回线程池地址，失败返回NULL
    */
ThreadPool* threadPoolCreate(int min, int max, int queueSize);

// 销毁线程池


// 向线程池中添加任务


// 获取线程池中工作的线程的个数


// 获取线程池中活着的线程的个数


/*
    * @function: worker
    * @desc: 工作线程函数
    * @param pool: 线程池地址
    * @return: 无
    */
void* worker(void* arg);

/*
    * @function: manager
    * @desc: 管理者线程函数
    * @param pool: 线程池地址
    * @return: 无
    */
void* manager(void* arg);

/*
    * @function: threadExit
    * @desc: 退出线程
    * @param pool: 线程池地址
    * @return: 无
    */
void threadExit(ThreadPool* pool);

#endif // _THREADPOOL_H_