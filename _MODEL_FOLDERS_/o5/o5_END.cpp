    if(o5_EMIT  != 0)
    { 
        glDeleteTextures(1, &o5_EMIT); 
        o5_EMIT  = 0; 
    } 
    if(o5_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o5_DOT3); 
        o5_DOT3 = 0; 
    } 
    if(o5_SKY  != 0)
    { 
        glDeleteTextures(1, &o5_SKY); 
        o5_SKY  = 0; 
    } 
    if(o5_MASK0  != 0)
    { 
        glDeleteTextures(1, &o5_MASK0); 
        o5_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o5_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o5_VBO); 
        o5_VBO  = 0; 
    } 
    if(o5_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o5_INDICES_VBO); 
        o5_INDICES_VBO  = 0; 
    } 
