#include "..\include\Camera.h"
#include "cinder\Rect.h"
#include "cinder\gl\gl.h"
namespace MBE {
	Camera::Camera(void)
	{

	}
	Camera::~Camera(void)
	{

	}

	void Camera::setLocalDimensions( int xOffset, int yOffset, int localWidth, int localHeight )
	{
		m_LocalFrame = ci::Rectf( xOffset,yOffset, xOffset + localWidth, yOffset + localHeight );
	}

	void Camera::setMasterDimensions( int masterWidth, int masterHeight )
	{
		m_GlobalFrame = ci::Rectf( 0,0, masterWidth, masterHeight );
	}

	void Camera::draw()
	{
		ci::gl::drawStrokedRect(m_LocalFrame);
	}

}