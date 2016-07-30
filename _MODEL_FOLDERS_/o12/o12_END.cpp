    if(o12_EMIT  != 0)
    { 
        glDeleteTextures(1, &o12_EMIT); 
        o12_EMIT  = 0; 
    } 
    if(o12_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o12_DOT3); 
        o12_DOT3 = 0; 
    } 
    if(o12_SKY  != 0)
    { 
        glDeleteTextures(1, &o12_SKY); 
        o12_SKY  = 0; 
    } 
    if(o12_MASK0  != 0)
    { 
        glDeleteTextures(1, &o12_MASK0); 
        o12_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o12_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o12_VBO); 
        o12_VBO  = 0; 
    } 
    if(o12_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o12_INDICES_VBO); 
        o12_INDICES_VBO  = 0; 
    } 
