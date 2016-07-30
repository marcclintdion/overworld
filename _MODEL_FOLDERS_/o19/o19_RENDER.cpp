    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o19_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o19_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o19_POSITION[0],
                           o19_POSITION[1], 
                              o19_POSITION[2]); 
    Rotate(modelMatrix,     o19_ROTATION[0],
                           o19_ROTATION[1], 
                              o19_ROTATION[2], 
                                o19_ROTATION[3]); 
    Scale(modelMatrix,  o19_SCALE[0],
                              o19_SCALE[1], 
                                 o19_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o19_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o19_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o19_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o19_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o19_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
