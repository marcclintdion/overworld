    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o13_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o13_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o13_POSITION[0],
                           o13_POSITION[1], 
                              o13_POSITION[2]); 
    Rotate(modelMatrix,     o13_ROTATION[0],
                           o13_ROTATION[1], 
                              o13_ROTATION[2], 
                                o13_ROTATION[3]); 
    Scale(modelMatrix,  o13_SCALE[0],
                              o13_SCALE[1], 
                                 o13_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o13_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o13_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o13_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o13_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o13_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
