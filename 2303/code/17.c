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

int judge(int s[7][8],int a, int b,int c,int d,int e,int f,int g)
{
    int flag = 1;
    for(int i = 0;i<7;i++){
        int sum=0;
        sum = a*s[i][0] + b*s[i][1] + c*s[i][2] + d*s[i][3] + e*s[i][4] + f*s[i][5] + g*s[i][6];
        if(sum == s[i][7]){
            continue;
        }else{
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        return 1;
    }else{
        return 0;
    }
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

    for(a = 1;a <= 7;a++){
        for(b = 1;b <= 7;b++){
            for(c = 1;c <= 7;c++){
                for(d = 1;d <= 7;d++){
                    for(e = 1;e <= 7;e++){
                        for(f = 1;f <= 7;f++){
                            for(g = 1;g <= 7;g++){
                                if(judge(square,a,b,c,d,e,f,g)==1){
                                    printf("%d %d %d %d %d %d %d",a,b,c,d,e,f,g);
                                }else continue;
                            }
                        }
                    }
                }
            }
        }
    }
}