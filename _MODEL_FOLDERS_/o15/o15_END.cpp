    if(o15_EMIT  != 0)
    { 
        glDeleteTextures(1, &o15_EMIT); 
        o15_EMIT  = 0; 
    } 
    if(o15_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o15_DOT3); 
        o15_DOT3 = 0; 
    } 
    if(o15_SKY  != 0)
    { 
        glDeleteTextures(1, &o15_SKY); 
        o15_SKY  = 0; 
    } 
    if(o15_MASK0  != 0)
    { 
        glDeleteTextures(1, &o15_MASK0); 
        o15_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o15_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o15_VBO); 
        o15_VBO  = 0; 
    } 
    if(o15_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o15_INDICES_VBO); 
        o15_INDICES_VBO  = 0; 
    } 
