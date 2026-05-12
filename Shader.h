#pragma once
#include <GL/glew.h>
#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader {
public:
    unsigned int ID;
    Shader(const char* vertexPath, const char* fragmentPath);
    void use();
    void setFloat(const std::string& name, float value);
    void setInt(const std::string& name, int value);
    void setVec3(const std::string& name, float x, float y, float z);
    void setVec3(const std::string& name, const glm::vec3& value);
    void setVec4(const std::string& name, float x, float y, float z, float w);
    void setMat3(const std::string& name, glm::mat3 mat);
    void setMat4(const std::string& name, glm::mat4 mat);
};