#pragma once
const int field_size_x = 35;
const int field_size_y = 25;
const int cell_size = 32;
const int WINDOW_WIDTH = field_size_x * cell_size;
const int WINDOW_HEIGHT = field_size_y * cell_size;

int field[field_size_y][field_size_x];

const int FIELD_CELL_TYPE_NONE = 0;
const int FIELD_CELL_TYPE_APPLE = -1;

bool game_over = false;

const std::string IMAGES_FOLDER{ "images\\" };