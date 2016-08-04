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

/*
glEnable(GL_BLEND);
glCullFace(GL_NONE);
glEnable(GL_SAMPLE_ALPHA_TO_COVERAGE_ARB);  //--------------------------------------------ORDER INDEPENDANT TRANSPARENCY
glEnable(GL_ALPHA_TEST);
glAlphaFunc(GL_GEQUAL, 0.25f);
*/

shaderNumber = 11;//terrainBase


scaleModel = 1.0;

if(o1_isActive)
{
    o1_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o1/o1_RENDER.cpp"
}
if(o2_isActive)
{
    o2_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o2/o2_RENDER.cpp"
}
if(o3_isActive)
{
    o3_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o3/o3_RENDER.cpp"
}
if(o4_isActive)
{
    o4_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o4/o4_RENDER.cpp"
}
if(o5_isActive)
{
    o5_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o5/o5_RENDER.cpp"
}
if(o6_isActive)
{
    o6_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o6/o6_RENDER.cpp"
}
if(o7_isActive)
{
    o7_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o7/o7_RENDER.cpp"
}
if(o8_isActive)
{
    o8_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o8_B/o8_B_RENDER.cpp"
    #include "_MODEL_FOLDERS_/o8_A/o8_A_RENDER.cpp"
}
if(o9_isActive)
{
    o9_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o9/o9_RENDER.cpp"
}
if(o10_isActive)
{
    o10_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o10/o10_RENDER.cpp"
}
if(o11_isActive)
{
    o11_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o11/o11_RENDER.cpp"
}
if(o12_isActive)
{
    o12_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o12/o12_RENDER.cpp"
}
if(o13_isActive)
{
    o13_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o13/o13_RENDER.cpp"
}
if(o14_isActive)
{
    o14_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o14/o14_RENDER.cpp"
}
if(o15_isActive)
{
    o15_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o15/o15_RENDER.cpp"
}
if(o16_isActive)
{
    o16_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o16/o16_RENDER.cpp"
}
if(o17_isActive)
{
    o17_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o17/o17_RENDER.cpp"
}
if(o18_isActive)
{
    o18_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o18/o18_RENDER.cpp"
}
if(o19_isActive)
{
    o19_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o19/o19_RENDER.cpp"
}
if(o20_isActive)
{
    o20_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o20/o20_RENDER.cpp"
}
if(o21_isActive)
{
    o21_HEIGHT_GROUP_FUNCTION();
    #include "_MODEL_FOLDERS_/o21/o21_RENDER.cpp"
}

//====================================================================

shaderNumber = 9;//terrainSpheres


glEnable(GL_BLEND);
glCullFace(GL_NONE);
glEnable(GL_SAMPLE_ALPHA_TO_COVERAGE_ARB);  //--------------------------------------------ORDER INDEPENDANT TRANSPARENCY
glEnable(GL_ALPHA_TEST);
glAlphaFunc(GL_GEQUAL, 0.25f);
#include "LOCATIONS/HEIGHT_SPHERES_DISPLAY.cpp"
glDisable(GL_BLEND);
glCullFace(GL_BACK);
glDisable(GL_SAMPLE_ALPHA_TO_COVERAGE_ARB);  //--------------------------------------------ORDER INDEPENDANT TRANSPARENCY
glDisable(GL_ALPHA_TEST);


shaderNumber = 12;//player
#include "_MODEL_FOLDERS_/sphereDetection/sphereDetection_RENDER_.cpp"

