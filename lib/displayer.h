//
// Created by henry on 11/14/2016.
//

#ifndef RAW_VIDEO_DATA_DISPLAYER_H
#define RAW_VIDEO_DATA_DISPLAYER_H
#include "SDL2/SDL.h"
typedef struct {
    int height;
    int width;
    SDL_Renderer *renderer;
    SDL_Window *window;
    SDL_Texture *texture;
}video_window;
void say_hi();

int init_library();
int create_window(video_window *window);

int update_window(video_window *window);

void destroy_window(video_window *window);
int draw_texture(video_window *window);



#endif //RAW_VIDEO_DATA_DISPLAYER_H