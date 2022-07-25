#pragma once
#ifndef	_JIEMIAN_H
#define _JIEMIAN_H
#include<graphics.h>//图形库头文件
#include<conio.h>

#define width	1000
#define height  600

#define  backjpg  "imag//back.jpg"

extern IMAGE a0, a1, background;

void menuinit(void);
void clean(void);
void text1(void);
void text2(void);

#endif