    if(o16_EMIT  != 0)
    { 
        glDeleteTextures(1, &o16_EMIT); 
        o16_EMIT  = 0; 
    } 
    if(o16_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o16_DOT3); 
        o16_DOT3 = 0; 
    } 
    if(o16_SKY  != 0)
    { 
        glDeleteTextures(1, &o16_SKY); 
        o16_SKY  = 0; 
    } 
    if(o16_MASK0  != 0)
    { 
        glDeleteTextures(1, &o16_MASK0); 
        o16_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o16_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o16_VBO); 
        o16_VBO  = 0; 
    } 
    if(o16_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o16_INDICES_VBO); 
        o16_INDICES_VBO  = 0; 
    } 
