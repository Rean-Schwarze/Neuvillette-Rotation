//
// Created by ASUS on 2024/4/3 0003.
//
#include <stdio.h>
#include <Windows.h>

int main(){
    printf("ʹ��˵����\n\n1. �����Թ���Ա�������\n2. ��ס���X1����ת\n");
    while(1){
        if(GetKeyState(VK_XBUTTON1)<0){
            mouse_event(MOUSEEVENTF_MOVE,1000,0,0,0);
        }
        Sleep(1);
    }
}