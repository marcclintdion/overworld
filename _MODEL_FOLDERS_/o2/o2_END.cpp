    if(o2_EMIT  != 0)
    { 
        glDeleteTextures(1, &o2_EMIT); 
        o2_EMIT  = 0; 
    } 
    if(o2_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o2_DOT3); 
        o2_DOT3 = 0; 
    } 
    if(o2_SKY  != 0)
    { 
        glDeleteTextures(1, &o2_SKY); 
        o2_SKY  = 0; 
    } 
    if(o2_MASK0  != 0)
    { 
        glDeleteTextures(1, &o2_MASK0); 
        o2_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o2_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o2_VBO); 
        o2_VBO  = 0; 
    } 
    if(o2_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o2_INDICES_VBO); 
        o2_INDICES_VBO  = 0; 
    } 
