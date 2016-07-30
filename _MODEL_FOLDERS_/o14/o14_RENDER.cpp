    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o14_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o14_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o14_POSITION[0],
                           o14_POSITION[1], 
                              o14_POSITION[2]); 
    Rotate(modelMatrix,     o14_ROTATION[0],
                           o14_ROTATION[1], 
                              o14_ROTATION[2], 
                                o14_ROTATION[3]); 
    Scale(modelMatrix,  o14_SCALE[0],
                              o14_SCALE[1], 
                                 o14_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o14_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o14_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o14_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o14_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o14_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
