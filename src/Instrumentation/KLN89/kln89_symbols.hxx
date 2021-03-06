// kln89_symbols.hxx - pixel-encoded symbols for the KLN89 GPS unit simulation.
//
// Written by David Luff, started 2005.
//
// Copyright (C) 2005 David C Luff:  daveluff --AT-- ntlworld --D0T-- com
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
// $Id$

const char NumbersBold[][8] = {{0x1E, 0x3F, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x1E},   // 0
                               {0x0C, 0x1C, 0x1C, 0x0C, 0x0C, 0x0C, 0x1E, 0x1E},   // 1
                               {0x1E, 0x3F, 0x33, 0x03, 0x06, 0x1C, 0x3F, 0x3F},   // 2
                               {0x3E, 0x3F, 0x03, 0x1F, 0x1E, 0x03, 0x3F, 0x3E},   // 3
                               {0x06, 0x0E, 0x16, 0x26, 0x3F, 0x3F, 0x06, 0x06},   // 4
                               {0x3F, 0x3F, 0x30, 0x3E, 0x3F, 0x03, 0x3F, 0x3E},   // 5
                               {0x0E, 0x1E, 0x30, 0x3E, 0x3F, 0x33, 0x3F, 0x1E},   // 6
                               {0x3F, 0x3F, 0x03, 0x06, 0x0C, 0x18, 0x18, 0x18},   // 7
                               {0x1E, 0x3F, 0x33, 0x3F, 0x1E, 0x33, 0x3F, 0x1E},   // 8
                               {0x1E, 0x3F, 0x33, 0x3F, 0x1F, 0x03, 0x1E, 0x1C}};  // 9

