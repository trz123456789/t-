#include"jiemian.h"

//#define width	1000
//#define height  600


//#define  backjpg  "imag//back0.jpg"

void menuinit(void)
{
	initgraph(width,height);
	setbkcolor(BLUE);
	cleardevice();
	loadimage(&background, backjpg, width, height);//�Ȱ�ͼƬ���ڹ�����Ŀ��
	putimage(0,0, &background);
}
void clean(void)
{
	cleardevice();//�ú�����ͼ��ģʽ�������Ļ������ǰλ������Ϊ��0��0���������Ļ�����õ�ǰ����ɫ�����Ļ
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
	settextstyle(size, 0, "����");//���������С������
	x = (width - size*5) / 2;
	outtextxy(x -20, size * 12, "�����������");
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
	settextstyle(size, 0, "����");//���������С������
	x = (width - size * 5) / 2;
	outtextxy(x + 20, size * 3, "You Win!");
	outtextxy(x + 20, size * 4, "��Ϸ����");
	outtextxy(x - 20, size * 12, "��������˳�");
}
