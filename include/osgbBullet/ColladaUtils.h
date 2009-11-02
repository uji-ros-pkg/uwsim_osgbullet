/*************** <auto-copyright.pl BEGIN do not edit this line> **************
 *
 * osgBullet is (C) Copyright 2009 by Kenneth Mark Bryden
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 *************** <auto-copyright.pl END do not edit this line> ***************/

#ifndef __COLLADA_UTILS_H__
#define __COLLADA_UTILS_H__

#include <osgbBullet/Export.h>
#include <osg/Node>
#include <string>

class btDynamicsWorld;
class btRigidBody;

namespace osgbBullet
{


OSGBBULLET_EXPORT btRigidBody* loadDae( osg::Transform* node, const osg::NodePath& np, const std::string& daeName,
    btDynamicsWorld* dw=NULL );

}

#endif
