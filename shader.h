#ifndef SHADER_H
#define SHADER_H

#include <GL/glew.h>
#include <string>

class Shader {
public:
    Shader(const std::string& vertexShaderSource, const std::string& fragmentShaderSource);
    ~Shader();

    void use() const;
    GLuint getProgram() const;

private:
    GLuint compileShader(GLenum shaderType, const std::string& shaderSource) const;
    GLuint program;
};

#endif // SHADER_H
