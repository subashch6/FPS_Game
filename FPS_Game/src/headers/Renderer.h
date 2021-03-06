#ifndef _RENDERER_H
#define _RENDERER_H

#include "GL/glew.h"


class Renderer
{
	
public:
	Renderer();
	~Renderer();
	void readyUp(GLuint , GLuint , int );
	void render(GLuint , GLuint , int );
	void coolDown();
private:
	int indexes = 0;
	GLuint program = NULL;
	GLuint vao = NULL;
	static double RED, GREEN, BLUE, ALPHA;
};

#endif _RENDERER_H