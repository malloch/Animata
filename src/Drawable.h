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

#ifndef __DRAWABLE_H__
#define __DRAWABLE_H__

namespace Animata
{

/// This class gets inherited by primitives which can be selected by Selection::doSelection()
class Drawable
{
public:

    virtual ~Drawable() {}

    /**
     * Pure virtual function for drawing the primitive.
     * \param mode      Various rendering modes implemented by children classes.
     * \param active    Shows if the primitive is on the active layer, so it can
     *                  be drawn in a different way if not active.
     *                  Default value is 1.
     */
    virtual void draw(int mode, int active = 1) = 0;

    /**
     * Selects the i-th sub-element of the primitive with the given type.
     * \param i     The number of the sub-element in it's array.
     * \param type  Type of the sub-element. This helps when the primitive has
     *              more sub-element.
     */
    virtual void select(unsigned i, int type) = 0;

    /**
     * Selects the i-th sub-element of the primitive with the given type in the
     * given circle.
     * \param i     The number of the sub-element in it's array.
     * \param type  Type of the sub-element. This helps when the primitive has
     *              more sub-element.
     * \param xc    \e x coordinate of the selection circle's center.
     * \param yc    \e y coordinate of the selection circle's center.
     * \param r     Radius of the selection circle's center.
     */
    virtual void circleSelect(unsigned i, int type, const Vector2D& center,
                              float r) = 0;
};

} /* namespace Animata */

#endif

