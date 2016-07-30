    if(o7_EMIT  != 0)
    { 
        glDeleteTextures(1, &o7_EMIT); 
        o7_EMIT  = 0; 
    } 
    if(o7_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o7_DOT3); 
        o7_DOT3 = 0; 
    } 
    if(o7_SKY  != 0)
    { 
        glDeleteTextures(1, &o7_SKY); 
        o7_SKY  = 0; 
    } 
    if(o7_MASK0  != 0)
    { 
        glDeleteTextures(1, &o7_MASK0); 
        o7_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o7_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o7_VBO); 
        o7_VBO  = 0; 
    } 
    if(o7_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o7_INDICES_VBO); 
        o7_INDICES_VBO  = 0; 
    } 
