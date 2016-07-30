    if(o21_EMIT  != 0)
    { 
        glDeleteTextures(1, &o21_EMIT); 
        o21_EMIT  = 0; 
    } 
    if(o21_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o21_DOT3); 
        o21_DOT3 = 0; 
    } 
    if(o21_SKY  != 0)
    { 
        glDeleteTextures(1, &o21_SKY); 
        o21_SKY  = 0; 
    } 
    if(o21_MASK0  != 0)
    { 
        glDeleteTextures(1, &o21_MASK0); 
        o21_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o21_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o21_VBO); 
        o21_VBO  = 0; 
    } 
    if(o21_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o21_INDICES_VBO); 
        o21_INDICES_VBO  = 0; 
    } 
