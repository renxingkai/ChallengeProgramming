#include<stdio.h>

/*按顺序输出数组元素*/
void trace(int A[],int N){
	int i;
	for(i=0;i<N;i++){
		if(i>0){
			printf(" ");
		}
		printf("%d",A[i]);
	}
	printf("\n");
}

/*插入排序函数*/
void insertionSort(int A[],int N){

	int j,i,v;
	for(i=1;i<N;i++){
		v=A[i];//存放待排序元素
		j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];//将大的元素向后移动
			j--;
		}
		//对空出来的元素进行放入
		A[j+1]=v;
		//打印出排序后的结果
		trace(A,N);
	}
}

int main(){
	int N,i,j;
	int A[100];
	scanf("%d",&N);
	//读入数组元素
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	//输出数组元素
	trace(A,N);
	//进行插入排序
	insertionSort(A,N);
	return 0;
}
