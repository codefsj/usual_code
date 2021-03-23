#include <stdio.h>
#include <string.h>
void StringInGrid(int width, int height, const char* s) {
    int i,k;
    char buf[1000];
    strcpy(buf, s);
    //将传入字符保存到字符数组 
    if(strlen(s)>width-2) buf[width-2]=0;
	//strlen长度8，width-2=18 
    printf("+");//左上角的+
	 
    for(i=0;i<width-2;i++) printf("-");
    //输出width-2=18,18个- 
    printf("+\n");
    //右上角的+ 



    for(k=1; k<(height-1)/2;k++){//(height-1)/2应该是找中间 
        printf("|");
        
        for(i=0;i<width-2;i++) printf(" ");
        //输出空格 
        printf("|\n");
        //最右边然后换行 
    }
	//字符串上面的空格打印完毕 
    printf("|");
	
	
    printf("%*s%s%*s",(width-2-strlen(buf))/2,"", buf, (width-1-strlen(buf))/2,""); //填空

    printf("|\n");


    for(k=(height-1)/2+1; k<height-1; k++){
        printf("|");
        for(i=0;i<width-2;i++) printf(" ");
        printf("|\n");
    }

    printf("+");
    for(i=0;i<width-2;i++) printf("-");
    printf("+\n");
}

int main() {
    StringInGrid(20,6,"abcd1234");//进入子函数，传入宽高 
    return 0;
}
