#include <GL/glut.h>
#include <cmath> // ত্রিকোণমিতি ফাংশন ব্যবহারের জন্য

void drawHouse() {
    glClear(GL_COLOR_BUFFER_BIT); // স্ক্রিন পরিষ্কার করা

    //road section
    glColor3f(0.196f, 0.196f, 0.196f);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f, -10.0f); // নিচের বাঁ পয়েন্ট
    glVertex2f(-10.0f, -10.0f);  // নিচের ডান পয়েন্ট
    glVertex2f(-10.0f, -5.0f);   // উপরের ডান পয়েন্ট
    glVertex2f(10.0f, -5.0f);  // উপরের বাঁ পয়েন্ট
    glEnd();

    //Land section
    glColor3f(0.565f, 0.933f, 0.565f);
    glBegin(GL_POLYGON);
    glVertex2f(10.0f, -5.0f);
    glVertex2f(-10.0f, -5.0f);
    glVertex2f(-10.0f, 1.0f);
    glVertex2f(10.0f, 1.0f);
    glEnd();

    glColor3f(0.5f, 0.3f, 0.2f); // বাদামী রঙ
    glBegin(GL_POLYGON);
    glVertex2f(-9.0f, 2.0f); // নিচের বাঁ পয়েন্ট
    glVertex2f(-1.0f, 2.0f);  // নিচের ডান পয়েন্ট
    glVertex2f(-1.0f, -3.0f);   // উপরের ডান পয়েন্ট
    glVertex2f(-9.0f, -3.0f);  // উপরের বাঁ পয়েন্ট
    glEnd();

    // ছাদ (ত্রিভুজ)
    glColor3f(1.0f, 0.0f, 0.0f); // লাল রঙ
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 2.0f);  // বাঁ পয়েন্ট
    glVertex2f(-10.0f, 2.0f);   // ডান পয়েন্ট
    glVertex2f(-5.0f, 6.0f);   // উপরের পয়েন্ট (ত্রিভুজের শীর্ষ)
    glEnd();

    // door
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-6.0f,0.0f);
    glVertex2f(-6.0f,-3.0f);
    glVertex2f(-4.0f,-3.0f);
    glVertex2f(-4.0f,0.0f);
    glEnd();

    //window
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-8.5f, 0.0f);
    glVertex2f(-8.5f, -2.0f);
    glVertex2f(-7.0f, -2.0f);
    glVertex2f(-7.0f, 0.0f);
    glEnd();

    //windows
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-3.0f, 0.0f);
    glVertex2f(-1.5f, 0.0f);
    glVertex2f(-1.5f, -2.0f);
    glVertex2f(-3.0f, -2.0f);
    glEnd();

        // Sun
    glColor3f(1.0f, 0.85f, 0.0f);
    float sunX = 8.5f, sunY = 8.0f, sunRadius = 1.5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(sunX, sunY);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = sunRadius * cos(angle);
        float y = sunRadius * sin(angle);
        glVertex2f(sunX + x, sunY + y);
    }
    glEnd();

    

    //Full tree start

    //body
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f,2.0f);
    glVertex2f(-0.5f,-4.0f);
    glVertex2f(1.0f,-4.0f);
    glVertex2f(1.0f,2.0f);
    glEnd();

    //top leep
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    float leep1X = 0.5f, leep1Y = 2.0f, leep1Radius = 1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep1X, leep1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep1Radius * cos(angle);
        float y = leep1Radius * sin(angle);
        glVertex2f(leep1X + x, leep1Y + y);
    }
    glEnd();
    
    //leep 2
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    float leep2X = -1.0f, leep2Y = 1.5f, leep2Radius = 1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep2X, leep2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep2Radius * cos(angle);
        float y = leep2Radius * sin(angle);
        glVertex2f(leep2X + x, leep2Y + y);
    }
    glEnd();

    //leep3
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    float leep3X = 1.5f, leep3Y = 1.5f, leep3Radius = 1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep3X, leep3Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep3Radius * cos(angle);
        float y = leep3Radius * sin(angle);
        glVertex2f(leep3X + x, leep3Y + y);
    }
    glEnd();

    //leep 4
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    float leep4X = -1.5f, leep4Y = 2.5f, leep4Radius = 1.4f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep4X, leep4Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep4Radius * cos(angle);
        float y = leep4Radius * sin(angle);
        glVertex2f(leep4X + x, leep4Y + y);
    }
    glEnd();

    //leep 5
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    float leep5X = -1.7f, leep5Y = 4.5f, leep5Radius = 1.4f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep5X, leep5Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep5Radius * cos(angle);
        float y = leep5Radius * sin(angle);
        glVertex2f(leep5X + x, leep5Y + y);
    }
    glEnd();

    //leep 6
    
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    float leep6X = 2.0f, leep6Y = 3.7f, leep6Radius = 1.6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep6X, leep6Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep6Radius * cos(angle);
        float y = leep6Radius * sin(angle);
        glVertex2f(leep6X + x, leep6Y + y);
    }
    glEnd();

    //leep 7
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    float leep7X = 0.5f, leep7Y = 5.5f, leep7Radius = 1.6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep7X, leep7Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep7Radius * cos(angle);
        float y = leep7Radius * sin(angle);
        glVertex2f(leep7X + x, leep7Y + y);
    }
    glEnd();
    
    //leep 8
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    float leep8X = 0.5f, leep8Y = 3.5f, leep8Radius = 1.6f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(leep8X, leep8Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = leep8Radius * cos(angle);
        float y = leep8Radius * sin(angle);
        glVertex2f(leep8X + x, leep8Y + y);
    }
    glEnd();


    //s-tree 2
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(-3.6f, -5.0f);
    glVertex2f(-3.4f, -5.0f);
    glVertex2f(-3.4f, -4.6f);
    glVertex2f(-3.6f, -4.6f);
    glEnd();

    //triangle
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.0f, -4.6f);
    glVertex2f(-3.0f, -4.6f);
    glVertex2f(-3.5f, -3.8f);


   

    //triangle
    
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.0f, -4.2f);  
    glVertex2f(-3.0f, -4.2f);  
    glVertex2f(-3.5f, -3.2f);   
    glEnd();


    // small trees
    //s-tree 1
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(-9.4f, -5.0f);
    glVertex2f(-9.2f,-5.0f);
    glVertex2f(-9.2f,-4.6f);
    glVertex2f(-9.4f,-4.6f);
    glEnd();

    // 
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(-9.8f, -4.6f);  
    glVertex2f(-8.8f, -4.6f);   
    glVertex2f(-9.3f, -4.0f); 
    glEnd();

    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(-9.8f, -4.3f);  
    glVertex2f(-8.8f, -4.3f);   
    glVertex2f(-9.3f, -3.2f);   
    glEnd();

    //tree small 3
     glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(1.4f, -5.0f);
    glVertex2f(1.6f,-5.0f);
    glVertex2f(1.6f,-4.6f);
    glVertex2f(1.4f,-4.6f);
    glEnd();

    //triangle
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(1.0f, -4.6f);  
    glVertex2f(2.0f, -4.6f);   
    glVertex2f(1.5f, -3.8f); 
    glEnd();

     //triangle
    
    glBegin(GL_TRIANGLES);
    glVertex2f(1.0f, -4.2f);  
    glVertex2f(2.0f, -4.2f);  
    glVertex2f(1.5f, -3.2f);   
    glEnd();

    // tree small 4
    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(6.4f, -5.0f);
    glVertex2f(6.6f,-5.0f);
    glVertex2f(6.6f,-4.6f);
    glVertex2f(6.4f,-4.6f);
    glEnd();

    //triangle
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(6.0f, -4.6f);  
    glVertex2f(7.0f, -4.6f);   
    glVertex2f(6.5f, -3.8f);   

    glBegin(GL_TRIANGLES);
    glVertex2f(6.0f, -4.2f);  
    glVertex2f(7.0f, -4.2f);  
    glVertex2f(6.5f, -3.2f);   
    glEnd();

    // small tree 5

    glColor3f(0.55f, 0.27f, 0.07f);
    glBegin(GL_POLYGON);
    glVertex2f(9.8f, -5.0f);
    glVertex2f(10.0f,-5.0f);
    glVertex2f(10.0f,-4.6f);
    glVertex2f(9.8f,-4.6f);
    glEnd();

     //triangle
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
    glVertex2f(9.4f, -4.6f);  
    glVertex2f(10.2f, -4.6f);   
    glVertex2f(9.9f, -3.8f);   
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(9.4f, -4.2f);  
    glVertex2f(10.2f, -4.2f);  
    glVertex2f(9.9f, -3.2f);   
    glEnd();

    // mountend
    glColor3f(0.4f, 0.2f, 0.1f);
    glBegin(GL_TRIANGLES);
    glVertex2f(6.0f, 1.0f);  
    glVertex2f(10.0f, 1.0f);  
    glVertex2f(8.0f, 7.0f);   
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(3.0f, 1.0f);  
    glVertex2f(7.0f, 1.0f);  
    glVertex2f(5.5f, 6.0f);   
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(4.0f, 1.0f);  
    glVertex2f(8.0f, 1.0f);  
    glVertex2f(6.5f, 5.0f);   
    glEnd();

     glBegin(GL_TRIANGLES);
    glVertex2f(7.0f, 1.0f);  
    glVertex2f(12.0f, 1.0f);  
    glVertex2f(9.5f, 8.0f);   
    glEnd();


    //lamp post
    //lamp post 1
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-6.6f, -5.0f);
    glVertex2f(-6.5f,-5.0f);
    glVertex2f(-6.5f,-1.5f);
    glVertex2f(-6.6f,-1.5f);
    glEnd();

    //light
    glColor3f(1.0f, 0.9f, 0.7f);
    float light1X = -6.5f, light1Y = -1.0f, light1Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(light1X, light1Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = light1Radius * cos(angle);
        float y = light1Radius * sin(angle);
        glVertex2f(light1X + x, light1Y + y);
    }
    glEnd();

    //lamp 2
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, -5.0f);
    glVertex2f(-0.9f,-5.0f);
    glVertex2f(-0.9f,-1.5f);
    glVertex2f(-1.0f,-1.5f);
    glEnd();

    //light2
    glColor3f(1.0f, 0.9f, 0.7f);
    float light2X = -1.0f, light2Y = -1.0f, light2Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(light2X, light2Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = light2Radius * cos(angle);
        float y = light2Radius * sin(angle);
        glVertex2f(light2X + x, light2Y + y);
    }
    glEnd();

    //lamp 3
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(4.5f, -5.0f);
    glVertex2f(4.6f,-5.0f);
    glVertex2f(4.6f,-1.5f);
    glVertex2f(4.5f,-1.5f);
    glEnd();

    //light2
    glColor3f(1.0f, 0.9f, 0.7f);
    float light3X = 4.55f, light3Y = -1.0f, light3Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(light3X, light3Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = light3Radius * cos(angle);
        float y = light3Radius * sin(angle);
        glVertex2f(light3X + x, light3Y + y);
    }
    glEnd();

    //lamp 4
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(8.1f, -5.0f);
    glVertex2f(8.2f,-5.0f);
    glVertex2f(8.2f,-1.5f);
    glVertex2f(8.1f,-1.5f);
    glEnd();

    //light4
    glColor3f(1.0f, 0.9f, 0.7f);
    float light4X = 8.15f, light4Y = -1.0f, light4Radius = .5f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(light4X, light4Y);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = light4Radius * cos(angle);
        float y = light4Radius * sin(angle);
        glVertex2f(light4X + x, light4Y + y);
    }
    glEnd();
    
     







    

    glFlush(); 
}

void init() {
    glClearColor(0.529f, 0.808f, 0.922f, 1.0f); 
    gluOrtho2D(-10, 10, -10, 10); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); 
    glutCreateWindow("Simple House in OpenGL"); 
    glutInitWindowSize(1920, 1080); 
    init(); 
    glutDisplayFunc(drawHouse); 
    glutMainLoop(); 
    return 0;
}