const char UpperAlpha[][8] = {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // !
                              {0x00, 0x1B, 0x09, 0x12, 0x00, 0x00, 0x00, 0x00},   // "
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // #
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // $
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // %
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // &
                              {0x00, 0x06, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00},   // '
                              {0x00, 0x02, 0x04, 0x08, 0x08, 0x08, 0x04, 0x02},   // (
                              {0x00, 0x08, 0x04, 0x02, 0x02, 0x02, 0x04, 0x08},   // )
                              {0x00, 0x00, 0x0A, 0x04, 0x1F, 0x04, 0x0A, 0x00},   // *
                              {0x00, 0x00, 0x04, 0x04, 0x1F, 0x04, 0x04, 0x00},   // +
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // ,
                              {0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00},   // -
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C},   // .
                              {0x00, 0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x00},   // /
                              {0x00, 0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E},   // 0
                              {0x00, 0x04, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x0E},   // 1
                              {0x00, 0x0E, 0x11, 0x01, 0x02, 0x04, 0x08, 0x1F},   // 2
                              {0x00, 0x0E, 0x11, 0x01, 0x0E, 0x01, 0x11, 0x0E},   // 3
                              {0x00, 0x02, 0x06, 0x0A, 0x12, 0x1F, 0x02, 0x02},   // 4
                              {0x00, 0x1F, 0x10, 0x1E, 0x01, 0x01, 0x11, 0x0E},   // 5
                              {0x00, 0x06, 0x08, 0x10, 0x1E, 0x11, 0x11, 0x0E},   // 6
                              {0x00, 0x1F, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08},   // 7
                              {0x00, 0x0E, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E},   // 8
                              {0x00, 0x0E, 0x11, 0x11, 0x0F, 0x01, 0x02, 0x0C},   // 9
                              {0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C},   // :
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // ;
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // <
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // =
                              {0x00, 0x10, 0x08, 0x04, 0x02, 0x04, 0x08, 0x10},   // >
                              {0x00, 0x0E, 0x11, 0x01, 0x02, 0x04, 0x00, 0x04},   // ?
                              {0x00, 0x0E, 0x11, 0x17, 0x15, 0x17, 0x10, 0x0F},   // @
	                          {0x00, 0x0E, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11},   // A
                              {0x00, 0x1E, 0x11, 0x11, 0x1E, 0x11, 0x11, 0x1E},   // B
                              {0x00, 0x0E, 0x11, 0x10, 0x10, 0x10, 0x11, 0x0E},   // C
                              {0x00, 0x1C, 0x12, 0x11, 0x11, 0x11, 0x12, 0x1C},   // D
                              {0x00, 0x1F, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x1F},   // E
                              {0x00, 0x1F, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x10},   // F
                              {0x00, 0x0E, 0x11, 0x10, 0x10, 0x17, 0x11, 0x0E},   // G
                              {0x00, 0x11, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11},   // H
                              {0x00, 0x0E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0E},   // I
                              {0x00, 0x07, 0x02, 0x02, 0x02, 0x02, 0x12, 0x0C},   // J
                              {0x00, 0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11},   // K
                              {0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F},   // L
                              {0x00, 0x11, 0x1B, 0x15, 0x15, 0x11, 0x11, 0x11},   // M
                              {0x00, 0x11, 0x11, 0x19, 0x15, 0x13, 0x11, 0x11},   // N
                              {0x00, 0x0E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E},   // O
                              {0x00, 0x1E, 0x11, 0x11, 0x1E, 0x10, 0x10, 0x10},   // P
                              {0x00, 0x0E, 0x11, 0x11, 0x11, 0x15, 0x12, 0x0D},   // Q
                              {0x00, 0x1E, 0x11, 0x11, 0x1E, 0x14, 0x12, 0x11},   // R
                              {0x00, 0x0F, 0x10, 0x10, 0x0E, 0x01, 0x01, 0x1E},   // S
                              {0x00, 0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04},   // T
                              {0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E},   // U
                              {0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0A, 0x04},   // V
                              {0x00, 0x11, 0x11, 0x11, 0x15, 0x15, 0x15, 0x0A},   // W
                              {0x00, 0x11, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x11},   // X
                              {0x00, 0x11, 0x11, 0x11, 0x0A, 0x04, 0x04, 0x04},   // Y
                              {0x00, 0x1F, 0x01, 0x02, 0x04, 0x08, 0x10, 0x1F},   // Z
                              {0x00, 0x1E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1E},   // [
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   /* \ */  // Have to be carefull with forward slash - it's multiline comment!
                              {0x00, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1E},   // ]
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // ^
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F},   // _
                              {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // `
                              {0x00, 0x00, 0x00, 0x0E, 0x01, 0x0F, 0x11, 0x0F},   // a
                              {0x00, 0x10, 0x10, 0x10, 0x16, 0x19, 0x11, 0x1E},   // b
                              {0x00, 0x00, 0x00, 0x0E, 0x10, 0x10, 0x10, 0x0E},   // c
                              {0x00, 0x01, 0x01, 0x01, 0x0D, 0x13, 0x11, 0x0F},   // d
                              {0x00, 0x00, 0x00, 0x0E, 0x11, 0x1F, 0x10, 0x0E},   // e
                              {0x00, 0x06, 0x09, 0x08, 0x1C, 0x08, 0x08, 0x08},   // f
                              {0x00, 0x00, 0x0E, 0x11, 0x11, 0x0F, 0x01, 0x0E},   // g
                              {0x00, 0x10, 0x10, 0x16, 0x19, 0x11, 0x11, 0x11},   // h
                              {0x00, 0x04, 0x00, 0x0C, 0x04, 0x04, 0x04, 0x0E},   // i
                              {0x00, 0x02, 0x00, 0x06, 0x02, 0x02, 0x12, 0x0C},   // j (Never found j - this is a guess!)
                              {0x00, 0x10, 0x10, 0x11, 0x12, 0x1C, 0x12, 0x11},   // k
                              {0x00, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0E},   // l
                              {0x00, 0x00, 0x00, 0x1A, 0x15, 0x11, 0x11, 0x11},   // m
                              {0x00, 0x00, 0x00, 0x16, 0x19, 0x11, 0x11, 0x11},   // n
                              {0x00, 0x00, 0x00, 0x0E, 0x11, 0x11, 0x11, 0x0E},   // o
                              {0x00, 0x00, 0x00, 0x1E, 0x11, 0x1E, 0x10, 0x10},   // p
                              {0x00, 0x00, 0x00, 0x0F, 0x11, 0x0F, 0x01, 0x01},   // q
                              {0x00, 0x00, 0x00, 0x16, 0x19, 0x10, 0x10, 0x10},   // r
                              {0x00, 0x00, 0x00, 0x0E, 0x10, 0x0E, 0x01, 0x0E},   // s
                              {0x00, 0x08, 0x08, 0x1C, 0x08, 0x08, 0x09, 0x06},   // t
                              {0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x13, 0x0D},   // u
                              {0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x0A, 0x04},   // v
                              {0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x15, 0x0A},   // w
                              {0x00, 0x00, 0x00, 0x11, 0x0A, 0x04, 0x0A, 0x11},   // x
                              {0x00, 0x00, 0x00, 0x11, 0x11, 0x0F, 0x01, 0x0E},   // y
                              {0x00, 0x00, 0x00, 0x1F, 0x02, 0x04, 0x08, 0x1F}};  // z

const char SpecialChar[][8] = {{0x00, 0x04, 0x0A, 0x04, 0x00, 0x00, 0x00, 0x00},   // 0: degrees sign
                               {0x00, 0x00, 0x00, 0x04, 0x0E, 0x04, 0x00, 0x00},   // 1: Smaller plus sign
                               {0x00, 0x00, 0x00, 0x08, 0x1C, 0x08, 0x00, 0x00},   // 2: Left-shifted smaller plus sign
                               {0x00, 0x00, 0x04, 0x06, 0x3F, 0x06, 0x04, 0x00},   // 3: Active arrow
                               {0x00, 0x00, 0x04, 0x06, 0x1F, 0x06, 0x04, 0x00},   // 4: Slightly shorter active arrow
							   {0x00, 0x04, 0x04, 0x1F, 0x04, 0x04, 0x00, 0x1F},   // 5: +- sign.
							   {0x00, 0x1E, 0x11, 0x11, 0x3F, 0x11, 0x11, 0x1E},   // 6: the barred 'D' of the DTO symbol
							   {0x00, 0x00, 0x04, 0x0C, 0x1F, 0x0C, 0x04, 0x00}};  // 7: Left pointing arrow.
							   
