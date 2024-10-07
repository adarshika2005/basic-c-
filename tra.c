#include<stdio.h>
void travesArray(int arr[],int size){
    for (int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }

}
int main(){
    int arr[]={10,40,20,30,50};
    int size =5;
    travseArray(arr,size);
    return 0;
}
