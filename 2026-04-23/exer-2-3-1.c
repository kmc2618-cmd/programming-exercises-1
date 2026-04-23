#include <stdio.h>

int main(void) {


    int age = 15;
    char name[16] = "〜〜";
    
	char favorite1[16] = "ゲーム制作";
	char favorite2[7] = "木刀";
	char favorite3[13] = "マンゴー";
	
	printf("##Hello World\n");
    printf("%d歳の%sです。\n",age,name);
	printf("%s\n", favorite1);
	printf("%s\n", favorite2);
	printf("%s\n", favorite3);
    printf("が好きです");

	return 0;
}

