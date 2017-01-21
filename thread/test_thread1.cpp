#include <iostream>
#include <pthread.h>

using namespace std;

void *say_test(void *args)
{
    cout << "test " << *((int *)args) << endl;
}

int main()
{
    pthread_t tids[4]; //线程id
    int a[] = {1, 2, 3, 4};

    pthread_create(&tids[0], NULL, say_test, (void*)&(a[0]));
    //cout << "hello 1" << endl;
    pthread_create(&tids[1], NULL, say_test, (void*)&(a[1]));
    //cout << "hello 2" << endl;
    pthread_create(&tids[2], NULL, say_test, (void*)&(a[2]));
    //cout << "hello 3" << endl;
    pthread_create(&tids[3], NULL, say_test, (void*)&(a[3]));
    //cout << "hello 4" << endl;
    
    return 0;
}

