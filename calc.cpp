#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

///////////////////////////////////////////
// プログラム実力テスト概要.txtに記載の課題を参照すること
///////////////////////////////////////////


int main(int argc, char *argv[]) {
	char buf[128]= {0};
	char numLeft[128]= {0};
	char numRight[128]= {0};
    char *num;
    int result, i;

    scanf("%s",buf);

    num = numLeft;
    for (i = 0; buf[i] != NULL; i++) {
		switch(buf[i]) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			 	// 数値の処理
                strncat(num, &buf[i], 1);
			 	break;
			case '+':
			case '-':
			case '*':
			case '/':
			 	// 演算子の処理
                num = numRight;
			 	break;
			case '=':
			 	// =の処理
			 	// とりあえず無視
			default:
			 	break;		 
		}
    }

    // 演算
    result = atoi(numLeft) + atoi(numRight);

	printf("CalcResult:%s=%d\n", buf, result);

	return 0;
}