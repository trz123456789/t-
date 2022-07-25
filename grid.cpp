#include"grid.h"
#include"level.h"

struct Grid level1[4][4];
struct Grid level2[5][5];
struct Grid level3[6][6];
struct Grid level4[7][7];
struct Grid level5[8][8];
struct Grid level6[9][9];
void geidinit(void)
{
	lv1_init();
	lv2_init();
	lv3_init();
	lv4_init();
	lv5_init();
	lv6_init();
}
void lineinit(int n)
{
	int a,b,c;
	setlinecolor(RGB(10, 250, 200));//red,green,blue
	if (n == 1)
	{
		a = level1[0][0].left;
		b = level1[0][0].top;
		for ( c = 0; c < 5; c++)
		{
			line(a, level1[0][0].top, a, level1[0][0].top + 4 * gsize);
			line(level1[0][0].left, b, level1[0][0].left + 4 * gsize, b);//横行
			a = a + gsize;
			b = b + gsize;
		}
	}
	if (n == 2)
	{
		a = level2[0][0].left;
		b = level2[0][0].top;
		for (c = 0; c < 6; c++)
		{
			line(a, level2[0][0].top, a, level2[0][0].top + 5 * gsize);
			line(level2[0][0].left, b, level2[0][0].left + 5 * gsize, b);//横行
			a = a + gsize;
			b = b + gsize;
		}
	}
	if (n == 3)
	{
		a = level3[0][0].left;
		b = level3[0][0].top;
		for (c = 0; c < 7; c++)
		{
			line(a, level3[0][0].top, a, level3[0][0].top + 6 * gsize);
			line(level3[0][0].left, b, level3[0][0].left + 6 * gsize, b);//横行
			a = a + gsize;
			b = b + gsize;
		}
	}
	if (n == 4)
	{
		a = level4[0][0].left;
		b = level4[0][0].top;
		for (c = 0; c < 8; c++)
		{
			line(a, level4[0][0].top, a, level4[0][0].top + 7 * gsize);
			line(level4[0][0].left, b, level4[0][0].left + 7 * gsize, b);//横行
			a = a + gsize;
			b = b + gsize;
		}
	}
	if (n == 5)
	{
		a = level5[0][0].left;
		b = level5[0][0].top;
		for (c = 0; c < 9; c++)
		{
			line(a, level5[0][0].top, a, level5[0][0].top + 8 * gsize);
			line(level5[0][0].left, b, level5[0][0].left + 8 * gsize, b);//横行
			a = a + gsize;
			b = b + gsize;
		}
	}
	if (n == 6)
	{
		a = level6[0][0].left;
		b = level6[0][0].top;
		for (c = 0; c < 10; c++)
		{
			line(a, level6[0][0].top, a, level6[0][0].top + 9 * gsize);
			line(level6[0][0].left, b, level6[0][0].left + 9 * gsize, b);//横行
			a = a + gsize;
			b = b + gsize;
		}
	}
}
void fillgrid1(int x, int y)
{
	if (level1[x - 1][y - 1].flag == 1)
	{
		setfillcolor(GREEN);
	}
	else
	{
		setfillcolor(BLACK);
	}
	solidrectangle(level1[x - 1][y - 1].left, level1[x - 1][y - 1].top, level1[x - 1][y - 1].left+ gsize, level1[x - 1][y - 1].top+ gsize);
}
void fillgrid2(int x, int y)
{
	if (level2[x - 1][y - 1].flag == 1)
	{
		setfillcolor(GREEN);
	}
	else
	{
		setfillcolor(BLACK);
	}
	solidrectangle(level2[x - 1][y - 1].left, level2[x - 1][y - 1].top, level2[x - 1][y - 1].left + gsize, level2[x - 1][y - 1].top + gsize);
}
void fillgrid3(int x, int y)
{
	if (level3[x - 1][y - 1].flag == 1)
	{
		setfillcolor(GREEN);
	}
	else
	{
		setfillcolor(BLACK);
	}
	solidrectangle(level3[x - 1][y - 1].left, level3[x - 1][y - 1].top, level3[x - 1][y - 1].left + gsize, level3[x - 1][y - 1].top + gsize);
}
void fillgrid4(int x, int y)
{
	if (level4[x - 1][y - 1].flag == 1)
	{
		setfillcolor(GREEN);
	}
	else
	{
		setfillcolor(BLACK);
	}
	solidrectangle(level4[x - 1][y - 1].left, level4[x - 1][y - 1].top, level4[x - 1][y - 1].left + gsize, level4[x - 1][y - 1].top + gsize);
}
void fillgrid5(int x, int y)
{
	if (level5[x - 1][y - 1].flag == 1)
	{
		setfillcolor(GREEN);
	}
	else
	{
		setfillcolor(BLACK);
	}
	solidrectangle(level5[x - 1][y - 1].left, level5[x - 1][y - 1].top, level5[x - 1][y - 1].left + gsize, level5[x - 1][y - 1].top + gsize);
}
void fillgrid6(int x, int y)
{
	if (level6[x - 1][y - 1].flag == 1)
	{
		setfillcolor(GREEN);
	}
	else
	{
		setfillcolor(BLACK);
	}
	solidrectangle(level6[x - 1][y - 1].left, level6[x - 1][y - 1].top, level6[x - 1][y - 1].left + gsize, level6[x - 1][y - 1].top + gsize);
}