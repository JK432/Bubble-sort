#include <stdio.h>
void bubblesort(int ar[],int n){
  int i,j,swap;
  for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
      if(ar[j]>ar[j+1]){
        swap=ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=swap;
      }
    }
  }
}
int main(){
  int ar[100],n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
  }
  printf("Before Sorting: ");
  for(int i=0;i<n;i++){
    printf("%d ",ar[i]);
  }
  printf("\n");
  
  bubblesort(ar,n);
  printf("After Sorting: ");
  for(int i=0;i<n;i++){
    printf("%d ",ar[i]);
  }


}
