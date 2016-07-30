    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o12_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o12_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o12_POSITION[0],
                           o12_POSITION[1], 
                              o12_POSITION[2]); 
    Rotate(modelMatrix,     o12_ROTATION[0],
                           o12_ROTATION[1], 
                              o12_ROTATION[2], 
                                o12_ROTATION[3]); 
    Scale(modelMatrix,  o12_SCALE[0],
                              o12_SCALE[1], 
                                 o12_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o12_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o12_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o12_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o12_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o12_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
