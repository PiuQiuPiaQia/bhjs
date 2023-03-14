#include<stdio.h>
int main()
{
    int n,i;    
    int shuzu[54];    //使用数组来储存每一年的总数 
    while(~scanf("%d",&n)){       // 实现不停的接收输入年份输入一次输出一次。使用Ctrl+z，回车退出 
        if(n==0){        //输入年份为0时退出 
            break;
        }
        shuzu[0]= 1;    // 先定义前三个总数
        shuzu[1]= 2;
        shuzu[2]= 3;
        for (i=3;i<54;i++){
            shuzu[i]=shuzu[i-1]+shuzu[i-3];   //计算所有年份的总数 
        }
        printf("%d\n",shuzu[n-1]);   //注意数组的下标是从0开始， 
    }
}
