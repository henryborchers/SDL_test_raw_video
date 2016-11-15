#include <stdio.h>
#include <displayer.h>
#include "displayer.h"


int main(int argc, char *argv[]){
    int res;
    int quit = 0;
    SDL_Event event;

    puts("Hello World");
    say_hi();
    video_window w;
    w.height = 480;
    w.width = 640;

    if(init_library() != 0){
        return 1;
    };
    if(create_window(&w) != 0){
        return 1;
    };

    draw_texture(&w);

    while(1){
        SDL_PollEvent(&event);
        if(event.type == SDL_QUIT){
            break;
        }
        draw_texture(&w);
        update_window(&w);
    }
    destroy_window(&w);
    return 0;
}
