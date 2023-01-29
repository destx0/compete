// reader-writer-problem with writers priority
#include <bits/stdc++.h>
#include <pthread.h>
#include <semaphore.h>
using namespace std;

// declare semaphore
sem_t mtx, wrt, rdr;

// declare global variables
int readcount = 0;
int writecount = 0;
int data = 0;

// initialize semaphore
void init() {
    sem_init(&mtx, 0, 1);
    sem_init(&wrt, 0, 0);
    sem_init(&rdr, 0, 0);
}

// reader process
void *reader(void *arg) {
    int f;
    f = reinterpret_cast<int>(arg);
    sem_wait(&mtx);
    readcount++;
    if (readcount == 1) sem_wait(&wrt);
    sem_post(&mtx);
    sem_wait(&rdr);
    // reading section
    cout << "Data read by the reader " << f << " is " << ::data << endl;
    sem_post(&rdr);
    sem_wait(&mtx);
    readcount--;
    if (readcount == 0) sem_post(&wrt);
    sem_post(&mtx);
}

// writer process
void *writer(void *arg) {
    int f;
    f = (int)arg;
    sem_wait(&wrt);
    // writing section
    ::data++;
    cout << "Data written by the writer " << f << " is " << ::data << endl;
    sem_post(&rdr);
    sem_post(&wrt);
}

// main function
int main() {
    // initialize semaphore
    init();
    // declare thread variables
    pthread_t read[10], write[5];
    // create reader threads
    for (int i = 0; i < 10; i++) {
        pthread_create(&read[i], NULL, reader, (void *)i);
    }
    // create writer threads
    for (int i = 0; i < 5; i++) {
        pthread_create(&write[i], NULL, writer, (void *)i);
    }
    // join reader threads
    for (int i = 0; i < 10; i++) {
        pthread_join(read[i], NULL);
    }
    // join writer threads
    for (int i = 0; i < 5; i++) {
        pthread_join(write[i], NULL);
    }
    // destroy semaphore
    sem_destroy(&mtx);
    sem_destroy(&wrt);
    sem_destroy(&rdr);
    return 0;
}