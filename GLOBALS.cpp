//===========================
#ifdef __APPLE__
NSString* filePathName = nil;
#endif
//===========================

GLuint      shaderNumber            = 0;

GLfloat     reflection              = 1.0;

GLfloat     screenRatio             = 1.0;


GLint getOpenGL_ExtentionValues;

//-----

int         countFrames     =  0;

time_t      gameTimerInit;
time_t      gameTimerEnd;

//-----

int         boxCount        =  1;
int         selectedModel   =  0;

GLfloat     collisionBoxArray[500][32];

bool        CONSOLE_OUTPUT                  =   false;

GLint       modelNumber                     =   0;

GLfloat     setPosition[3]                  =   {  0.0, 0.0, 0.0};
GLfloat     viewZoom                        =   1.0;
GLfloat     view_POSITION[]                 =   {  0.0, 0.0, 0.0, 1.0  };
GLfloat     view_ROTATION[]                 =   {  1.0, 0.0, 0.0, 0.0  };


GLfloat     fieldOfView                     =   30.0;
GLfloat     nearFarPlane_CAMERA[]           =   {  1, 1500.0 };

GLfloat     rotateModelWithMiddleMouse[]    =   {  0.0, 0.0  };
GLfloat     zoomModelWithMiddleMouse        =         0.0;
GLfloat     moveModelWithMiddleMouse[]      =   {  0.0, 0.0  };
//---------------------------------------------------------------------------------------

//=================================================================================================================
//-----------------------------------------------------------------------------------------------------------------                      
//=================================================================================================================  


    #include    "_TEXTURES/frameBufferPlane/frameBufferPlane_GLOBALS.cpp"

    #include    "_TEXTURES/cubeMaps/cubeMap_GLOBALS.cpp"

