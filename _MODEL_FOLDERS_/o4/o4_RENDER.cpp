    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o4_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o4_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o4_POSITION[0],
                           o4_POSITION[1], 
                              o4_POSITION[2]); 
    Rotate(modelMatrix,     o4_ROTATION[0],
                           o4_ROTATION[1], 
                              o4_ROTATION[2], 
                                o4_ROTATION[3]); 
    Scale(modelMatrix,  o4_SCALE[0],
                              o4_SCALE[1], 
                                 o4_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o4_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o4_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o4_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o4_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o4_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
