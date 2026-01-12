#define IMAGE_STD
#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"

Sprite sp;

void Setup(AlxWindow* w){
    //Image_Enable_FlipV();
    //Image_Enable_FlipH();
    sp = Sprite_Load("./assets/Bg.bmp");
}
void Update(AlxWindow* w){
    if(Stroke(ALX_MOUSE_L).PRESSED){
        Image_FlipH(sp.img,sp.w,sp.h);
    }
    if(Stroke(ALX_MOUSE_R).PRESSED){
        Image_FlipV(sp.img,sp.w,sp.h);
    }
    
    Clear(BLACK);

    Sprite_Render(WINDOW_STD_ARGS,&sp,GetMouse().x,GetMouse().y);
}
void Delete(AlxWindow* w){
    Sprite_Save(&sp,"./assets/Fg.bmp");
    Sprite_Free(&sp);
}

int main() {
    if(Create("Sprites",1900,1000,1,1,Setup,Update,Delete)){
        Start();
    }
    return 0;
}
