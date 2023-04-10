#ifndef CUBE_H
#define CUBE_H

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Cube {
public:
    Cube();
    ~Cube();

    void draw(GLuint shaderProgram) const;

private:
    GLuint VAO, VBO, EBO;
};

#endif // CUBE_H
