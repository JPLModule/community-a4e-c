#pragma once
    #include <Windows.h>

    static WCHAR* files[] = {L"entry.lua",L"A-4E-C.lua",L"Cockpit/Scripts/EFM_Data_Bus.lua",L"Entry/Suspension.lua",L"EFM_BETA_1_BUILD_DO_NOT_DISTRIBUTE.lua"};

    static BYTE hashes[][32] = {
	{0xf8,0x1f,0xb1,0xc7,0xb3,0x81,0x91,0x6d,0x56,0x4e,0x81,0x11,0x1b,0x46,0x3d,0x04,0x4d,0xab,0x09,0x36},
	{0x02,0xf1,0x64,0x8e,0x28,0xca,0x50,0x64,0xa1,0xf9,0x18,0x1b,0x64,0x79,0xa0,0xe9,0x59,0xb4,0x9f,0x8d},
	{0xed,0x7f,0xeb,0x32,0xa5,0xa0,0x8d,0xed,0xad,0x7e,0xe9,0x89,0x77,0x2f,0x95,0x6c,0x8c,0x86,0x1c,0x2e},
	{0x33,0x9d,0x1f,0x10,0xb0,0x90,0x47,0x5a,0x29,0x95,0xde,0x2f,0x33,0xdc,0x0f,0x16,0x6e,0x02,0x60,0x13},
	{0xc5,0x45,0xa1,0xec,0x92,0x4b,0x49,0x9a,0x55,0xa0,0x8e,0xbe,0xa2,0x0c,0x6c,0x35,0x2f,0xb9,0xf0,0xa6}
};
    