//==================================
#ifdef __APPLE__
#include <TargetConditionals.h>
#endif
//==================================
//==================================
//==================================
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

//================================================================================================================================
#define var GLfloat
#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x])))))//to_use-> COUNT_OF( floorTile_2m_INDICES)
#define BUFFER_OFFSET(i) ((char *)0 + (i))
//================================================================================================================================
bool renderTurntable = false;

int  viewWidth  = 1920;
int  viewHeight = 1080;

int  Pass_MIDDLE_Mouse[]        =  { 0, 0 };     //AT_SHUTDOWN_THESE_VALUES_ARE_BEING_PRINTED_THE_FILE->loadMouseSettings.cpp
int  Pass_MIDDLE_CONTROL_Mouse;
int  Pass_MIDDLE_SHIFT_Mouse[]  =  { 0, 0 };     //AT_RUNTIME_THESE_ARE_BEING_LOADED_INTO->WGL_ARB_multiSample.h

int mousePosCurrent[]           =  { 0, 0 };
int mousePosPrevious[]          =  { 0, 0 };

bool LEFT_BUTTON_DOWN           =   false;
bool RIGHT_BUTTON_DOWN          =   false;
bool MIDDLE_BUTTON_DOWN         =   false;
bool MOUSE_MOVE                 =   false;
bool LEFT_BUTTON_UP             =   false;
bool RIGHT_BUTTON_UP            =   false;
bool MIDDLE_BUTTON_UP           =   false;

//================================
#include "KEYBOARD/OS_DEFINES.cpp"
//==============================================================
#include "cpp/timer_B.cpp"
//==============================================================
#include "cpp/configure_GL.cpp"
//==============================================================
#include "headerFiles/FreeImage.h"     // INSTALLED_TO /usr/local/lib
//==============================================================
#include "cpp/microsoft_WINDOW.cpp"
//==============================================================
#include "cpp/frameBuffer_GLOBALS.cpp" // _iOS_//_TEST_BEFORE_MOVING
//==============================================================

#include "MATRIX_MATH.cpp"

//===========================================================================================================================================================

#include            "GLOBALS.cpp"   ///////////////////////------------CONSIDER_ADDING_Textures_GLOBALS.cpp // for FBO's, CubeMaps, Fresnel, etc...
#include     "Models_GLOBALS.cpp" 
#include    "Shaders_GLOBALS.cpp"

//===========================================================================================================================================================

#include "cpp/FreeImage.cpp"

//===========================================================================================================================================================

unsigned char *readShaderFile( const char *fileName );
void initializeAssets(void)
{
    #include            "INIT.cpp"
    #include     "Models_INIT.cpp"  ///////////////////////----------CONSIDER_ADDING_Textures_INIT.cpp
    #include    "Shaders_INIT.cpp"
    
}

//===========================================================================================================================================================

#include "cpp/transformStacks.cpp"

//===========================================================================================================================================================

#include "cpp/loadRuntimeShader.cpp"

//===========================================================================================================================================================

#include "selectShader_RENDER.cpp"

//===========================================================================================================================================================

void ViewShadow_TRANSFORM(void)
{
    // code is currently found in -> View_TRANSFORM();
}

//===========================================================================================================================================================

void View_TRANSFORM(void)
{
    
    
    LoadIdentity(viewMatrix);
 
 
    Translate(   viewMatrix,     view_POSITION[0],          view_POSITION[1],               view_POSITION[2]);
    
    Rotate(      viewMatrix,     1.0,    0.0,    0.0,       rotateModelWithMiddleMouse[0]);
    Rotate(      viewMatrix,     0.0,    0.0,    1.0,      -rotateModelWithMiddleMouse[1]);
    
 
 
    #ifdef __APPLE__
    if(CONSOLE_OUTPUT)
    {
        NSLog(@"view_POSITION[]   %f,  %f,  %f = ", view_POSITION[0],   view_POSITION[1],   view_POSITION[2]);
    }
    #endif
    
}

//===========================================================================================================================================================

#if TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1
//TOUCH_SCREEN_CONTROLS_GO_HERE
//====================================
#elif TARGET_OS_MAC == 1 || WIN32 == 1
void ProcessKeyboard(void)
{
    #include "KEYBOARD/ProcessKeyboard.cpp"
}//__END->ProcessKeyboard()
#endif

//===========================================================================================================================================================

