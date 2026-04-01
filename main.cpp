#include <GL/freeglut.h>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'w':
        case 'W':
            break;
        case 'a':
        case 'A':
            break;
        case 's':
        case 'S':
            break;
        case 'd':
        case 'D':
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);

    int screenWidth = glutGet(GLUT_SCREEN_WIDTH);
    int screenHeight = glutGet(GLUT_SCREEN_HEIGHT);
    glutInitWindowPosition((screenWidth - WINDOW_WIDTH) / 2, (screenHeight - WINDOW_HEIGHT) / 2);

    glutCreateWindow("Sort the Boxes or be Fired");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
