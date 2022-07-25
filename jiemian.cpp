#include"jiemian.h"

//#define width	1000
//#define height  600


//#define  backjpg  "imag//back0.jpg"

void menuinit(void)
{
	initgraph(width,height);
	setbkcolor(BLUE);
	cleardevice();
	loadimage(&background, backjpg, width, height);//先把图片放在工程项目下
	putimage(0,0, &background);
}
void clean(void)
{
	cleardevice();//该函数在图形模式下清除屏幕并将当前位置设置为（0，0）。清除屏幕包括用当前背景色填充屏幕
	putimage(0, 0, &background);
}
void text1(void)
{
	int x;
	int size;
	//int red, green, blue;
	//red = 100;
	//green = 200;
	//blue = 255;
	size = 40;
	settextcolor(RGB(10, 250, 200));
	settextstyle(size, 0, "隶书");//设置字体大小，类型
	x = (width - size*5) / 2;
	outtextxy(x -20, size * 12, "按任意键继续");
}
void text2(void)
{
	int x;
	int size;
	//int red, green, blue;
	//red = 100;
	//green = 200;
	//blue = 255;
	size = 40;
	settextcolor(RGB(10, 250, 200));
	settextstyle(size, 0, "隶书");//设置字体大小，类型
	x = (width - size * 5) / 2;
	outtextxy(x + 20, size * 3, "You Win!");
	outtextxy(x + 20, size * 4, "游戏结束");
	outtextxy(x - 20, size * 12, "按任意键退出");
}
