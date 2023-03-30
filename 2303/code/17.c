#include<stdio.h>

void input(int a[7][8],int row,int col,char c2,int num,int fuhao1,int fuhao2)
{
    a[row][col] = fuhao1;
    switch(c2)
    {
        case 'A':a[row][0] = fuhao2;break;
        case 'B':a[row][1] = fuhao2;break;
        case 'C':a[row][2] = fuhao2;break;
        case 'D':a[row][3] = fuhao2;break;
        case 'E':a[row][4] = fuhao2;break;
        case 'F':a[row][5] = fuhao2;break;
        case 'G':a[row][6] = fuhao2;break;
    }
    a[row][7] = num;
}
int main()
{
    int a,b,c,d,e,f,g;
    a = b = c = d = e = f = g = 0;

    int square[7][8]={0},n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        char c1,yun,c2;
        int num;
        getchar();
        scanf("%c%c",&c1,&yun);
        if(yun == '='){
            scanf("%d",&num);
            switch(c1){
                case 'A':{square[i][0] = 1;square[i][7] = num;break;}
                case 'B':{square[i][1] = 1;square[i][7] = num;break;}
                case 'C':{square[i][2] = 1;square[i][7] = num;break;}
                case 'D':{square[i][3] = 1;square[i][7] = num;break;}
                case 'E':{square[i][4] = 1;square[i][7] = num;break;}
                case 'F':{square[i][5] = 1;square[i][7] = num;break;}
                case 'G':{square[i][6] = 1;square[i][7] = num;break;}
            }
        }else{
            int fuhao1 = 1,fuhao2 = 1;
            if(yun == '<'){
                fuhao2 = -1;
            }else{
                fuhao1 = -1;
            }
            scanf("%c%d",&c2,&num);
            switch(c1){
                case 'A':{input(square,i,0,c2,num,fuhao1,fuhao2);break;}
                case 'B':{input(square,i,1,c2,num,fuhao1,fuhao2);break;}
                case 'C':{input(square,i,2,c2,num,fuhao1,fuhao2);break;}
                case 'D':{input(square,i,3,c2,num,fuhao1,fuhao2);break;}
                case 'E':{input(square,i,4,c2,num,fuhao1,fuhao2);break;}
                case 'F':{input(square,i,5,c2,num,fuhao1,fuhao2);break;}
                case 'G':{input(square,i,6,c2,num,fuhao1,fuhao2);break;}
            }
        }
    }

    for(int i = 0;i<7;i++){
        for(int k = 0;k<8;k++){
            printf("%3d",square[i][k]);
            if(k == 7)printf("\n");
        }
    }
}