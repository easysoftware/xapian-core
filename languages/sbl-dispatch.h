/** @file
 *  @brief Map string to language code
 */
/* Warning: This file is generated by ./languages/collate-sbl - do not modify directly! */
/* Copyright (C) 2007,2012,2013,2015 Olly Betts
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef XAPIAN_INCLUDED_SBL_DISPATCH_H
#define XAPIAN_INCLUDED_SBL_DISPATCH_H

enum sbl_code {
    NONE = 0,
    ARABIC = 1,
    ARMENIAN = 2,
    BASQUE = 3,
    CATALAN = 4,
    CZECH = 5,
    DANISH = 6,
    DUTCH = 7,
    EARLYENGLISH = 8,
    ENGLISH = 9,
    FINNISH = 10,
    FRENCH = 11,
    GERMAN = 12,
    HUNGARIAN = 13,
    INDONESIAN = 14,
    IRISH = 15,
    ITALIAN = 16,
    LITHUANIAN = 17,
    LOVINS = 18,
    NEPALI = 19,
    NORWEGIAN = 20,
    POLISH = 21,
    PORTER = 22,
    PORTUGUESE = 23,
    ROMANIAN = 24,
    RUSSIAN = 25,
    SLOVAK = 26,
    SPANISH = 27,
    SWEDISH = 28,
    TAMIL = 29,
    TURKISH = 30
};

static const unsigned char tab[] = {
    12,

    1,0, (255&255),(255>>8), 1,0, (0&255),(0>>8), (60&255),(60>>8), (184&255),(184>>8), (119&255),(119>>8), (20&255),(20>>8),
    (39&255),(39>>8), (85&255),(85>>8), 1,0, (6&255),(6>>8),

    (1 - 1),
    NONE, 'n','o','n','e',

    (1 - 1),
    EARLYENGLISH, 'e','a','r','l','y','e','n','g','l','i','s','h',

    (2 - 1),
    ARMENIAN, 'a','r','m','e','n','i','a','n',
    ROMANIAN, 'r','o','m','a','n','i','a','n',

    (2 - 1),
    HUNGARIAN, 'h','u','n','g','a','r','i','a','n',
    NORWEGIAN, 'n','o','r','w','e','g','i','a','n',

    (4 - 1),
    CZECH, 'c','z','e','c','h',
    DUTCH, 'd','u','t','c','h',
    IRISH, 'i','r','i','s','h',
    TAMIL, 't','a','m','i','l',

    (3 - 1),
    INDONESIAN, 'i','n','d','o','n','e','s','i','a','n',
    LITHUANIAN, 'l','i','t','h','u','a','n','i','a','n',
    PORTUGUESE, 'p','o','r','t','u','g','u','e','s','e',

    (8 - 1),
    CATALAN, 'c','a','t','a','l','a','n',
    ENGLISH, 'e','n','g','l','i','s','h',
    FINNISH, 'f','i','n','n','i','s','h',
    ITALIAN, 'i','t','a','l','i','a','n',
    RUSSIAN, 'r','u','s','s','i','a','n',
    SPANISH, 's','p','a','n','i','s','h',
    SWEDISH, 's','w','e','d','i','s','h',
    TURKISH, 't','u','r','k','i','s','h',

    (10 - 1),
    ARABIC, 'a','r','a','b','i','c',
    BASQUE, 'b','a','s','q','u','e',
    DANISH, 'd','a','n','i','s','h',
    FRENCH, 'f','r','e','n','c','h',
    GERMAN, 'g','e','r','m','a','n',
    LOVINS, 'l','o','v','i','n','s',
    NEPALI, 'n','e','p','a','l','i',
    POLISH, 'p','o','l','i','s','h',
    PORTER, 'p','o','r','t','e','r',
    SLOVAK, 's','l','o','v','a','k',

    (29 - 1),
    ARABIC, 'a','r',
    CATALAN, 'c','a',
    CZECH, 'c','z',
    DANISH, 'd','a',
    GERMAN, 'd','e',
    ENGLISH, 'e','n',
    SPANISH, 'e','s',
    BASQUE, 'e','u',
    FINNISH, 'f','i',
    FRENCH, 'f','r',
    IRISH, 'g','a',
    HUNGARIAN, 'h','u',
    ARMENIAN, 'h','y',
    INDONESIAN, 'i','d',
    ITALIAN, 'i','t',
    LITHUANIAN, 'l','t',
    NORWEGIAN, 'n','b',
    NEPALI, 'n','e',
    DUTCH, 'n','l',
    NORWEGIAN, 'n','n',
    NORWEGIAN, 'n','o',
    POLISH, 'p','l',
    PORTUGUESE, 'p','t',
    ROMANIAN, 'r','o',
    RUSSIAN, 'r','u',
    SLOVAK, 's','k',
    SWEDISH, 's','v',
    TAMIL, 't','a',
    TURKISH, 't','r'
};

#define LANGSTRING "arabic armenian basque catalan czech danish dutch earlyenglish english finnish french german hungarian indonesian irish italian lithuanian lovins nepali norwegian polish porter portuguese romanian russian slovak spanish swedish tamil turkish"

#endif