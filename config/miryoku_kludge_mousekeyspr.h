// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#include <dt-bindings/zmk/mouse.h>

#define U_MOUSE_MOVE_MAX 1250
#define U_MOUSE_MOVE_EXPONENT 1
#define U_MOUSE_MOVE_TIME 1500
#define U_MOUSE_MOVE_DELAY 0
#define U_MOUSE_SCROLL_MAX 100
#define U_MOUSE_SCROLL_EXPONENT 1
#define U_MOUSE_SCROLL_TIME 5000
#define U_MOUSE_SCROLL_DELAY 0

#undef MOVE_UP
#undef MOVE_DOWN
#undef MOVE_LEFT
#undef MOVE_RIGHT
#undef SCROLL_UP
#undef SCROLL_DOWN
#undef SCROLL_LEFT
#undef SCROLL_RIGHT
#define MOVE_UP MOVE_VERT(-U_MOUSE_MOVE_MAX)
#define MOVE_DOWN MOVE_VERT(U_MOUSE_MOVE_MAX)
#define MOVE_LEFT MOVE_HOR(-U_MOUSE_MOVE_MAX)
#define MOVE_RIGHT MOVE_HOR(U_MOUSE_MOVE_MAX)
#define SCROLL_UP SCROLL_VERT(U_MOUSE_SCROLL_MAX)
#define SCROLL_DOWN SCROLL_VERT(-U_MOUSE_SCROLL_MAX)
#define SCROLL_LEFT SCROLL_HOR(-U_MOUSE_SCROLL_MAX)
#define SCROLL_RIGHT SCROLL_HOR(U_MOUSE_SCROLL_MAX)
