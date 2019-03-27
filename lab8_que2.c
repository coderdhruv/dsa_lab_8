#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y){
	int r = *x;
	*x = *y;
	*y = r; 
}
int main(){
	int n,i=0;
	scanf("%d",&n);
	int visited[n];
	int arr1[n],proc1[n],ind1[n];
	int arr2[n],proc2[n],ind2[n];
	int arr3[n],proc3[n],ind3[n];
	for(i=0;i<n;i++){
		visited[i]=0;
		scanf("%d %d",&arr1[i],&proc1[i]);
		ind1[i] = i;
		ind2[i] = i;
		ind3[i] = i;
		arr2[i] = arr1[i];
		proc2[i] = proc1[i];
		arr3[i] = arr1[i];
		proc3[i] = proc1[i];		
	}
	int j=0;	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(proc2[i]>proc2[j]){
				swap(&proc2[i],&proc2[j]);
				swap(&arr2[i],&arr2[j]);
				swap(&ind2[i],&ind2[j]);
			}
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr3[i]>arr3[j]){
				swap(&proc3[i],&proc3[j]);
				swap(&arr3[i],&arr3[j]);
				swap(&ind3[i],&ind3[j]);
			}
		}
	}
	printf("sorted according to processing time\n");
	for(i=0;i<n;i++){
		printf("index : %d \n",ind2[i]);
		printf("arrival : %d \n",arr2[i]);
		printf("processing : %d \n",proc2[i]);
	}
	printf("sorted according to arrval time\n");
	for(i=0;i<n;i++){
		printf("index : %d \n",ind3[i]);
		printf("arrival : %d \n",arr3[i]);
		printf("processing : %d \n",proc3[i]);
	}
	int curr_time = 0;
	int wait_time = 0;
	int flag2=-1;
	while(flag2!=0){
		int flag2 = 0;
		int flag = 0;
		if(curr_time == 0){
			curr_time = curr_time + arr3[0] + proc3[0];
			visited[ind3[0]] = 1;
		}
		else{
			int min = 100000;
			int min_ind;
			int min_arr;
			int min_proc;
			flag = 0;
			for(j=0;j<n;j++){
				if(visited[ind3[j]] == 0){
					if(arr3[j] <= curr_time){
						flag = 1;
						if(proc3[j] < min){
							min = proc3[j];
							min_ind = ind3[j];
							min_arr = arr3[j]; 
						}
					}
				}
			}
			if(flag == 1){
				wait_time = wait_time + (curr_time+min-min_arr);
				curr_time = curr_time + min;
				visited[min_ind]=1;
			}
			else if(flag == 0){
				for(j=0;j<n;j++){
					if(visited[ind3[j]] == 0){
						if(arr3[j]>curr_time){
							min_proc = proc3[j];
							min_ind = ind3[j];
							min_arr = arr3[j];
							break;
						}
					}
				}
				wait_time = wait_time + min_proc;
				curr_time = curr_time + min_proc + min_arr;
				visited[min_ind]=1;
			}
		} 
		for(j=0;j<n;j++){
			if(visited[j] == 0){
				flag2=1;
			}
		}
	}
	printf("%d",wait_time);
	
}

