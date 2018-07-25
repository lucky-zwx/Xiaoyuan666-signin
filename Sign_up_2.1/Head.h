//
// Created by ZHUWX on 2018/1/29.
//

#ifndef SIGN_UP_2_1_HEAD_H
#define SIGN_UP_2_1_HEAD_H

#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BURSIZE 2048


int SOS(char poststr[]);    //sos报名函数

int DIANJ(char poststr[]);  //电竞社报名函数

int China(char poststr[]);  //汉服社团

int Pingpong(char poststr[]);

int English(char poststr[]);

int hex2dec(char c);    //转码函数

void urldecode(char url[]); //转码函数

#endif //SIGN_UP_2_1_HEAD_H
