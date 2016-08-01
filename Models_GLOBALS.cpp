
//__TODO__: ADD A VARIABLE NAMED <modelNameHere_shaderNumber> SO THAT SELECTING ON OBJECT CAN ACTIVATE THE ASSOCIATED SHADER CONTROLS: shaderNumber = modelNameHere_shaderNumber

GLfloat scaleModel = 0.0;

    #include "_MODEL_FOLDERS_/o21/o21_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o20/o20_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o19/o19_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o18/o18_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o17/o17_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o16/o16_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o15/o15_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o14/o14_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o13/o13_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o12/o12_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o11/o11_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o10/o10_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o9/o9_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o8_A/o8_A_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o8_B/o8_B_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o7/o7_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o6/o6_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o5/o5_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o4/o4_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o3/o3_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o2/o2_GLOBALS.cpp"  
    #include "_MODEL_FOLDERS_/o1/o1_GLOBALS.cpp"  

GLfloat areaBounds[] = {48.0f, 38.0f};

bool        o1_isActive  = false;
bool        o2_isActive  = false;
bool        o3_isActive  = false;
bool        o4_isActive  = false;
bool        o5_isActive  = false;
bool        o6_isActive  = false;
bool        o7_isActive  = false;
bool        o8_isActive  = false;
bool        o9_isActive  = false;
bool        o10_isActive = false;
bool        o11_isActive = false;
bool        o12_isActive = false;
bool        o13_isActive = false;
bool        o14_isActive = false;
bool        o15_isActive = false;
bool        o16_isActive = false;
bool        o17_isActive = false;
bool        o18_isActive = false;
bool        o19_isActive = false;
bool        o20_isActive = false;
bool        o21_isActive = false;
bool        o22_isActive = false;

#include "LOCATIONS/AREA_POSITIONS.cpp"
GLuint   groundLevel_SpheresActive =     0;
GLfloat  groundLevelAdjust         =     0.0;
GLfloat  spheres_TOTAL_HEIGHT      =     0.0;
GLfloat  delta_HEIGHT              =     0.0;
#include "LOCATIONS/HEIGHT_SPHERES_GLOBALS.cpp"
GLfloat  collisionOverlap          =     0.0;

//---------------------------------------------------------------------------------------


    #include "_MODEL_FOLDERS_/sphereDetection/sphereDetection_GLOBALS.cpp"  

