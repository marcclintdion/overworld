//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

//=======================================================================================================================
glClearColor( 0.6f, 1.0f, 1.0f, 1.0 );
glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
//----------------------------------------------------------------------------


//--
glViewport(1, 1, (((GLsizei)viewWidth * shadow_SIZE_MULTIPLIER)/shadow_SIZE_DIVISOR)-2,
                 (((GLsizei)viewWidth * shadow_SIZE_MULTIPLIER)/shadow_SIZE_DIVISOR)-2);
LoadIdentity(projectionMatrix);
PerspectiveMatrix(projectionMatrix, fieldOfView + fieldOfView_SHADOW, (GLfloat)viewWidth / (GLfloat)viewHeight, nearFarPlane_CAMERA[0],  nearFarPlane_CAMERA[1]);
#if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1
//Rotate(projectionMatrix, 0.0, 0.0, 1.0, -90.0);
#endif
//----

//==============
View_TRANSFORM();
//==============


//=========================================================================

shaderNumber = 11;
//----------


    #include "_MODEL_FOLDERS_/o21/o21_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o20/o20_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o19/o19_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o18/o18_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o17/o17_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o16/o16_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o15/o15_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o14/o14_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o13/o13_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o12/o12_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o11/o11_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o10/o10_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o9/o9_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o8_A/o8_A_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o8_B/o8_B_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o7/o7_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o6/o6_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o5/o5_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o4/o4_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o3/o3_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o2/o2_RENDER.cpp"  
    #include "_MODEL_FOLDERS_/o1/o1_RENDER.cpp"  

