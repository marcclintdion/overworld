    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o11_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o11_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o11_POSITION[0],
                           o11_POSITION[1], 
                              o11_POSITION[2]); 
    Rotate(modelMatrix,     o11_ROTATION[0],
                           o11_ROTATION[1], 
                              o11_ROTATION[2], 
                                o11_ROTATION[3]); 
    Scale(modelMatrix,  o11_SCALE[0],
                              o11_SCALE[1], 
                                 o11_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o11_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o11_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o11_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o11_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o11_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
