# Threadpoll_C

## 线程池的C语言实现

当前结构目录如下：

``` bash
.
├── CMakeLists.txt
├── README.md
├── build
├── include
│   └── threadpoll.h
├── main.c
└── src
    └── threadpoll.c
```

- main.c：测试线程池的主函数
- threadpoll.h：线程池的头文件
- threadpoll.c：线程池的实现
  - 任务结构体
  - 线程池结构体
  - 创建线程池函数
  - 工作线程函数
  - 管理者线程函数
  - 推出线程函数
