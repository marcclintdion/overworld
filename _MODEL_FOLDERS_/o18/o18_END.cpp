    if(o18_EMIT  != 0)
    { 
        glDeleteTextures(1, &o18_EMIT); 
        o18_EMIT  = 0; 
    } 
    if(o18_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o18_DOT3); 
        o18_DOT3 = 0; 
    } 
    if(o18_SKY  != 0)
    { 
        glDeleteTextures(1, &o18_SKY); 
        o18_SKY  = 0; 
    } 
    if(o18_MASK0  != 0)
    { 
        glDeleteTextures(1, &o18_MASK0); 
        o18_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o18_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o18_VBO); 
        o18_VBO  = 0; 
    } 
    if(o18_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o18_INDICES_VBO); 
        o18_INDICES_VBO  = 0; 
    } 
