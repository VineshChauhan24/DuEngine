#pragma once
#include "stdafx.h"
#include "FrameBuffer.h"

class ShaderToyScreenBuffer : public FrameBuffer
{
	friend class ShaderToyGeometry;
public:
	ShaderToyScreenBuffer(ShaderToyGeometry * _geometry, int numChannels = 0);
	
public:
	GLuint getID() override;
	void reshape(int _width, int _height) override;
	void reset() override;
};
