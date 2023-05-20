#pragma once
#include <stdlib.h>
#include "settings.h"


int find_empty_cell() {
    srand(time(NULL));
    int empty_cell_count = 0;
    for (int j = 0; j < field_size_y; j++) {
        for (int i = 0; i < field_size_x; i++) {
            if (field[j][i] == FIELD_CELL_TYPE_NONE) {
                empty_cell_count++;
            }
        }
    }
    int target_empty_cell = rand() % empty_cell_count;
    int empty_cell_index = 0;
    for (int j = 0; j < field_size_y; j++) {
        for (int i = 0; i < field_size_x; i++) {
            if (field[j][i] == FIELD_CELL_TYPE_NONE) {
                if (empty_cell_index == target_empty_cell) {
                    return j * field_size_x + i;
                }
                empty_cell_index++;
            }
        }
    }
    return -1;
}

void spawn_apple() {
    int apple_pos = find_empty_cell();
    if (apple_pos != -1) {

    }
    field[apple_pos / field_size_x][apple_pos % field_size_x] = FIELD_CELL_TYPE_APPLE;

}