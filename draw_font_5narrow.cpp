/*

Copyright (c) 2016, Embedded Adventures, www.embeddedadventures.com
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

- Redistributions of source code must retain the above copyright notice,
  this list of conditions and the following disclaimer.

- Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.

- Neither the name of Embedded Adventures nor the names of its contributors
  may be used to endorse or promote products derived from this software
  without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
THE POSSIBILITY OF SUCH DAMAGE.

Contact us at admin [at] embeddedadventures.com
*/

#include "draw_font_5narrow.h"

uns8 const font_5narrow_data[] PROGMEM = {
    0x00, 0x00, 0x00, 0xb8, 0x18, 0x00, 0x18, 0x50,
     0xf8, 0x50, 0xf8, 0x50, 0xa8, 0x50, 0xa8, 0x50,
     0xa8, 0x98, 0x58, 0x20, 0xd0, 0xc8, 0x50, 0xa8,
     0x50, 0xa8, 0x50, 0x18, 0x70, 0x88, 0x88, 0x70,
     0xa8, 0x70, 0xf8, 0x70, 0xa8, 0x20, 0x20, 0xf8,
     0x20, 0x20, 0x80, 0x60, 0x20, 0x20, 0x20, 0x20,
     0xc0, 0xc0, 0x40, 0x20, 0x10, 0x70, 0x88, 0x88,
     0x70, 0x10, 0xf8, 0x90, 0xc8, 0xa8, 0x90, 0x88,
     0xa8, 0xa8, 0x50, 0x60, 0x50, 0x48, 0xf8, 0xb8,
     0xa8, 0xa8, 0x48, 0x70, 0xa8, 0xa8, 0x40, 0x08,
     0xc8, 0x28, 0x18, 0x50, 0xa8, 0xa8, 0x50, 0x10,
     0xa8, 0xa8, 0x70, 0x50, 0x80, 0x50, 0x20, 0x50,
     0x88, 0x50, 0x50, 0x50, 0x50, 0x88, 0x50, 0x20,
     0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0x78, 0x38,
     0x18, 0x08, 0xf0, 0x28, 0x28, 0xf0, 0xf8, 0xa8,
     0xa8, 0x50, 0x70, 0x88, 0x88, 0x88, 0xf8, 0x88,
     0x88, 0x70, 0xf8, 0xa8, 0xa8, 0x88, 0xf8, 0x28,
     0x28, 0x08, 0x70, 0x88, 0xa8, 0xe8, 0xf8, 0x20,
     0x20, 0xf8, 0x88, 0xf8, 0x88, 0x40, 0x80, 0x80,
     0x78, 0xf8, 0x20, 0x50, 0x88, 0xf8, 0x80, 0x80,
     0x80, 0xf8, 0x10, 0x20, 0x10, 0xf8, 0xf8, 0x10,
     0x20, 0x40, 0xf8, 0x70, 0x88, 0x88, 0x70, 0xf8,
     0x28, 0x28, 0x10, 0x70, 0x88, 0xa8, 0x48, 0xb0,
     0xf8, 0x28, 0x68, 0x90, 0x90, 0xa8, 0xa8, 0x48,
     0x08, 0x08, 0xf8, 0x08, 0x08, 0x78, 0x80, 0x80,
     0x78, 0x38, 0x40, 0x80, 0x40, 0x38, 0xf8, 0x40,
     0x20, 0x40, 0xf8, 0x88, 0x50, 0x20, 0x50, 0x88,
     0x08, 0x10, 0xe0, 0x10, 0x08, 0x88, 0xc8, 0xa8,
     0x98, 0x88, 0xe8, 0x50, 0x50, 0xe8, 0x68, 0x90,
     0x90, 0x68, 0x68, 0x80, 0x80, 0x68,


};
uns16 const font_5narrow_index[] PROGMEM = {
    0, // 32 -
    3, // 33 - !
    4, // 34 - "
    7, // 35 - #
    12, // 36 - $
    17, // 37 - %
    22, // 38 - &
    27, // 39 - '
    28, // 40 - (
    30, // 41 - )
    32, // 42 - *
    37, // 43 - +
    42, // 44 - ,
    44, // 45 - -
    48, // 46 - .
    50, // 47 - /
    53, // 48 - 0
    57, // 49 - 1
    59, // 50 - 2
    63, // 51 - 3
    67, // 52 - 4
    71, // 53 - 5
    75, // 54 - 6
    79, // 55 - 7
    83, // 56 - 8
    87, // 57 - 9
    91, // 58 - :
    92, // 59 - ;
    94, // 60 - <
    97, // 61 - =
    101, // 62 - >
    104, // 63 - ?
    109, // 64 - @
    114, // 65 - A
    118, // 66 - B
    122, // 67 - C
    126, // 68 - D
    130, // 69 - E
    134, // 70 - F
    138, // 71 - G
    142, // 72 - H
    146, // 73 - I
    149, // 74 - J
    153, // 75 - K
    157, // 76 - L
    161, // 77 - M
    166, // 78 - N
    171, // 79 - O
    175, // 80 - P
    179, // 81 - Q
    184, // 82 - R
    188, // 83 - S
    192, // 84 - T
    197, // 85 - U
    201, // 86 - V
    206, // 87 - W
    211, // 88 - X
    216, // 89 - Y
    221, // 90 - Z
    226, // 91 - [
    230, // 92 - backslash
    234, // 93 - ]
    238, // 94 - ^
};
