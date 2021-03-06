/*constant.h
*@brief Define some constant variables
*@Author: wang_kejie@foxmail.com
*@Date: 2015/12/29
*/
#ifndef _CONSTANT_H_
#define _CONSTANT_H_

#include <cmath>
#include "lighting.h"

static const double PI = 2 * asin(1);

/*
*view constant
*/
static float eyex = 0.0f;
static float eyey = -5.0f;
static const float eyez = 0.0f;

/*
*window constant
*/
static const int WINWIDTH = 800;
static const int WINHEIGHT = 500;

/*
*tunnel slice constant
*/
static const int FACENUM = 12;
static const int ANGLESPAN = 360 / FACENUM;

static const float SLICERADIUS = 10.0f;
static const float SLICETHICKNESS = 6.0f;
static const float PATHWIDTH = 2 * SLICERADIUS * sin(PI / 12);
static const float PATHHEIGHT = 2 * SLICERADIUS * cos(PI / 12);
static const int SLICESPLITNUM = 10;

/*
*tunnel constant
*/
static const float TUNNELLENGTH = 600.0f;
static const int SLICENUMS = 100.0;//TUNNELLENGTH / SLICETHICKNESS;

/*
*Bezier path constant
*/
static const float CTRPOINTSDDST = 50.0f;
static const float RADIUSDIFFSPAN = 20.0f;

/*
*Obstacle parameter
*/
static float OBSTACLECOLOR[6][3] = 
{
	{ 1.0f, 0.2f, 0.2f },
	{ 0.2f, 1.0f, 0.2f },
	{ 0.2f, 0.2f, 1.0f },
	{ 1.0f, 1.0f, 0.0f },
	{ 1.0f, 0.0f, 1.0f },
	{ 0.0f, 1.0f, 1.0f }
};

/*
*game setting
*/
static int DIFFICULTY = 100;


static Lighting light;
#endif