    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o15_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o15_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o15_POSITION[0],
                           o15_POSITION[1], 
                              o15_POSITION[2]); 
    Rotate(modelMatrix,     o15_ROTATION[0],
                           o15_ROTATION[1], 
                              o15_ROTATION[2], 
                                o15_ROTATION[3]); 
    Scale(modelMatrix,  o15_SCALE[0],
                              o15_SCALE[1], 
                                 o15_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o15_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o15_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o15_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o15_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o15_INDEX_COUNT, GL_UNSIGNED_INT, 0); 