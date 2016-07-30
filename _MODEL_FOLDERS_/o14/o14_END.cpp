    if(o14_EMIT  != 0)
    { 
        glDeleteTextures(1, &o14_EMIT); 
        o14_EMIT  = 0; 
    } 
    if(o14_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o14_DOT3); 
        o14_DOT3 = 0; 
    } 
    if(o14_SKY  != 0)
    { 
        glDeleteTextures(1, &o14_SKY); 
        o14_SKY  = 0; 
    } 
    if(o14_MASK0  != 0)
    { 
        glDeleteTextures(1, &o14_MASK0); 
        o14_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o14_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o14_VBO); 
        o14_VBO  = 0; 
    } 
    if(o14_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o14_INDICES_VBO); 
        o14_INDICES_VBO  = 0; 
    } 
