// opevrnode.hxx -- OpenVR OSG Node Setup
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

/* Original Implementation part of OSGOpenVRViewer:
 * 	https://github.com/ChrisDenham/osgopenvrviewer
 *      Author: Chris Denham
 */

#ifndef _OSG_OPENVRNODE_H_
#define _OSG_OPENVRNODE_H_

#include <osg/Group>

#include "openvrdevice.hxx"

// Forward declaration
namespace osgViewer
{
	class View;
}

class OpenVRNode : public osg::Group
{
public:
	OpenVRNode(osg::View* view, osg::ref_ptr<OpenVRDevice> dev, osg::ref_ptr<OpenVRRealizeOperation> realizeOperation) : osg::Group(),
		m_configured(false),
		m_view(view),
		m_cameraRTTLeft(nullptr), m_cameraRTTRight(nullptr),
		m_device(dev),
		m_realizeOperation(realizeOperation)
	{};
	virtual void traverse(osg::NodeVisitor& nv);
	void setConfigured(bool isConfigured) {m_configured = isConfigured;};
protected:
	~OpenVRNode() {};
	// virtual void configure();

	bool m_configured;

	osg::observer_ptr<osg::View> m_view;
	osg::observer_ptr<osg::Camera> m_cameraRTTLeft, m_cameraRTTRight;
	osg::observer_ptr<OpenVRDevice> m_device;
	osg::observer_ptr<OpenVRRealizeOperation> m_realizeOperation;
};

#endif /* _OSG_OPENVRNODE_H_ */
