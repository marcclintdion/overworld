    if(o11_EMIT  != 0)
    { 
        glDeleteTextures(1, &o11_EMIT); 
        o11_EMIT  = 0; 
    } 
    if(o11_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o11_DOT3); 
        o11_DOT3 = 0; 
    } 
    if(o11_SKY  != 0)
    { 
        glDeleteTextures(1, &o11_SKY); 
        o11_SKY  = 0; 
    } 
    if(o11_MASK0  != 0)
    { 
        glDeleteTextures(1, &o11_MASK0); 
        o11_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o11_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o11_VBO); 
        o11_VBO  = 0; 
    } 
    if(o11_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o11_INDICES_VBO); 
        o11_INDICES_VBO  = 0; 
    } 
