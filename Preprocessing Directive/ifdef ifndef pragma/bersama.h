
#define FOO "Ini adalah FOO dari bersama.h"
// contoh guard
// #ifndef _TESTBERSAMA //jika menggunakan " _ "sebelum pendeklarasian berarti itu untuk guard
// #define _TESTBERSAMA

// struct Mahasiswa{
//     int NIM;
// };

// #endif

// contoh pragma once // agar di compile sekali saja . fungsinya sama dengan cara 1
#pragma once
struct Mahasiswa{
     int NIM;
};