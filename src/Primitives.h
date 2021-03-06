/*
 Animata

 Copyright (C) 2007 Peter Nemeth, Gabor Papp, Bence Samu
 Kitchen Budapest, <http://animata.kibu.hu/>

 This file is part of Animata.

 Animata is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Animata is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Animata. If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef __PRIMITIVES_H__
#define __PRIMITIVES_H__

#include "Bone.h"
#include "Joint.h"
#include "Layer.h"

#define fillColor(r, g, b, a) \
{ \
    fillColorR = (r)/255.0f; \
    fillColorG = (g)/255.0f; \
    fillColorB = (b)/255.0f; \
    fillColorA = (a)/255.0f; \
    doFill = true; \
}

#define strokeColor(r, g, b, a) \
{ \
    strokeColorR = (r)/255.0f; \
    strokeColorG = (g)/255.0f; \
    strokeColorB = (b)/255.0f; \
    strokeColorA = (a)/255.0f; \
    doStroke = true; \
}

namespace Animata
{

class Primitives
{
public:
    static void drawCrossHairs(Layer *l);

    static void drawBone(Bone *b, int mouseOver, int active);
    static void drawBoneWhileConnecting(const Vector2D& p1, const Vector2D& p2);

    static void drawJoint(Joint *j, int mouseOver, int active);

    static void drawVertex(Vertex *v, int mouseOver, int active);
    static void drawVertexAttached(Vertex *v);

    static void drawFace(Face *face, int mouseOver = 0, int active = 1);
    static void drawFaceWhileConnecting(const Vector2D& p1, const Vector2D& p2);

    static void drawSelectionBox(const Vector2D& p1, const Vector2D& p2);
    static void drawSelectionCircle(const Vector2D& c, float r);

    static void fill(bool b);
    static void stroke(bool b);
    static void strokeWeight(float w);

    static void drawLine(const Vector2D& p1, const Vector2D& p2);
    static void drawCircle(const Vector2D& c, float r);
    static void drawRect(const Vector2D& p, float size);
    static void drawTriangle(const Vector2D& p1, const Vector2D& p2,
                             const Vector2D& p3);

private:

    static float fillColorR;
    static float fillColorG;
    static float fillColorB;
    static float fillColorA;

    static float strokeColorR;
    static float strokeColorG;
    static float strokeColorB;
    static float strokeColorA;

    static bool doStroke;
    static bool doFill;
    static float strokeW;

    static float boneSize;
    static float jointSize;
    static float vertexSize;
    static float border;
    static int dAlpha;

    static void drawLine(float x1, float y1, float x2, float y2);
};

} /* namespace Animata */

#endif

