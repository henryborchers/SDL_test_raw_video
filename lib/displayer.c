//
// Created by henry on 11/14/2016.
//

#include <stdio.h>

#include "displayer.h"

void say_hi() {
puts("Hi");
}

int create_window(video_window *window) {
    int res;
    res = SDL_CreateWindowAndRenderer(window->width, window->height, SDL_WINDOW_RESIZABLE, &window->window, &window->renderer);
    if(res != 0){
        return res;
    }

    window->texture = SDL_CreateTexture(window->renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, window->width, window->height);
    if(NULL == window->texture) {
        return -1;
    }

    return 0;
}

int init_library() {

    return SDL_Init(SDL_INIT_EVERYTHING);
}

void destroy_window(video_window *window) {
    SDL_DestroyWindow(window->window);
    SDL_DestroyRenderer(window->renderer);
    SDL_DestroyTexture(window->texture);
}


int update_window(video_window *window) {
    SDL_SetRenderTarget(window->renderer, NULL);
    SDL_SetRenderDrawColor(window->renderer, 100, 10, 0, 255);
    SDL_RenderCopy(window->renderer, window->texture, NULL, NULL);
    SDL_RenderPresent(window->renderer);

    return 0;

}

int draw_texture(video_window *window) {

    SDL_SetRenderTarget(window->renderer, window->texture);
    SDL_SetRenderDrawColor(window->renderer, 255, 10, 110, 255);
    SDL_RenderClear(window->renderer);

    return 0;
}
