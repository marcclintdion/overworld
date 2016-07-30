    if(o8_A_EMIT  != 0)
    { 
        glDeleteTextures(1, &o8_A_EMIT); 
        o8_A_EMIT  = 0; 
    } 
    if(o8_A_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o8_A_DOT3); 
        o8_A_DOT3 = 0; 
    } 
    if(o8_A_SKY  != 0)
    { 
        glDeleteTextures(1, &o8_A_SKY); 
        o8_A_SKY  = 0; 
    } 
    if(o8_A_MASK0  != 0)
    { 
        glDeleteTextures(1, &o8_A_MASK0); 
        o8_A_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o8_A_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o8_A_VBO); 
        o8_A_VBO  = 0; 
    } 
    if(o8_A_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o8_A_INDICES_VBO); 
        o8_A_INDICES_VBO  = 0; 
    } 
