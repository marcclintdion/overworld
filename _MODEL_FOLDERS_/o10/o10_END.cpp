    if(o10_EMIT  != 0)
    { 
        glDeleteTextures(1, &o10_EMIT); 
        o10_EMIT  = 0; 
    } 
    if(o10_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o10_DOT3); 
        o10_DOT3 = 0; 
    } 
    if(o10_SKY  != 0)
    { 
        glDeleteTextures(1, &o10_SKY); 
        o10_SKY  = 0; 
    } 
    if(o10_MASK0  != 0)
    { 
        glDeleteTextures(1, &o10_MASK0); 
        o10_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o10_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o10_VBO); 
        o10_VBO  = 0; 
    } 
    if(o10_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o10_INDICES_VBO); 
        o10_INDICES_VBO  = 0; 
    } 
