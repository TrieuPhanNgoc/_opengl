#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <GLES2/gl2.h>
#include <GLES3/gl3.h>
#include <iostream>
#include <functional>
using namespace std;

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}

void processInput(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

class drawing
{
    public:
        drawing() : m_majorVersion(3), m_minorVersion(3) {}
        ~drawing() {}

        void initialize()
        {
            // Initializing the glfw libraries
            glfwInit();
            glfwWindowHint(GLFW_VERSION_MAJOR, m_majorVersion);
            glfwWindowHint(GLFW_VERSION_MINOR, m_minorVersion);
        }

        void createWindowWiget(GLuint width, GLuint height, const char *title)
        {
            m_window = glfwCreateWindow(width, height, title, nullptr, nullptr);

            if (m_window == nullptr)
            {
                std::cout << "Failed to create GLFW window" << std::endl;
                glfwTerminate();
                return;
            }
        }

        void start()
        {
            // Makes the context of the specified window current for the calling thread.
            // This function makes the OpenGL or OpenGL ES context of the specified window current on the calling thread.
            glfwMakeContextCurrent(m_window);
            glfwSetFramebufferSizeCallback(m_window, framebuffer_size_callback);
        }

    protected:
        void createShader();


    protected:
        uint32_t m_majorVersion;
        uint32_t m_minorVersion;
        GLFWwindow *m_window;
};

int main()
{

    drawing *m_drawing;

    return 0;
}