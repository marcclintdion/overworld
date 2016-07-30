    if(o3_EMIT  != 0)
    { 
        glDeleteTextures(1, &o3_EMIT); 
        o3_EMIT  = 0; 
    } 
    if(o3_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o3_DOT3); 
        o3_DOT3 = 0; 
    } 
    if(o3_SKY  != 0)
    { 
        glDeleteTextures(1, &o3_SKY); 
        o3_SKY  = 0; 
    } 
    if(o3_MASK0  != 0)
    { 
        glDeleteTextures(1, &o3_MASK0); 
        o3_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o3_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o3_VBO); 
        o3_VBO  = 0; 
    } 
    if(o3_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o3_INDICES_VBO); 
        o3_INDICES_VBO  = 0; 
    } 
