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


int SOS(char poststr[]);    //sos��������

int DIANJ(char poststr[]);  //�羺�籨������

int China(char poststr[]);  //��������

int Pingpong(char poststr[]);

int English(char poststr[]);

int hex2dec(char c);    //ת�뺯��

void urldecode(char url[]); //ת�뺯��

#endif //SIGN_UP_2_1_HEAD_H
