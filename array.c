#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int* Array(int size){
	int* temp = (int*)calloc(size+1,sizeof(int));
	*temp = size;
	return temp;
}

bool insert(int* array,int data,int index){
	if(index<0 ||index>=*array)
		return false;
	*(array+1+index) = data;
	return true;
}

bool lookUp(int* array,int index){
	if(index<0 ||index>=*array)
		return false;
	printf("%d\n",*(array+1+index));
	return true;
}

void printArray(int* array){
	for(int i = 0;i<*array;++i){
		printf("%d\n",*(array+1+i));
	}
}

int main(){
	int* myArray = Array(5);
	insert(myArray,12,0);
	insert(myArray,122,2);
	insert(myArray,112,1);
	insert(myArray,22,3);
	insert(myArray,11,44);
	printArray(myArray);
	// lookUp(myArray,4);
	return(0);
}