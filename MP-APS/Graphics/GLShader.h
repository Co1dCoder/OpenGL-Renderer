#pragma once
#include <glad/glad.h>

#include <array>

class GLShader {
public:
	GLShader(const std::string_view path, const int type);
	GLShader(const std::string_view path, const std::string_view type);

	void AttachShader(const GLuint Program) const;
	void DetachShader(const GLuint Program) const;
	void DeleteShader() const;

private:
	void compile(const GLchar* shaderCode);

	GLuint m_shaderID;

	// For compilation errors
	GLint m_success;
	std::array<GLchar, 1024> m_infoLog;
};