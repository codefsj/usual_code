#include <stdio.h>
#include <string.h>
void StringInGrid(int width, int height, const char* s) {
    int i,k;
    char buf[1000];
    strcpy(buf, s);
    //�������ַ����浽�ַ����� 
    if(strlen(s)>width-2) buf[width-2]=0;
	//strlen����8��width-2=18 
    printf("+");//���Ͻǵ�+
	 
    for(i=0;i<width-2;i++) printf("-");
    //���width-2=18,18��- 
    printf("+\n");
    //���Ͻǵ�+ 



    for(k=1; k<(height-1)/2;k++){//(height-1)/2Ӧ�������м� 
        printf("|");
        
        for(i=0;i<width-2;i++) printf(" ");
        //����ո� 
        printf("|\n");
        //���ұ�Ȼ���� 
    }
	//�ַ�������Ŀո��ӡ��� 
    printf("|");
	
	
    printf("%*s%s%*s",(width-2-strlen(buf))/2,"", buf, (width-1-strlen(buf))/2,""); //���

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
    StringInGrid(20,6,"abcd1234");//�����Ӻ����������� 
    return 0;
}
