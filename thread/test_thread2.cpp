#include <iostream>
#include <pthread.h> //多线程相关操作头文件，可移植众多平台

using namespace std;

#define NUM_THREADS 5 //线程数

void* say_hello( void* args )
{
    cout << "hello in thread " << *( (int *)args ) <<  endl;
} //函数返回的是函数指针，便于后面作为参数

int main()
{
    pthread_t tids[NUM_THREADS]; //线程id
    int indexes[NUM_THREADS] = {1, 2, 3, 4, 5};

    pthread_create( &tids[0], NULL, say_hello, (void*)&(indexes[0]) );
    pthread_create( &tids[1], NULL, say_hello, (void*)&(indexes[1]) );
    pthread_create( &tids[2], NULL, say_hello, (void*)&(indexes[2]) );
    pthread_create( &tids[3], NULL, say_hello, (void*)&(indexes[3]) );
    pthread_create( &tids[4], NULL, say_hello, (void*)&(indexes[4]) );

    for( int i = 0; i < NUM_THREADS; ++i )
        pthread_join( tids[i], NULL ); //pthread_join用来等待一个线程的结束，是一个线程阻塞的函数
}

