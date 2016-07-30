    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o16_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o16_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o16_POSITION[0],
                           o16_POSITION[1], 
                              o16_POSITION[2]); 
    Rotate(modelMatrix,     o16_ROTATION[0],
                           o16_ROTATION[1], 
                              o16_ROTATION[2], 
                                o16_ROTATION[3]); 
    Scale(modelMatrix,  o16_SCALE[0],
                              o16_SCALE[1], 
                                 o16_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o16_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o16_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o16_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o16_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o16_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
