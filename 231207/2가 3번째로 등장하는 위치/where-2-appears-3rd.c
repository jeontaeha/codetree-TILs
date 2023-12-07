#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a=0,b=0;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==2){
            a++;

        }
    b++;
    if(a==3)
{
    break;
}
    }
    printf("%d",b);

    return 0;
}