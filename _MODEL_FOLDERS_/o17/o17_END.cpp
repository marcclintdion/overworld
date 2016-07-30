    if(o17_EMIT  != 0)
    { 
        glDeleteTextures(1, &o17_EMIT); 
        o17_EMIT  = 0; 
    } 
    if(o17_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o17_DOT3); 
        o17_DOT3 = 0; 
    } 
    if(o17_SKY  != 0)
    { 
        glDeleteTextures(1, &o17_SKY); 
        o17_SKY  = 0; 
    } 
    if(o17_MASK0  != 0)
    { 
        glDeleteTextures(1, &o17_MASK0); 
        o17_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o17_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o17_VBO); 
        o17_VBO  = 0; 
    } 
    if(o17_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o17_INDICES_VBO); 
        o17_INDICES_VBO  = 0; 
    } 
