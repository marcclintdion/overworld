
#include    "terrainBase_END.cpp"//_AVOID_MEMORY_LEAKS_AT_RUNTIME._THIS_DEACTIVATES_EXISTING_BUFFERS_BEFORE_RE-LOADING.
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=
terrainBase_SHADER = glCreateProgram();

//===============
#if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1
filePathName = [[NSBundle mainBundle] pathForResource:@"terrainBase" ofType:@"vert"];
vertexSource_terrainBase   = readShaderFile([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
filePathName = [[NSBundle mainBundle] pathForResource:@"terrainBase" ofType:@"frag"];
fragmentSource_terrainBase = readShaderFile([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
//===============
#elif  TARGET_OS_MAC == 1 || WIN32 == 1
vertexSource_terrainBase   = readShaderFile( "_SHADERS/terrainBase/terrainBase.vert" );
fragmentSource_terrainBase = readShaderFile( "_SHADERS/terrainBase/terrainBase.frag" );
#endif
//===============

    //=======================================================================================================================
    terrainBase_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);
    glShaderSource( terrainBase_SHADER_VERTEX, 1,   (const GLchar**)&vertexSource_terrainBase, NULL );
    glCompileShader( terrainBase_SHADER_VERTEX);                                              //glShaderBinary
    //----------------------------------------------------
    terrainBase_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);
    glShaderSource( terrainBase_SHADER_FRAGMENT, 1, (const GLchar**)&fragmentSource_terrainBase, NULL );
    glCompileShader(terrainBase_SHADER_FRAGMENT);                                              //glShaderBinary
    //--------------------------------------------------------------------------------------------------
    glAttachShader( terrainBase_SHADER, terrainBase_SHADER_VERTEX );
    glAttachShader( terrainBase_SHADER, terrainBase_SHADER_FRAGMENT );
    //--------------------------------------------------------------------------------------------------
    glBindAttribLocation(terrainBase_SHADER,   0, "position");
    glBindAttribLocation(terrainBase_SHADER,   1, "normal");
    glBindAttribLocation(terrainBase_SHADER,   2, "uv0");
    //--------------------------------------------------------------------------------------------------
    glDeleteShader( terrainBase_SHADER_VERTEX);
    glDeleteShader( terrainBase_SHADER_FRAGMENT);
    glLinkProgram(terrainBase_SHADER);                                                                                      
    //--------------------------------------------------------------------------------------------------

    UNIFORM_PROJECTION_MATRIX_terrainBase               = glGetUniformLocation(terrainBase_SHADER, "projectionMatrix");

    UNIFORM_SET_POSITION_terrainBase                    = glGetUniformLocation(terrainBase_SHADER, "setPosition");

    UNIFORM_f_0_terrainBase                             = glGetUniformLocation(terrainBase_SHADER, "f_0");
    UNIFORM_f_1_terrainBase                             = glGetUniformLocation(terrainBase_SHADER, "f_1");
    UNIFORM_f_2_terrainBase                             = glGetUniformLocation(terrainBase_SHADER, "f_2");
    UNIFORM_f_3_terrainBase                             = glGetUniformLocation(terrainBase_SHADER, "f_3");
    UNIFORM_f_4_terrainBase                             = glGetUniformLocation(terrainBase_SHADER, "f_4");
    UNIFORM_f_5_terrainBase                             = glGetUniformLocation(terrainBase_SHADER, "f_5");


    //--------------------------------
    UNIFORM_EMIT_terrainBase                            = glGetUniformLocation(terrainBase_SHADER, "ColorMAP");


//######################################################












