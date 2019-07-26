#ifndef __DrawingFrame__
#define __DrawingFrame__

/**
@file
Subclass of GeneratedDrawingFrame, which is generated by wxFormBuilder.
*/

#include "DrawingGenerated.h"
class wxDC; // forward declaration for wxDC

//// end generated include

/** Implementing GeneratedDrawingFrame */
class DrawingFrame : public GeneratedDrawingFrame
{
	protected:
		// Handlers for GeneratedDrawingFrame events.
		void OnPaint( wxPaintEvent& event );
        void OnMouseMove( wxMouseEvent& event );
	public:
		/** Constructor */
		DrawingFrame( wxWindow* parent = NULL );
	//// end generated class members
    private:
        void DrawOnDC(wxDC& dc);
	
};

#endif // __DrawingFrame__