/***************************************************************************
 *   Copyright (c) 2014-2015 Nathan Miller    <Nathan.A.Mill[at]gmail.com> *
 *                           Balázs Bámer                                  *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#include "PreCompiled.h"
#ifndef _PreComp_
#include <TopoDS.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Precision.hxx>
#include <gp_Trsf.hxx>
#include <BRep_Tool.hxx>
#include <TopExp_Explorer.hxx>
#include <Standard_ConstructionError.hxx>
#include <GeomFill_BSplineCurves.hxx>
#include <GeomFill.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <StdFail_NotDone.hxx>
#endif

#include <Base/Tools.h>
#include <Base/Exception.h>

#include "FeatureBSplineSurface.h"


using namespace Surface;

PROPERTY_SOURCE(Surface::BSplineSurface, Surface::SurfaceFeature)


BSplineSurface::BSplineSurface() : SurfaceFeature()
{
}