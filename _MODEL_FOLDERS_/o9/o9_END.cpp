    if(o9_EMIT  != 0)
    { 
        glDeleteTextures(1, &o9_EMIT); 
        o9_EMIT  = 0; 
    } 
    if(o9_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o9_DOT3); 
        o9_DOT3 = 0; 
    } 
    if(o9_SKY  != 0)
    { 
        glDeleteTextures(1, &o9_SKY); 
        o9_SKY  = 0; 
    } 
    if(o9_MASK0  != 0)
    { 
        glDeleteTextures(1, &o9_MASK0); 
        o9_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o9_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o9_VBO); 
        o9_VBO  = 0; 
    } 
    if(o9_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o9_INDICES_VBO); 
        o9_INDICES_VBO  = 0; 
    } 
