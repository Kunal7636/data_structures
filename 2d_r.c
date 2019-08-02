# include <stdio.h>
# include <stdlib.h>

int main(void){
	int m,i,j,n,h,f,r,r1;
	r=0;
	scanf("%d",&m);
	printf("Enter number of rotations required\n");
	scanf("%d",&r1);
	printf("Enter elements \n");
	
	int arr[m][m];
	for( i=0;i<m;i++){
		for( j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	n=m;
	i=0;
	f=0;
	h=n-1;
	printf("after insert\n");
	 for(i=0;i<m;i++){
                for(j=0;j<m;j++){
                        printf("%d ",arr[i][j]);
                }
                printf("\n");
        }	
	while(n>1){
		while(r!=r1)
		{
		i=f;
		for( j=f;j<f+(n-1);j++){
			int temp=arr[i][j+1];
			arr[i][j+1]=arr[f][f];
			arr[f][f]=temp;
		}

	
		 j=f+(n-1);
		for(i=f+1;i<f+n;i++){
			int temp=arr[i][j];
			arr[i][j]=arr[f][f];
			arr[f][f]=temp;

		}

		i=h;
		for(j=h;j>f;j--){
			int temp=arr[i][j-1];
			arr[i][j-1]=arr[f][f];
			arr[f][f]=temp;
		}

		j=f;
		for(i=h-1;i>f;i--){
			int temp=arr[i][j];
			arr[i][j]=arr[f][f];
			arr[f][f]=temp;
		}
	//	n=n-2;

	r++;	
	
	}
		n=n-2;
		f++;
		h--;
		r=0;
		
	}

	printf("final\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;

}
