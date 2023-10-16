#ifndef alphabethincluded
#define alphabethincluded

/*
 * Simple(ish) approximation of a static linear dictionary to hold coordinate
 * points of different letters for turtle method displayMessage to pull from.
 * A. Knight, July 2019
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include "point.hpp"

std::unordered_map<char, std::vector<Point>> Alphabet = {

    {'A',
     {Point(0, 0), Point(2.5, 5), Point(1.25, -2.5), Point(-2.5, 0),
      Point(2.5, 0), Point(1.25, -2.5)}},
    {'B',
     {Point(0, 0), Point(0, 5), Point(3.125, 0), Point(0.625, -0.625),
      Point(0, -1.25), Point(-0.625, -.625), Point(-3.125, 0), Point(3.125, 0),
      Point(0.625, -0.625), Point(0, -1.25), Point(-0.625, -.625),
      Point(-3.125, 0)}},
    {'C',
     {Point(3.75, 3.75), Point(-1.25, 1.25), Point(-2.5, 0),
      Point(-0.625, -0.625), Point(0, -3.75), Point(0.625, -0.625),
      Point(2.5, 0), Point(1.25, 1.25)}},
    {'D',
     {Point(0, 0), Point(0, 5), Point(3.125, 0), Point(0.625, -0.625),
      Point(0, -3.75), Point(-0.625, -0.625), Point(-3.125, 0)}},
    {'E',
     {Point(4, 5), Point(-4, 0), Point(0, -2.5), Point(3, 0), Point(-3, 0),
      Point(0, -2.5), Point(4, 0)}},
    {'F',
     {Point(4, 5), Point(-4, 0), Point(0, -2.5), Point(3, 0), Point(-3, 0),
      Point(0, -2.5)}},
    {'G',
     {Point(3.5, 3.75), Point(-1.25, 1.25), Point(-2.25, 0),
      Point(-0.625, -0.625), Point(0, -3.75), Point(0.625, -0.625),
      Point(2.25, 0), Point(1.25, 1.25), Point(-2, 0), Point(2.5, 0)}},
    {'H',
     {Point(0, 0), Point(0, 5), Point(0, -2.5), Point(3.25, 0), Point(0, 2.5),
      Point(0, -5)}},
    {'I',
     {Point(0, 0), Point(4, 0), Point(-2, 0), Point(0, 5), Point(-2, 0),
      Point(4, 0)}},
    {'J',
     {Point(0, 0.625), Point(0.625, -0.625), Point(1.25, 0),
      Point(0.625, 0.625), Point(0, 4.375)}},
    {'K',
     {Point(0, 0), Point(0, 5), Point(0, -2.5), Point(3, 2.5),
      Point(-2.25, -1.875), Point(2.25, -3.125)}},
    {'L', {Point(0, 5), Point(0, -5), Point(3, 0)}},
    {'M',
     {Point(0, 0), Point(0, 5), Point(2, -2.5), Point(2, 2.5), Point(0, -5)}},
    {'N', {Point(0, 0), Point(0, 5), Point(3, -5), Point(0, 5)}},
    {'O',
     {Point(4.375, 4.375), Point(-0.625, 0.625), Point(-2.5, 0),
      Point(-0.625, -0.625), Point(0, -3.75), Point(0.625, -0.625),
      Point(2.5, 0), Point(0.625, 0.625), Point(0, 3.75)}},
    {'P',
     {Point(0, 0), Point(0, 5), Point(3.125, 0), Point(0.625, -0.625),
      Point(0, -1.25), Point(-0.625, -.625), Point(-3.125, 0)}},
    {'Q',
     {Point(4.375, 4.375), Point(-0.625, 0.625), Point(-2.5, 0),
      Point(-0.625, -0.625), Point(0, -3.75), Point(0.625, -0.625),
      Point(2.5, 0), Point(0.3125, 0.3125), Point(-0.75, 0.75),
      Point(1.5, -1.5), Point(-0.75, 0.75), Point(0.3125, 0.3125),
      Point(0, 3.75)}},
    {'R',
     {Point(0, 0), Point(0, 5), Point(3.125, 0), Point(0.625, -0.625),
      Point(0, -1.25), Point(-0.625, -.625), Point(-3.125, 0),
      Point(3.75, -2.5)}},
    {'S',
     {Point(0, 0.625), Point(0.625, -0.625), Point(2.5, 0), Point(0.625, 0.625),
      Point(0, 1.25), Point(-0.375, 0.625), Point(-2.5, 0),
      Point(-0.625, 0.625), Point(0, 1.25), Point(0.625, 0.625), Point(2.5, 0),
      Point(0.625, -0.625)}},
    {'T', {Point(0, 5), Point(2, 0), Point(0, -5), Point(0, 5), Point(2, 0)}},
    {'U',
     {Point(0, 5), Point(0, -4.375), Point(0.625, -0.625), Point(2.5, 0),
      Point(0.625, 0.625), Point(0, 4.375)}},
    {'V', {Point(0, 5), Point(1.875, -5), Point(1.875, 5)}},
    {'W',
     {Point(0, 5), Point(0, -5), Point(2, 2.5), Point(2, -2.5), Point(0, 5)}},
    {'X',
     {Point(0, 0), Point(1.875, 2.5), Point(-1.875, 2.5), Point(1.875, -2.5),
      Point(1.875, 2.5), Point(-1.875, -2.5), Point(1.875, -2.5)}},
    {'Y',
     {Point(0, 5), Point(1.875, -2.5), Point(0, -2.5), Point(0, 2.5),
      Point(1.875, 2.5)}},
    {'Z', {Point(0, 5), Point(3.75, 0), Point(-3.75, -5), Point(3.75, 0)}},
    {'0',
     {Point(0, 0.625), Point(0, 3.75), Point(0.625, 0.625), Point(2.5, 0),
      Point(0.625, -0.625), Point(0, -3.75), Point(-0.625, -0.625),
      Point(-2.5, 0), Point(-0.625, 0.625), Point(3.75, 3.75)}},
    {'1',
     {Point(1.5, 3.5), Point(1.0, 1.5), Point(0, -5), Point(-1.25, 0),
      Point(2.5, 0)}},
    {'2',
     {Point(0, 4.375), Point(0.125, 0.625), Point(2.5, 0), Point(0.625, -0.625),
      Point(-3.75, -4.375), Point(3.75, 0)}},
    {'3',
     {Point(0, 4.375), Point(0.625, 0.625), Point(2.5, 0), Point(0.625, -0.625),
      Point(0, -1.125), Point(-1.25, -0.75), Point(1.25, -0.75),
      Point(0, -1.125), Point(-0.625, -0.625), Point(-2.5, 0),
      Point(-0.625, 0.625)}},
    {'4',
     {Point(0, 5), Point(0, -2.5), Point(3.5, 0), Point(0, 2.5), Point(0, -5)}},
    {'5',
     {Point(3.5, 5), Point(-3.5, 0), Point(0, -2.0), Point(2.5, 0),
      Point(1, -1), Point(0, -1), Point(-1, -1), Point(-2, 0), Point(-.5, .5)}},
    {'6',
     {Point(3.75, 4.375), Point(-0.625, 0.625), Point(-2.5, 0),
      Point(-0.625, -0.625), Point(0, -3.125), Point(0.625, -0.625),
      Point(2.5, 0), Point(0.625, 0.625), Point(0, 1), Point(-0.625, 0.625),
      Point(-1.975, 0), Point(-0.625, -0.625)}},
    {'7', {Point(0, 5), Point(3.75, 0), Point(-3.75, -5)}},
    {'8',
     {Point(0, 4.375), Point(0.625, 0.625), Point(2.5, 0), Point(0.625, -0.625),
      Point(0, -1.125), Point(-1.25, -0.75), Point(1.25, -0.75),
      Point(0, -1.125), Point(-0.625, -0.625), Point(-2.5, 0),
      Point(-0.625, 0.625), Point(0, 1.125), Point(2.5, 0.75),
      Point(-2.5, 0.75), Point(0, 1.125)}},
    {'9',
     {Point(0, 0.625), Point(0.625, -0.625), Point(2.5, 0), Point(0.625, 0.625),
      Point(0, 3.75), Point(-0.625, 0.625), Point(-2.5, 0),
      Point(-0.625, -0.625), Point(0, -1), Point(0.625, -0.625), Point(2.5, 0),
      Point(0.625, 1.875)}},
    {'.',
     {Point(0, 0), Point(0, .75), Point(.75, 0), Point(0, -.75),
      Point(-.75, 0)}},
    {' ', {Point(3.5, 0)}}};
#endif