// For small char, the first char is the number of pixels horizontally that are used for drawing,
// since these chars are not fixed width.  (Used for the labels in the moving map display).
// The hex values are referenced from the right-most pixel position, and the chars are 5 pixels high (last 5 chars).
const char SmallChar[][8] = {{0x03, 0x00, 0x00, 0x07, 0x05, 0x05, 0x05, 0x07},   // 0
	                         {0x03, 0x00, 0x00, 0x02, 0x06, 0x02, 0x02, 0x07},   // 1
							 {0x03, 0x00, 0x00, 0x06, 0x01, 0x02, 0x04, 0x07},   // 2
							 {0x03, 0x00, 0x00, 0x07, 0x01, 0x03, 0x01, 0x07},   // 3
                             {0x03, 0x00, 0x00, 0x01, 0x03, 0x05, 0x07, 0x01},   // 4
							 {0x03, 0x00, 0x00, 0x07, 0x04, 0x07, 0x01, 0x07},   // 5
							 {0x03, 0x00, 0x00, 0x07, 0x04, 0x07, 0x05, 0x07},   // 6
							 {0x03, 0x00, 0x00, 0x07, 0x01, 0x02, 0x02, 0x02},   // 7
							 {0x03, 0x00, 0x00, 0x07, 0x05, 0x07, 0x05, 0x07},   // 8
							 {0x03, 0x00, 0x00, 0x07, 0x05, 0x07, 0x01, 0x07},   // 9
							 {0x03, 0x00, 0x00, 0x02, 0x05, 0x05, 0x07, 0x05},   // A
							 {0x03, 0x00, 0x00, 0x06, 0x05, 0x06, 0x05, 0x06},   // B
							 {0x03, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x03},   // C
							 {0x04, 0x00, 0x00, 0x0E, 0x09, 0x09, 0x09, 0x0E},   // D
							 {0x03, 0x00, 0x00, 0x07, 0x04, 0x06, 0x04, 0x07},   // E
							 {0x03, 0x00, 0x00, 0x07, 0x04, 0x06, 0x04, 0x04},   // F
							 {0x04, 0x00, 0x00, 0x06, 0x08, 0x0B, 0x09, 0x06},   // G
							 {0x03, 0x00, 0x00, 0x05, 0x05, 0x07, 0x05, 0x05},   // H
							 {0x03, 0x00, 0x00, 0x07, 0x02, 0x02, 0x02, 0x07},   // I
							 {0x04, 0x00, 0x00, 0x01, 0x01, 0x01, 0x09, 0x06},   // J
							 {0x04, 0x00, 0x00, 0x09, 0x0A, 0x0C, 0x0A, 0x09},   // K
							 {0x03, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x07},   // L
							 {0x05, 0x00, 0x00, 0x11, 0x1B, 0x15, 0x11, 0x11},   // M
							 {0x04, 0x00, 0x00, 0x09, 0x0D, 0x0F, 0x0B, 0x09},   // N
							 {0x04, 0x00, 0x00, 0x06, 0x09, 0x09, 0x09, 0x06},   // O
							 {0x03, 0x00, 0x00, 0x07, 0x05, 0x07, 0x04, 0x04},   // P
							 {0x04, 0x00, 0x00, 0x06, 0x09, 0x09, 0x0B, 0x07},   // Q
							 {0x04, 0x00, 0x00, 0x0E, 0x09, 0x0E, 0x0A, 0x09},   // R
							 {0x04, 0x00, 0x00, 0x07, 0x08, 0x06, 0x01, 0x0E},   // S
							 {0x03, 0x00, 0x00, 0x07, 0x02, 0x02, 0x02, 0x02},   // T
							 {0x03, 0x00, 0x00, 0x05, 0x05, 0x05, 0x05, 0x07},   // U
							 {0x03, 0x00, 0x00, 0x05, 0x05, 0x05, 0x05, 0x02},   // V
							 {0x05, 0x00, 0x00, 0x11, 0x11, 0x11, 0x15, 0x0A},   // W
							 {0x03, 0x00, 0x00, 0x05, 0x05, 0x02, 0x05, 0x05},   // X
							 {0x03, 0x00, 0x00, 0x05, 0x05, 0x07, 0x02, 0x02},   // Y
							 {0x03, 0x00, 0x00, 0x07, 0x01, 0x02, 0x04, 0x07}};  // Z
