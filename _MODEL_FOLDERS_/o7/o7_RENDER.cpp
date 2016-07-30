    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o7_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o7_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o7_POSITION[0],
                           o7_POSITION[1], 
                              o7_POSITION[2]); 
    Rotate(modelMatrix,     o7_ROTATION[0],
                           o7_ROTATION[1], 
                              o7_ROTATION[2], 
                                o7_ROTATION[3]); 
    Scale(modelMatrix,  o7_SCALE[0],
                              o7_SCALE[1], 
                                 o7_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o7_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o7_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o7_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o7_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o7_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
