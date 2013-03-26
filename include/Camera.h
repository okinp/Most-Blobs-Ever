#pragma once
#include "cinder/Rect.h"

namespace MBE {
	class Camera
	{
	public:
		Camera(void);
		~Camera(void);
		void setLocalDimensions( int xOffset, int yOffset, int localWidth, int localHeight);
		void setMasterDimensions( int masterWidth, int masterHeight );
		void draw();

	private:
		ci::Rectf	m_LocalFrame;
		ci::Rectf	m_GlobalFrame;
	};
}