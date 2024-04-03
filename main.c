//
// Created by ASUS on 2024/4/3 0003.
//
#include <stdio.h>
#include <Windows.h>

int main(){
    printf("使用说明：\n\n1. 必须以管理员身份运行\n2. 按住鼠标X1键开转\n");
    while(1){
        if(GetKeyState(VK_XBUTTON1)<0){
            mouse_event(MOUSEEVENTF_MOVE,1000,0,0,0);
        }
        Sleep(1);
    }
}