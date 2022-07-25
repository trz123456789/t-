#include"jiemian.h"
#include"mouse.h"
ExMessage m;
void change(int n)
{
	int x, y;
	if (n == 1)
	{
		for (y = 0; y < n + 3; y++)
		{
			for (x = 0; x < n + 3; x++)
			{
				if (m.x > level1[x][y].left && m.x<level1[x][y].left + gsize && m.y>level1[x][y].top && m.y < level1[x][y].top + gsize)
				{

					level1[x][y].flag = -level1[x][y].flag;
					if (x + 1 < n + 3)
						level1[x + 1][y].flag = -level1[x + 1][y].flag;
					if (x - 1 > -1)
						level1[x - 1][y].flag = -level1[x - 1][y].flag;
					if (y + 1 < n + 3)
						level1[x][y + 1].flag = -level1[x][y + 1].flag;
					if (y - 1 > -1)
						level1[x][y - 1].flag = -level1[x][y - 1].flag;
				}
			}
		}
	}
	if (n == 2)
	{
		for (y = 0; y < n + 3; y++)
		{
			for (x = 0; x < n + 3; x++)
			{
				if (m.x > level2[x][y].left && m.x<level2[x][y].left + gsize && m.y>level2[x][y].top && m.y < level2[x][y].top + gsize)
				{

					level2[x][y].flag = -level2[x][y].flag;
					if (x + 1 < n + 3)
						level2[x + 1][y].flag = -level2[x + 1][y].flag;
					if (x - 1 > -1)
						level2[x - 1][y].flag = -level2[x - 1][y].flag;
					if (y + 1 < n + 3)
						level2[x][y + 1].flag = -level2[x][y + 1].flag;
					if (y - 1 > -1)
						level2[x][y - 1].flag = -level2[x][y - 1].flag;
				}
			}
		}
	}	
	if (n == 3)
	{
		for (y = 0; y < n + 3; y++)
		{
			for (x = 0; x < n + 3; x++)
			{
				if (m.x > level3[x][y].left && m.x<level3[x][y].left + gsize && m.y>level3[x][y].top && m.y < level3[x][y].top + gsize)
				{

					level3[x][y].flag = -level3[x][y].flag;
					if (x + 1 < n + 3)
						level3[x + 1][y].flag = -level3[x + 1][y].flag;
					if (x - 1 > -1)
						level3[x - 1][y].flag = -level3[x - 1][y].flag;
					if (y + 1 < n + 3)
						level3[x][y + 1].flag = -level3[x][y + 1].flag;
					if (y - 1 > -1)
						level3[x][y - 1].flag = -level3[x][y - 1].flag;
				}
			}
		}
	}
	if (n == 4)
	{
		for (y = 0; y < n + 3; y++)
		{
			for (x = 0; x < n + 3; x++)
			{
				if (m.x > level4[x][y].left && m.x<level4[x][y].left + gsize && m.y>level4[x][y].top && m.y < level4[x][y].top + gsize)
				{

					level4[x][y].flag = -level4[x][y].flag;
					if (x + 1 < n + 3)
						level4[x + 1][y].flag = -level4[x + 1][y].flag;
					if (x - 1 > -1)
						level4[x - 1][y].flag = -level4[x - 1][y].flag;
					if (y + 1 < n + 3)
						level4[x][y + 1].flag = -level4[x][y + 1].flag;
					if (y - 1 > -1)
						level4[x][y - 1].flag = -level4[x][y - 1].flag;
				}
			}
		}
	}	
	if (n == 5)
	{
		for (y = 0; y < n + 3; y++)
		{
			for (x = 0; x < n + 3; x++)
			{
				if (m.x > level5[x][y].left && m.x<level5[x][y].left + gsize && m.y>level5[x][y].top && m.y < level5[x][y].top + gsize)
				{

					level5[x][y].flag = -level5[x][y].flag;
					if (x + 1 < n + 3)
						level5[x + 1][y].flag = -level5[x + 1][y].flag;
					if (x - 1 > -1)
						level5[x - 1][y].flag = -level5[x - 1][y].flag;
					if (y + 1 < n + 3)
						level5[x][y + 1].flag = -level5[x][y + 1].flag;
					if (y - 1 > -1)
						level5[x][y - 1].flag = -level5[x][y - 1].flag;
				}
			}
		}
	}
	if (n == 6)
	{
		for (y = 0; y < n + 3; y++)
		{
			for (x = 0; x < n + 3; x++)
			{
				if (m.x > level6[x][y].left && m.x<level6[x][y].left + gsize && m.y>level6[x][y].top && m.y < level6[x][y].top + gsize)
				{

					level6[x][y].flag = -level6[x][y].flag;
					if (x + 1 < n + 3)
						level6[x + 1][y].flag = -level6[x + 1][y].flag;
					if (x - 1 > -1)
						level6[x - 1][y].flag = -level6[x - 1][y].flag;
					if (y + 1 < n + 3)
						level6[x][y + 1].flag = -level6[x][y + 1].flag;
					if (y - 1 > -1)
						level6[x][y - 1].flag = -level6[x][y - 1].flag;
				}
			}
		}
		
	}
}
void getmouse(int n)
{
		m = getmessage(EM_MOUSE);
		if (m.message == WM_LBUTTONDOWN)
		{
			change(n);
			//clean();
		}
}