void areaSelector(void)
{
    //#include "areaSelector.cpp"
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o1_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o1_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o1_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o1_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o1_isActive = true;
        
    }
    else o1_isActive = false;

    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o2_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o2_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o2_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o2_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o2_isActive = true;
        
    }
    else o2_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o3_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o3_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o3_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o3_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o3_isActive = true;
        
    }
    else o3_isActive = false;
      
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o4_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o4_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o4_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o4_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o4_isActive = true;
        
    }
    else o4_isActive = false;
       
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o5_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o5_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o5_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o5_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o5_isActive = true;
        
    }
    else o5_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o6_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o6_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o6_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o6_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o6_isActive = true;
        
    }
    else o6_isActive = false;
       
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o7_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o7_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o7_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o7_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o7_isActive = true;
        
    }
    else o7_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o8_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o8_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o8_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o8_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o8_isActive = true;
        
    }
    else o8_isActive = false;
    
   
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o9_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o9_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o9_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o9_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o9_isActive = true;
        
    }
    else o9_isActive = false;
       
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o10_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o10_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o10_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o10_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o10_isActive = true;
        
    }
    else o10_isActive = false;
     
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o11_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o11_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o11_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o11_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o11_isActive = true;
        
    }
    else o11_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o12_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o12_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o12_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o12_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o12_isActive = true;
        
    }
    else o12_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o13_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o13_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o13_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o13_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o13_isActive = true;
        
    }
    else o13_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o14_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o14_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o14_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o14_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o14_isActive = true;
        
    }
    else o14_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o15_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o15_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o15_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o15_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o15_isActive = true;
        
    }
    else o15_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o16_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o16_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o16_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o16_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o16_isActive = true;
        
    }
    else o16_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    
    if(setPosition[0] <= (o17_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o17_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o17_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o17_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o17_isActive = true;
        
    }
    else o17_isActive = false;
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    

    if(setPosition[0] <= (o18_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o18_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o18_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o18_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o18_isActive = true;
        
    }
    else o18_isActive = false;
    
    
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    

    if(setPosition[0] <= (o19_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o19_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o19_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o19_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o19_isActive = true;
        
    }
    else o19_isActive = false;
    
     
    
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    

    if(setPosition[0] <= (o20_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o20_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o20_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o20_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o20_isActive = true;
        
    }
    else o20_isActive = false;
     
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    

    if(setPosition[0] <= (o21_CENTER[0] + areaBounds[0])*viewZoom     &&     setPosition[0] >= (o21_CENTER[0] - areaBounds[0])*viewZoom     &&
       setPosition[1] <= (o21_CENTER[1] + areaBounds[1])*viewZoom     &&     setPosition[1] >= (o21_CENTER[1] - areaBounds[1])*viewZoom)
    {
        o21_isActive = true;
        
    }
    else o21_isActive = false;
     
    
}

//===========================================================================================================================================================

void renderMainColor_PASS(void)
{

    areaSelector();
  
    //--------------------------
    #include "drawMainColor.cpp"
    //--------------------------

     

}//__END->renderMainColor_PASS()


//===========================================================================================================================================================

void finalComposite(void)
{
    glActiveTexture (GL_TEXTURE1);
    //glBindTexture(GL_TEXTURE_2D,  colorDepthShadows_PENUMBRA_FBO_DEPTH_TEXTURE );
    glActiveTexture (GL_TEXTURE0);
    //glBindTexture(GL_TEXTURE_2D,  colorDepthShadows_PENUMBRA_FBO_DEPTH_TEXTURE );//reflectionProjection_FBO_COLOR_TEXTURE   shadow_POSITION
    //-----------
    shaderNumber = 10;
    //#include "_TEXTURES/frameBufferPlane/frameBufferPlane_RENDER.cpp"//finalComposite

}//__END->finalComposite()

//===========================================================================================================================================================

void shutDownGL( void )
{

    #include "END.cpp"
    #include "END_MODELS.cpp"
    #include "END_SHADERS.cpp"

}//__END->shutDownGL()

//===========================================================================================================================================================



//=======================================================================================================================
//-----------------------------------------------------------------------------------------------------------------------



void InitGL( void )//__BEGIN_INIT__@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
{
        start = getMilliCount();
    

      
        //=====================================
        #ifdef WIN32
            #include "cpp/setPixelFormat.cpp"
            #include "include/glext_Init_B.cpp"
            //alutInit(NULL, 0);
            //------------------
            SetVSyncState(true);
    
        #endif
    
  
    


#ifdef __APPLE__    
    //NSLog(@"viewWidth  = %i pixels", (int)viewWidth);
    //NSLog(@"viewHeight = %i pixels", (int)viewHeight);
#endif    
    
    
    //---------------------------
    initializeAssets();
    //---------------------------
    screenRatio =   (GLfloat)viewWidth / (GLfloat)viewHeight;


    //=======================
    #ifdef WIN32
        //atexit(KillALData);//(WHY_NOT_TRY_SDL_INSTEAD. SDL_CAN_WRITE_TO_THE_SOUND_BUFFER_AND_ALSO_APPEARS_TO_BE_JUST_AS_CROSS_PLATFORM_CAPABLE).
    #endif
    
    
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    glEnable(GL_DEPTH_TEST);
    //glDepthFunc(GL_LEQUAL);
    //glDepthFunc(GL_EQUAL);
    glDepthFunc(GL_LESS);
    //glDepthMask(1);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    //glAlphaFunc(GL_GREATER, 0.1);
    glDisable(GL_BLEND);
//====================================================================================================================================

}//__END_INIT__@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




//-----------------------------------------------------------------------------------------------------------------------
//=======================================================================================================================

int runonce = 1;

float counter = 0.0;



void RenderGL(void)
{


frameStart = getMilliSpan(start);



  

    
//=======================================================================================================================

      
                        //=================================================================
                        #if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1
                        //--------------         
                                //eye_POSITION[0] -= PassTouchMovement[0];
                                //eye_POSITION[1] -= PassTouchMovement[1];
                                //eye_POSITION[2] -= PassTouchMovement[2];                   
                        
                                //PassTouchMovement[0] = 0.0;
                                //PassTouchMovement[1] = 0.0;
                                //PassTouchMovement[2] = 0.0;
                        
                        //--------------                        
                        #endif 
                        //=================================================================
                                      
    
                                rotateModelWithMiddleMouse[0]   = (float)Pass_MIDDLE_Mouse[0]*.5;
                                rotateModelWithMiddleMouse[1]   = (float)Pass_MIDDLE_Mouse[1]*.5;
                                //-------------------------------------------------------
                                view_POSITION[2] = (float)Pass_MIDDLE_CONTROL_Mouse*.7;
                                //-------------------------------------------------------
                                view_POSITION[0] = (float)Pass_MIDDLE_SHIFT_Mouse[0]*.1;
                                view_POSITION[1] = (float)Pass_MIDDLE_SHIFT_Mouse[1]*.1;
    
    



    //==============================================================
  
    


 
    
    
//---------------------------------------------------------
#if TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1
    if(iOS_MSAA_IS_ON)
    {
        glBindFramebuffer(GL_FRAMEBUFFER, msaaFramebuffer);//-------------------- MSAA SWITCH --- iOS      ON
    }
    else
    {
        glBindFramebuffer(GL_FRAMEBUFFER, viewRenderbuffer);//------------------- MSAA SWITCH --- iOS      OFF
    }
#endif 
//---------------------------------------------------------
#if TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1
    //PROCESS_TOUCH
    
    //-------------------------
#elif TARGET_OS_MAC == 1 || WIN32 == 1
    glEnable(GL_MULTISAMPLE_ARB);//---------------------------------------------- MSAA SWITCH --- WIN-OSX -ON

#endif
//----------------------
    
    glEnable(GL_MULTISAMPLE_ARB);//---------------------------------------------- MSAA SWITCH --- WIN-OSX -ON
   
    
    
    //=====================//#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_
renderMainColor_PASS();
    //=====================//#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_#_

    
    
    
//----------------------
#if TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1
    //PROCESS_TOUCH
    
    //-------------------------
#elif TARGET_OS_MAC == 1 || WIN32 == 1
    glDisable(GL_MULTISAMPLE_ARB);//--------------------------------------------- MSAA SWITCH --- WIN-OSX -OFF
#endif
//--------------------------------------------------------
    
    
    
    finalComposite();
    //---------------


 
   


 
    
//==================================
frameEnd  = getMilliSpan(start);
frameTime = frameEnd - frameStart;

if(CONSOLE_OUTPUT)
{
    #ifdef __APPLE__
    //NSLog(@"==============");
    //NSLog(@"frameTime = %i milliseconds", (int)frameTime);
    //NSLog(@"==============");
    #endif
}    

    
}//_END_RenderGL()//#####################################################################################################


//=======================================================================================================================
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
//=======================================================================================================================









