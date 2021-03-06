// ----------------------------------------------------------------------------
// Copyright (C) 2014
//              David Freese, W1HKJ
//
// This file is part of flrig.
//
// flrig is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// flrig is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ----------------------------------------------------------------------------

#include <FL/Fl_Bitmap.H>

static unsigned char s2n_data[] = {
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x80,
   0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0x01, 0x80, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
   0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x80,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0c, 0x00, 0x00, 0x40, 0x0c, 0x00,
   0x00, 0x80, 0x03, 0x00, 0x00, 0x60, 0x0c, 0x00, 0x00, 0x80, 0x0c, 0x00,
   0x00, 0x90, 0x12, 0x00, 0x00, 0x60, 0x12, 0x00, 0x00, 0x40, 0x04, 0x00,
   0x00, 0x90, 0x12, 0x00, 0x00, 0xc0, 0x12, 0x00, 0x00, 0x80, 0x12, 0x00,
   0x00, 0x40, 0x12, 0x00, 0x00, 0x40, 0x04, 0x00, 0x00, 0x80, 0x12, 0x00,
   0x00, 0xa0, 0x12, 0x00, 0x00, 0x46, 0x12, 0x00, 0x00, 0x4c, 0x12, 0x00,
   0x00, 0x40, 0x04, 0x00, 0x00, 0x40, 0x12, 0x00, 0x00, 0x90, 0x12, 0x00,
   0x00, 0x20, 0x12, 0x00, 0x00, 0x40, 0x12, 0x00, 0x00, 0x40, 0x04, 0x00,
   0x00, 0x20, 0x12, 0x00, 0x00, 0xf0, 0x12, 0x00, 0x00, 0x10, 0x12, 0x00,
   0x00, 0x40, 0x12, 0x00, 0x00, 0x40, 0x04, 0x00, 0x00, 0x10, 0x12, 0x00,
   0x00, 0x80, 0x12, 0x00, 0x00, 0xf0, 0x0c, 0x00, 0x00, 0xe0, 0x0c, 0x00,
   0x00, 0x80, 0x03, 0x00, 0x00, 0xf0, 0x0c, 0x00, 0x00, 0x80, 0x0c, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

   
Fl_Bitmap image_s2n(s2n_data, 160, 16);
