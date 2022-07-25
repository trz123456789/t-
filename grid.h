#pragma once
#ifndef	_GRID_H
#define _GRID_H
#include<graphics.h>//图形库头文件
#include<conio.h>
#include"jiemian.h"
#define gsize 50
struct Grid
{
	int left;//矩形左部 x 坐标
	int top;//矩形顶部 y 坐标
	int flag;

};
extern struct Grid level1[4][4];
extern struct Grid level2[5][5];
extern struct Grid level3[6][6];
extern struct Grid level4[7][7];
extern struct Grid level5[8][8];
extern struct Grid level6[9][9];

void geidinit(void);
void lineinit(int n);
void fillgrid1(int x, int y);
void fillgrid2(int x, int y);
void fillgrid3(int x, int y);
void fillgrid4(int x, int y);
void fillgrid5(int x, int y);
void fillgrid6(int x, int y);
#endif
#pragma once
