#include"level.h"

#define Top 130
#define mode -1
int win(int n)
{
	int x, y, win;
	win = 1;
	for (y = 0; y < n+3; y++)
	{
		for (x = 0; x < n+3; x++)
		{
			if (n == 1)
			{
				if (level1[x][y].flag == mode)
					win = 0;
			}
			if (n == 2)
			{
				if (level2[x][y].flag == mode)
					win = 0;
			}
			if (n == 3)
			{
				if (level3[x][y].flag == mode)
					win = 0;
			}
			if (n == 4)
			{
				if (level4[x][y].flag == mode)
					win = 0;
			}
			if (n == 5)
			{
				if (level5[x][y].flag == mode)
					win = 0;
			}
			if (n == 6)
			{
				if (level6[x][y].flag == mode)
					win = 0;
			}
		}
	}
	return win;
}
void lv1_init(void)
{
	int x, y;
	level1[0][0].top = Top;
	level1[0][0].left = (width - gsize * 4) / 2;
	//level1[0][0].right = level1[0][0].left + gsize;
	//level1[0][0].bottom = level1[0][0].top + gsize;

	for (y = 0; y < 4; y++)
	{
		for (x = 0; x < 4; x++)
		{
			level1[x][y].flag = mode;
			
		}
	}
	for (y = 0; y < 4; y++)
	{
		if (y < 3)
		{
			level1[0][y + 1].left = (width - gsize * 4) / 2;
			level1[0][y + 1].top = level1[0][y].top + gsize;
		}
		for (x = 0; x < 3; x++)
		{
			level1[x + 1][y].top = level1[x][y].top;
			level1[x + 1][y].left = level1[x][y].left + gsize;
		}
	}
}
void lv2_init(void)
{
	int x, y;
	level2[0][0].top = Top;
	level2[0][0].left = (width - gsize * 5) / 2;
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			level2[x][y].flag = mode;

		}
	}
	for (y = 0; y < 5; y++)
	{
		if (y < 4)
		{
			level2[0][y + 1].left = (width - gsize * 5) / 2;
			level2[0][y + 1].top = level2[0][y].top + gsize;
		}
		for (x = 0; x < 5; x++)
		{
			level2[x + 1][y].top = level2[x][y].top;
			level2[x + 1][y].left = level2[x][y].left + gsize;
		}
	}
}
void lv3_init(void)
{
	int x, y;
	level3[0][0].top = Top;
	level3[0][0].left = (width - gsize * 6) / 2;
	for (y = 0; y < 6; y++)
	{
		for (x = 0; x < 6; x++)
		{
			level3[x][y].flag = mode;

		}
	}
	for (y = 0; y < 6; y++)
	{
		if (y < 5)
		{
			level3[0][y + 1].left = (width - gsize * 6) / 2;
			level3[0][y + 1].top = level3[0][y].top + gsize;
		}
		for (x = 0; x < 5; x++)
		{
			level3[x + 1][y].top = level3[x][y].top;
			level3[x + 1][y].left = level3[x][y].left + gsize;
		}
	}
}
void lv4_init(void)
{
	int x, y;
	level4[0][0].top = Top;
	level4[0][0].left = (width - gsize * 7) / 2;
	for (y = 0; y < 7; y++)
	{
		for (x = 0; x < 7; x++)
		{
			level4[x][y].flag = mode;

		}
	}
	for (y = 0; y < 7; y++)
	{
		if (y < 6)
		{
			level4[0][y + 1].left = (width - gsize * 7) / 2;
			level4[0][y + 1].top = level4[0][y].top + gsize;
		}
		for (x = 0; x < 6; x++)
		{
			level4[x + 1][y].top = level4[x][y].top;
			level4[x + 1][y].left = level4[x][y].left + gsize;
		}
	}
}
void lv5_init(void)
{
	int x, y;
	level5[0][0].top = Top;
	level5[0][0].left = (width - gsize * 8) / 2;
	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			level5[x][y].flag = mode;

		}
	}
	for (y = 0; y < 8; y++)
	{
		if (y < 7)
		{
			level5[0][y + 1].left = (width - gsize * 8) / 2;
			level5[0][y + 1].top = level5[0][y].top + gsize;
		}
		for (x = 0; x < 7; x++)
		{
			level5[x + 1][y].top = level5[x][y].top;
			level5[x + 1][y].left = level5[x][y].left + gsize;
		}
	}
}
void lv6_init(void)
{
	int x, y;
	level6[0][0].top = Top;
	level6[0][0].left = (width - gsize * 9) / 2;
	for (y = 0; y < 9; y++)
	{
		for (x = 0; x < 9; x++)
		{
			level6[x][y].flag = mode;

		}
	}
	for (y = 0; y < 9; y++)
	{
		if (y < 8)
		{
			level6[0][y + 1].left = (width - gsize * 9) / 2;
			level6[0][y + 1].top = level6[0][y].top + gsize;
		}
		for (x = 0; x < 8; x++)
		{
			level6[x + 1][y].top = level6[x][y].top;
			level6[x + 1][y].left = level6[x][y].left + gsize;
		}
	}
}
void lv_1(void)
{
	int x, y;
	while (1)
	{
		getmouse(1);
		for (y = 1; y < 5; y++)
		{
			for (x = 1; x < 5; x++)
			{

				fillgrid1(x, y);
			}
		}
		lineinit(1);
		if (win(1) == 1)
			break;
	}
}
void lv_2(void)
{
	int x, y;
	while (1)
	{
		getmouse(2);
		for (y = 1; y < 6; y++)
		{
			for (x = 1; x < 6; x++)
			{
				fillgrid2(x, y);
			}
		}
		lineinit(2);
		if (win(2) == 1)
			break;
	}
}
void lv_3(void)
{
	int x, y;
	while (1)
	{
		getmouse(3);
		for (y = 1; y < 7; y++)
		{
			for (x = 1; x < 7; x++)
			{
				fillgrid3(x, y);
			}
		}
		lineinit(3);
		if (win(3) == 1)
			break;
	}
}
void lv_4(void)
{
	int x, y;
	while (1)
	{
		getmouse(4);
		for (y = 1; y < 8; y++)
		{
			for (x = 1; x < 8; x++)
			{
				fillgrid4(x, y);
			}
		}
		lineinit(4);
		if (win(4) == 1)
			break;
	}
}
void lv_5(void)
{
	int x, y;
	while (1)
	{
		getmouse(5);
		for (y = 1; y < 9; y++)
		{
			for (x = 1; x < 9; x++)
			{
				fillgrid5(x, y);
			}
		}
		lineinit(5);
		if (win(5) == 1)
			break;
	}
}
void lv_6(void)
{
	int x, y;
	while (1)
	{
		getmouse(6);
		for (y = 1; y < 10; y++)
		{
			for (x = 1; x < 10; x++)
			{
				fillgrid6(x, y);
			}
		}
		lineinit(6);
		if (win(6) == 1)
			break;
	}
}