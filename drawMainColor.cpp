//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    //=======================================================================================================================
    //glClearColor( 247.0/255.0f, 247.0/255.0f, 247.0/255.0f, 1.0 );
    glClearColor( .0f, .0f, .0f, 1.0 );
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // GL_STENCIL_BUFFER_BIT
//------------------------------------------------------------------------------
    


    glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
    LoadIdentity(projectionMatrix);
    PerspectiveMatrix(projectionMatrix, fieldOfView, (GLfloat)viewWidth / (GLfloat)viewHeight, nearFarPlane_CAMERA[0],  nearFarPlane_CAMERA[1]);
    #if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1
    //Rotate(projectionMatrix, 0.0, 0.0, 1.0, -90.0);
    #endif
    //----

//==============
View_TRANSFORM();
//==============


shaderNumber = 11;//terrainBase


#include "LOCATIONS/HEIGHT_SPHERES_DISPLAY.cpp"


if(o1_isActive)
{
       #include "_MODEL_FOLDERS_/o1/o1_RENDER.cpp"
}
if(o2_isActive)
{
    #include "_MODEL_FOLDERS_/o2/o2_RENDER.cpp"
}
if(o3_isActive)
{
    #include "_MODEL_FOLDERS_/o3/o3_RENDER.cpp"
}
if(o4_isActive)
{
    #include "_MODEL_FOLDERS_/o4/o4_RENDER.cpp"
}
if(o5_isActive)
{
    #include "_MODEL_FOLDERS_/o5/o5_RENDER.cpp"
}
if(o6_isActive)
{
    #include "_MODEL_FOLDERS_/o6/o6_RENDER.cpp"
}
if(o7_isActive)
{
    #include "_MODEL_FOLDERS_/o7/o7_RENDER.cpp"
}
if(o8_isActive)
{
    #include "_MODEL_FOLDERS_/o8_B/o8_B_RENDER.cpp"
}
if(o8_isActive)
{
    #include "_MODEL_FOLDERS_/o8_A/o8_A_RENDER.cpp"
}
if(o9_isActive)
{
    #include "_MODEL_FOLDERS_/o9/o9_RENDER.cpp"
}
if(o10_isActive)
{
    #include "_MODEL_FOLDERS_/o10/o10_RENDER.cpp"
}
if(o11_isActive)
{
    #include "_MODEL_FOLDERS_/o11/o11_RENDER.cpp"
}
if(o12_isActive)
{
    #include "_MODEL_FOLDERS_/o12/o12_RENDER.cpp"
}
if(o13_isActive)
{
    #include "_MODEL_FOLDERS_/o13/o13_RENDER.cpp"
}
if(o14_isActive)
{
    #include "_MODEL_FOLDERS_/o14/o14_RENDER.cpp"
}
if(o15_isActive)
{
    #include "_MODEL_FOLDERS_/o15/o15_RENDER.cpp"
}
if(o16_isActive)
{
    #include "_MODEL_FOLDERS_/o16/o16_RENDER.cpp"
}
if(o17_isActive)
{
    #include "_MODEL_FOLDERS_/o17/o17_RENDER.cpp"
}
if(o18_isActive)
{
    #include "_MODEL_FOLDERS_/o18/o18_RENDER.cpp"
}
if(o19_isActive)
{
    #include "_MODEL_FOLDERS_/o19/o19_RENDER.cpp"
}
if(o20_isActive)
{
    #include "_MODEL_FOLDERS_/o20/o20_RENDER.cpp"
}
if(o21_isActive)
{
    #include "_MODEL_FOLDERS_/o21/o21_RENDER.cpp"
}



    #include "_MODEL_FOLDERS_/sphereDetection/sphereDetection_RENDER_.cpp"

