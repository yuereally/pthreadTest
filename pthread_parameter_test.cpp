/* ************************************************************************
 *       Filename:  pthread_parameter_test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年01月31日 17时44分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ***********************************************************************/*

 #include<iostream>
 #include<cstdlib>
 #include<pthread.h>

 using namespace std;

 #define NUM_THEADS 5

 void *PrintHello(void *threadid)
 {
 	int tid=*((int *threadid));
 	cout<<"Hello Runoob!线程ID,"<<tid<<endl;
 	pthread_exit(NULL);
 }
int main()
 {
 	pthread_t threads[NUM_HTREADS];
 	int indexes[NUM_THREADS];
	int rc;
 	int i;
 	for(i=0;i<NUM_THREADS;i++)
 	{
 		cout<<"main():创建线程，"<<endl;
 		indexes[i]=i;
 		rc=pthread_create(&threads[i],NULL,PrintHello,(void*)&(indexes[i]));
 		if (rc)
 		{
 			cout<<"Error:无法创建线程,"<<rc<<endl;
			exit(-1);
 		}
 	}
 	pthread_exit(NULL);
 }
