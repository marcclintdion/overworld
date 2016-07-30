    if(o4_EMIT  != 0)
    { 
        glDeleteTextures(1, &o4_EMIT); 
        o4_EMIT  = 0; 
    } 
    if(o4_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o4_DOT3); 
        o4_DOT3 = 0; 
    } 
    if(o4_SKY  != 0)
    { 
        glDeleteTextures(1, &o4_SKY); 
        o4_SKY  = 0; 
    } 
    if(o4_MASK0  != 0)
    { 
        glDeleteTextures(1, &o4_MASK0); 
        o4_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o4_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o4_VBO); 
        o4_VBO  = 0; 
    } 
    if(o4_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o4_INDICES_VBO); 
        o4_INDICES_VBO  = 0; 
    } 
