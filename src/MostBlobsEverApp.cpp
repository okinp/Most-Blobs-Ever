#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MostBlobsEverApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void MostBlobsEverApp::setup()
{
}

void MostBlobsEverApp::mouseDown( MouseEvent event )
{
}

void MostBlobsEverApp::update()
{
}

void MostBlobsEverApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( MostBlobsEverApp, RendererGl )
