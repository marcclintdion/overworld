    if(o6_EMIT  != 0)
    { 
        glDeleteTextures(1, &o6_EMIT); 
        o6_EMIT  = 0; 
    } 
    if(o6_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o6_DOT3); 
        o6_DOT3 = 0; 
    } 
    if(o6_SKY  != 0)
    { 
        glDeleteTextures(1, &o6_SKY); 
        o6_SKY  = 0; 
    } 
    if(o6_MASK0  != 0)
    { 
        glDeleteTextures(1, &o6_MASK0); 
        o6_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o6_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o6_VBO); 
        o6_VBO  = 0; 
    } 
    if(o6_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o6_INDICES_VBO); 
        o6_INDICES_VBO  = 0; 
    } 
