// opevrupdateslavecallback.cxx -- OpenVR Device Setup
//
// Written by Andrea Zanoni, started Aug 2018
//
// Copyright (C) 2018  Andrea Zanoni - <andrea.zanoni at polimi.it>
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

/* Original Implementaton part of OSGOpenVRViewer:
 * 	https://github.com/ChrisDenham/osgopenvrviewer
 *      Author: Chris Denham
 *      Licence: 3-clause BSD-licence
 */
/*
 * openvrupdateslavecallback.cpp
 *
 *  Created on: Dec 18, 2015
 *      Author: Chris Denham
 */

#include "openvrupdateslavecallback.hxx"

void OpenVRUpdateSlaveCallback::updateSlave(osg::View& view, osg::View::Slave& slave)
{
	if (m_cameraType == LEFT_CAMERA)
	{
		m_device->updatePose();
	}

	osg::Vec3 position = m_device->position();
	osg::Quat orientation = m_device->orientation();

	osg::Matrix viewOffset = (m_cameraType == LEFT_CAMERA) ? m_device->viewMatrixLeft() : m_device->viewMatrixRight();

	viewOffset.preMultRotate(orientation);
	viewOffset.setTrans(viewOffset.getTrans() + position);

	slave._viewOffset = viewOffset;

	slave.updateSlaveImplementation(view);
}
