#include<graphics.h>//图形库头文件
#include<conio.h>
#include<mmsystem.h>
#pragma comment(lib,"WINMM.LIB")
//#include<stdio.h>

#include"jiemian.h"
#include"grid.h"
#include"level.h"
#include"mouse.h"


IMAGE a0, a1,background;

int main()
{
	mciSendString("open music//0.mp3 alias song", NULL, 0, NULL);
	menuinit();
	setbkmode(TRANSPARENT);//设置文字背景颜色透明//OPAQUE;TRANSPARENT
	text1();
	mciSendString("play song repeat", NULL, 0, NULL);
	getch();
	clean();
	geidinit();
	lv_1();
	lv_2();
	lv_3();
	lv_4();
	lv_5();
	lv_6();
	clean();
	text2();
	getch();
	closegraph();
	return 0;
}
