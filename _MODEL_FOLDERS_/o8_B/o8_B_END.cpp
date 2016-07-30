    if(o8_B_EMIT  != 0)
    { 
        glDeleteTextures(1, &o8_B_EMIT); 
        o8_B_EMIT  = 0; 
    } 
    if(o8_B_DOT3 != 0) 
    { 
        glDeleteTextures(1, &o8_B_DOT3); 
        o8_B_DOT3 = 0; 
    } 
    if(o8_B_SKY  != 0)
    { 
        glDeleteTextures(1, &o8_B_SKY); 
        o8_B_SKY  = 0; 
    } 
    if(o8_B_MASK0  != 0)
    { 
        glDeleteTextures(1, &o8_B_MASK0); 
        o8_B_MASK0  = 0; 
    } 
    //-------------------------------------------------- 
    if(o8_B_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o8_B_VBO); 
        o8_B_VBO  = 0; 
    } 
    if(o8_B_INDICES_VBO  != 0) 
    { 
        glDeleteBuffers(1, &o8_B_INDICES_VBO); 
        o8_B_INDICES_VBO  = 0; 
    } 
