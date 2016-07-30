    if(o19_EMIT  != 0)
    { 
        glDeleteTextures(1, &o19_EMIT); 
        o19_EMIT  = 0; 
    } 
    if(o19_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o19_DOT3); 
        o19_DOT3 = 0; 
    } 
    if(o19_SKY  != 0)
    { 
        glDeleteTextures(1, &o19_SKY); 
        o19_SKY  = 0; 
    } 
    if(o19_MASK0  != 0)
    { 
        glDeleteTextures(1, &o19_MASK0); 
        o19_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o19_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o19_VBO); 
        o19_VBO  = 0; 
    } 
    if(o19_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o19_INDICES_VBO); 
        o19_INDICES_VBO  = 0; 
    } 
