    if(o20_EMIT  != 0)
    { 
        glDeleteTextures(1, &o20_EMIT); 
        o20_EMIT  = 0; 
    } 
    if(o20_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o20_DOT3); 
        o20_DOT3 = 0; 
    } 
    if(o20_SKY  != 0)
    { 
        glDeleteTextures(1, &o20_SKY); 
        o20_SKY  = 0; 
    } 
    if(o20_MASK0  != 0)
    { 
        glDeleteTextures(1, &o20_MASK0); 
        o20_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o20_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o20_VBO); 
        o20_VBO  = 0; 
    } 
    if(o20_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o20_INDICES_VBO); 
        o20_INDICES_VBO  = 0; 
    } 
