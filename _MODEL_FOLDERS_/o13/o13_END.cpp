    if(o13_EMIT  != 0)
    { 
        glDeleteTextures(1, &o13_EMIT); 
        o13_EMIT  = 0; 
    } 
    if(o13_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o13_DOT3); 
        o13_DOT3 = 0; 
    } 
    if(o13_SKY  != 0)
    { 
        glDeleteTextures(1, &o13_SKY); 
        o13_SKY  = 0; 
    } 
    if(o13_MASK0  != 0)
    { 
        glDeleteTextures(1, &o13_MASK0); 
        o13_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o13_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o13_VBO); 
        o13_VBO  = 0; 
    } 
    if(o13_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o13_INDICES_VBO); 
        o13_INDICES_VBO  = 0; 
    } 
