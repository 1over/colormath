/*
 * utils.h
 * Part of https://github.com/1over/colormath by Andrii Buriachevskyi.
 * See LICENSE for details.
 */

#ifndef UTILS_H
#define UTILS_H

#include "colors.h"

double rgbhex_distance(int hex1, int hex2);

rgb_t hex2rgb(int hex);

/*
 * Based on http://github.com/gfiumara/CIEDE2000
 */
double ciede2000( lab_t lab1, lab_t lab2 );
double deg2rad( const double deg );
double rad2deg( const double rad );

#endif /* UTILS_H */
