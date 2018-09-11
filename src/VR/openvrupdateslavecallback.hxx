// opevrupdateslavecallback.hxx -- OpenVR Device Setup
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
 * openvrupdateslavecallback.h
 *
 *  Created on: Dec 18, 2015
 *      Author: Chris Denham
 */

#ifndef _OSG_OPENVRUPDATESLAVECALLBACK_H_
#define _OSG_OPENVRUPDATESLAVECALLBACK_H_

#include <osgViewer/View>

#include "openvrdevice.hxx"


struct OpenVRUpdateSlaveCallback : public osg::View::Slave::UpdateSlaveCallback
{
	enum CameraType
	{
		LEFT_CAMERA,
		RIGHT_CAMERA
	};

	OpenVRUpdateSlaveCallback(CameraType cameraType, OpenVRDevice* device) :
		m_cameraType(cameraType),
		m_device(device)
	{}

	virtual void updateSlave(osg::View& view, osg::View::Slave& slave);

	CameraType m_cameraType;
	osg::ref_ptr<OpenVRDevice> m_device;
};

#endif // _OSG_OPENVRUPDATESLAVECALLBACK_H_
