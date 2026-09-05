#define IMAGE_STD
#include "/home/codeleaded/System/Static/Library/WindowEngine.h"
#include "/home/codeleaded/System/Static/Library/SVG.h"

//Sprite sp;
SVG svg;

void Setup(AlxWindow* w){
    //Image_Enable_FlipV();
    //Image_Enable_FlipH();
    //sp = Sprite_Load("./assets/Bg.bmp");
    svg = SVG_Load("./assets/Bg.svg");
}
void Update(AlxWindow* w){
    //if(Stroke(ALX_MOUSE_L).PRESSED) Image_FlipH(sp.img,sp.w,sp.h);
    //if(Stroke(ALX_MOUSE_R).PRESSED) Image_FlipV(sp.img,sp.w,sp.h);
    
    Clear(BLACK);

    //Sprite_Render(WINDOW_STD_ARGS,&sp,GetMouse().x,GetMouse().y);
    SVG_Render(WINDOW_STD_ARGS,&svg,GetMouse().x - svg.w/2,GetMouse().y - svg.h/2);
}
void Delete(AlxWindow* w){
    //Sprite_Save(&sp,"./assets/Fg.bmp");
    //Sprite_Free(&sp);
    
    SVG_Save(&svg,"./assets/Fg.svg");
    SVG_Free(&svg);
}

int main() {
    if(Create("Sprites",1900,1000,1,1,Setup,Update,Delete)){
        Start();
    }
    return 0;
}
