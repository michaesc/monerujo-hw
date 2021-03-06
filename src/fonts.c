/*
 * This file is part of monerujo-hw
 *
 * Copyright (C) 2018 m2049r <m2049r@monerujo.io>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "fonts.h"

const uint8_t * const font_data[256] = {
	/* 0x00 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x01 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x02 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x03 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x04 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x05 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x06 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x07 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x08 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x09 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x0a n.a. */ (uint8_t *)"\x01\x00",
	/* 0x0b n.a. */ (uint8_t *)"\x01\x00",
	/* 0x0c n.a. */ (uint8_t *)"\x01\x00",
	/* 0x0d n.a. */ (uint8_t *)"\x01\x00",
	/* 0x0e n.a. */ (uint8_t *)"\x01\x00",
	/* 0x0f n.a. */ (uint8_t *)"\x01\x00",
	/* 0x10 MONERO */ (uint8_t *)"\x05\x3c\x20\x18\x21\xbe",
	/* 0x11 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x12 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x13 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x14 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x15 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x16 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x17 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x18 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x19 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x1a n.a. */ (uint8_t *)"\x01\x00",
	/* 0x1b n.a. */ (uint8_t *)"\x01\x00",
	/* 0x1c n.a. */ (uint8_t *)"\x01\x00",
	/* 0x1d n.a. */ (uint8_t *)"\x01\x00",
	/* 0x1e n.a. */ (uint8_t *)"\x01\x00",
	/* 0x1f n.a. */ (uint8_t *)"\x01\x00",
	/* 0x20   */ (uint8_t *)"\x03\x00\x00\x00",
	/* 0x21 ! */ (uint8_t *)"\x01\xfa",
	/* 0x22 " */ (uint8_t *)"\x03\xe0\x00\xe0",
	/* 0x23 # */ (uint8_t *)"\x05\x28\xfe\x28\xfe\x28",
	/* 0x24 $ */ (uint8_t *)"\x05\x24\x54\xfe\x54\x48",
	/* 0x25 % */ (uint8_t *)"\x05\xc4\xc8\x10\x26\x46",
	/* 0x26 & */ (uint8_t *)"\x05\x6c\x92\x6a\x04\x0a",
	/* 0x27 ' */ (uint8_t *)"\x01\xe0",
	/* 0x28 ( */ (uint8_t *)"\x03\x38\x44\x82",
	/* 0x29 ) */ (uint8_t *)"\x03\x82\x44\x38",
	/* 0x2a * */ (uint8_t *)"\x05\x44\x28\xfe\x28\x44",
	/* 0x2b + */ (uint8_t *)"\x05\x10\x10\x7c\x10\x10",
	/* 0x2c , */ (uint8_t *)"\x02\x02\x0c",
	/* 0x2d - */ (uint8_t *)"\x05\x10\x10\x10\x10\x10",
	/* 0x2e . */ (uint8_t *)"\x01\x02",
	/* 0x2f / */ (uint8_t *)"\x05\x04\x08\x10\x20\x40",
	/* 0x30 0 */ (uint8_t *)"\x05\x7c\x8a\x92\xa2\x7c",
	/* 0x31 1 */ (uint8_t *)"\x03\x42\xfe\x02",
	/* 0x32 2 */ (uint8_t *)"\x05\x46\x8a\x92\x92\x62",
	/* 0x33 3 */ (uint8_t *)"\x05\x84\x82\x92\xb2\xcc",
	/* 0x34 4 */ (uint8_t *)"\x05\x18\x28\x48\xfe\x08",
	/* 0x35 5 */ (uint8_t *)"\x05\xe4\xa2\xa2\xa2\x9c",
	/* 0x36 6 */ (uint8_t *)"\x05\x3c\x52\x92\x92\x8c",
	/* 0x37 7 */ (uint8_t *)"\x05\x80\x8e\x90\xa0\xc0",
	/* 0x38 8 */ (uint8_t *)"\x05\x6c\x92\x92\x92\x6c",
	/* 0x39 9 */ (uint8_t *)"\x05\x62\x92\x92\x94\x78",
	/* 0x3a : */ (uint8_t *)"\x01\x28",
	/* 0x3b ; */ (uint8_t *)"\x02\x02\x2c",
	/* 0x3c < */ (uint8_t *)"\x04\x10\x28\x44\x82",
	/* 0x3d = */ (uint8_t *)"\x05\x28\x28\x28\x28\x28",
	/* 0x3e > */ (uint8_t *)"\x04\x82\x44\x28\x10",
	/* 0x3f ? */ (uint8_t *)"\x05\x40\x80\x9a\xa0\x40",
	/* 0x40 @ */ (uint8_t *)"\x05\x7c\x82\xba\x9a\x72",
	/* 0x41 A */ (uint8_t *)"\x05\x3e\x48\x88\x48\x3e",
	/* 0x42 B */ (uint8_t *)"\x05\xfe\x92\x92\x92\x6c",
	/* 0x43 C */ (uint8_t *)"\x05\x7c\x82\x82\x82\x44",
	/* 0x44 D */ (uint8_t *)"\x05\xfe\x82\x82\x82\x7c",
	/* 0x45 E */ (uint8_t *)"\x05\xfe\x92\x92\x92\x82",
	/* 0x46 F */ (uint8_t *)"\x05\xfe\x90\x90\x90\x80",
	/* 0x47 G */ (uint8_t *)"\x05\x7c\x82\x82\x8a\x8e",
	/* 0x48 H */ (uint8_t *)"\x05\xfe\x10\x10\x10\xfe",
	/* 0x49 I */ (uint8_t *)"\x03\x82\xfe\x82",
	/* 0x4a J */ (uint8_t *)"\x05\x04\x02\x02\x02\xfc",
	/* 0x4b K */ (uint8_t *)"\x05\xfe\x10\x28\x44\x82",
	/* 0x4c L */ (uint8_t *)"\x05\xfe\x02\x02\x02\x02",
	/* 0x4d M */ (uint8_t *)"\x05\xfe\x40\x30\x40\xfe",
	/* 0x4e N */ (uint8_t *)"\x05\xfe\x20\x10\x08\xfe",
	/* 0x4f O */ (uint8_t *)"\x05\x7c\x82\x82\x82\x7c",
	/* 0x50 P */ (uint8_t *)"\x05\xfe\x90\x90\x90\x60",
	/* 0x51 Q */ (uint8_t *)"\x05\x7c\x82\x8a\x84\x7a",
	/* 0x52 R */ (uint8_t *)"\x05\xfe\x90\x98\x94\x62",
	/* 0x53 S */ (uint8_t *)"\x05\x64\x92\x92\x92\x4c",
	/* 0x54 T */ (uint8_t *)"\x05\x80\x80\xfe\x80\x80",
	/* 0x55 U */ (uint8_t *)"\x05\xfc\x02\x02\x02\xfc",
	/* 0x56 V */ (uint8_t *)"\x05\xf8\x04\x02\x04\xf8",
	/* 0x57 W */ (uint8_t *)"\x05\xfe\x04\x18\x04\xfe",
	/* 0x58 X */ (uint8_t *)"\x05\xc6\x28\x10\x28\xc6",
	/* 0x59 Y */ (uint8_t *)"\x05\xc0\x20\x1e\x20\xc0",
	/* 0x5a Z */ (uint8_t *)"\x05\x86\x8a\x92\xa2\xc2",
	/* 0x5b [ */ (uint8_t *)"\x04\xfe\xfe\x82\x82",
	/* 0x5c \ */ (uint8_t *)"\x05\x40\x20\x10\x08\x04",
	/* 0x5d ] */ (uint8_t *)"\x04\x82\x82\xfe\xfe",
	/* 0x5e ^ */ (uint8_t *)"\x05\x08\x10\x20\x10\x08",
	/* 0x5f _ */ (uint8_t *)"\x05\x01\x01\x01\x01\x01",
	/* 0x60 ` */ (uint8_t *)"\x03\x80\x40\x20",
	/* 0x61 a */ (uint8_t *)"\x05\x04\x2a\x2a\x2a\x1e",
	/* 0x62 b */ (uint8_t *)"\x05\xfe\x22\x22\x22\x1c",
	/* 0x63 c */ (uint8_t *)"\x05\x1c\x22\x22\x22\x22",
	/* 0x64 d */ (uint8_t *)"\x05\x1c\x22\x22\x22\xfc",
	/* 0x65 e */ (uint8_t *)"\x05\x1c\x2a\x2a\x2a\x1a",
	/* 0x66 f */ (uint8_t *)"\x05\x10\x7e\x90\x90\x40",
	/* 0x67 g */ (uint8_t *)"\x05\x18\x25\x25\x25\x1e",
	/* 0x68 h */ (uint8_t *)"\x05\xfe\x20\x20\x20\x1e",
	/* 0x69 i */ (uint8_t *)"\x03\x22\xbe\x02",
	/* 0x6a j */ (uint8_t *)"\x04\x02\x01\x21\xbe",
	/* 0x6b k */ (uint8_t *)"\x05\xfe\x08\x08\x14\x22",
	/* 0x6c l */ (uint8_t *)"\x03\x82\xfe\x02",
	/* 0x6d m */ (uint8_t *)"\x05\x3e\x20\x1c\x20\x3e",
	/* 0x6e n */ (uint8_t *)"\x05\x3e\x20\x20\x20\x1e",
	/* 0x6f o */ (uint8_t *)"\x05\x1c\x22\x22\x22\x1c",
	/* 0x70 p */ (uint8_t *)"\x05\x3f\x24\x24\x24\x18",
	/* 0x71 q */ (uint8_t *)"\x05\x18\x24\x24\x24\x3f",
	/* 0x72 r */ (uint8_t *)"\x05\x3e\x10\x20\x20\x20",
	/* 0x73 s */ (uint8_t *)"\x05\x12\x2a\x2a\x2a\x24",
	/* 0x74 t */ (uint8_t *)"\x05\x20\xfc\x22\x22\x04",
	/* 0x75 u */ (uint8_t *)"\x05\x3c\x02\x02\x04\x3e",
	/* 0x76 v */ (uint8_t *)"\x05\x38\x04\x02\x04\x38",
	/* 0x77 w */ (uint8_t *)"\x05\x3e\x02\x0c\x02\x3e",
	/* 0x78 x */ (uint8_t *)"\x05\x22\x14\x08\x14\x22",
	/* 0x79 y */ (uint8_t *)"\x05\x38\x05\x05\x05\x3e",
	/* 0x7a z */ (uint8_t *)"\x05\x22\x26\x2a\x32\x22",
	/* 0x7b { */ (uint8_t *)"\x05\x10\x7c\xee\x82\x82",
	/* 0x7c | */ (uint8_t *)"\x01\xfe",
	/* 0x7d } */ (uint8_t *)"\x05\x82\x82\xee\x7c\x10",
	/* 0x7e ~ */ (uint8_t *)"\x05\x40\x80\xc0\x40\x80",
	/* 0x7f n.a. */ (uint8_t *)"\x01\x00",
	/* 0x80 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x81 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x82 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x83 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x84 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x85 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x86 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x87 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x88 LEFT */ (uint8_t *)"\x07\x10\x38\x54\x92\x10\x10\x10",
	/* 0x89 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x8a DOWN */ (uint8_t *)"\x07\x10\x08\x04\xfe\x04\x08\x10",
	/* 0x8b UP */ (uint8_t *)"\x07\x10\x20\x40\xfe\x40\x20\x10",
	/* 0x8c n.a. */ (uint8_t *)"\x01\x00",
	/* 0x8d n.a. */ (uint8_t *)"\x01\x00",
	/* 0x8e n.a. */ (uint8_t *)"\x01\x00",
	/* 0x8f n.a. */ (uint8_t *)"\x01\x00",
	/* 0x90 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x91 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x92 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x93 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x94 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x95 RIGHT */ (uint8_t *)"\x07\x10\x10\x10\x92\x54\x38\x10",
	/* 0x96 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x97 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x98 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x99 n.a. */ (uint8_t *)"\x01\x00",
	/* 0x9a n.a. */ (uint8_t *)"\x01\x00",
	/* 0x9b n.a. */ (uint8_t *)"\x01\x00",
	/* 0x9c n.a. */ (uint8_t *)"\x01\x00",
	/* 0x9d n.a. */ (uint8_t *)"\x01\x00",
	/* 0x9e n.a. */ (uint8_t *)"\x01\x00",
	/* 0x9f n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa0 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa1 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa2 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa3 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa4 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa5 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa6 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa7 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa8 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xa9 COPYRIGHT */ (uint8_t *)"\x07\x38\x44\x92\xaa\xaa\x44\x38",
	/* 0xaa n.a. */ (uint8_t *)"\x01\x00",
	/* 0xab n.a. */ (uint8_t *)"\x01\x00",
	/* 0xac n.a. */ (uint8_t *)"\x01\x00",
	/* 0xad n.a. */ (uint8_t *)"\x01\x00",
	/* 0xae n.a. */ (uint8_t *)"\x01\x00",
	/* 0xaf n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb0 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb1 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb2 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb3 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb4 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb5 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb6 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb7 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb8 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xb9 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xba n.a. */ (uint8_t *)"\x01\x00",
	/* 0xbb n.a. */ (uint8_t *)"\x01\x00",
	/* 0xbc n.a. */ (uint8_t *)"\x01\x00",
	/* 0xbd n.a. */ (uint8_t *)"\x01\x00",
	/* 0xbe n.a. */ (uint8_t *)"\x01\x00",
	/* 0xbf n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc0 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc1 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc2 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc3 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc4 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc5 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc6 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc7 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc8 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xc9 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xca n.a. */ (uint8_t *)"\x01\x00",
	/* 0xcb n.a. */ (uint8_t *)"\x01\x00",
	/* 0xcc n.a. */ (uint8_t *)"\x01\x00",
	/* 0xcd n.a. */ (uint8_t *)"\x01\x00",
	/* 0xce n.a. */ (uint8_t *)"\x01\x00",
	/* 0xcf n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd0 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd1 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd2 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd3 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd4 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd5 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd6 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd7 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd8 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xd9 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xda n.a. */ (uint8_t *)"\x01\x00",
	/* 0xdb n.a. */ (uint8_t *)"\x01\x00",
	/* 0xdc n.a. */ (uint8_t *)"\x01\x00",
	/* 0xdd n.a. */ (uint8_t *)"\x01\x00",
	/* 0xde n.a. */ (uint8_t *)"\x01\x00",
	/* 0xdf n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe0 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe1 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe2 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe3 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe4 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe5 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe6 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe7 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe8 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xe9 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xea n.a. */ (uint8_t *)"\x01\x00",
	/* 0xeb n.a. */ (uint8_t *)"\x01\x00",
	/* 0xec n.a. */ (uint8_t *)"\x01\x00",
	/* 0xed n.a. */ (uint8_t *)"\x01\x00",
	/* 0xee n.a. */ (uint8_t *)"\x01\x00",
	/* 0xef n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf0 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf1 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf2 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf3 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf4 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf5 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf6 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf7 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf8 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xf9 n.a. */ (uint8_t *)"\x01\x00",
	/* 0xfa n.a. */ (uint8_t *)"\x01\x00",
	/* 0xfb n.a. */ (uint8_t *)"\x01\x00",
	/* 0xfc n.a. */ (uint8_t *)"\x01\x00",
	/* 0xfd n.a. */ (uint8_t *)"\x01\x00",
	/* 0xfe n.a. */ (uint8_t *)"\x01\x00",
	/* 0xff n.a. */ (uint8_t *)"\x01\x00"
};

int fontCharWidth(char c) {
	return font_data[(uint8_t)(c)][0];
}

const uint8_t *fontCharData(char c) {
	return font_data[(uint8_t)(c)] + 1;
}
