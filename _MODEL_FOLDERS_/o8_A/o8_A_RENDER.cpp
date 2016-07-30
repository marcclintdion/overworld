    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o8_A_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o8_A_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o8_A_POSITION[0],
                           o8_A_POSITION[1], 
                              o8_A_POSITION[2]); 
    Rotate(modelMatrix,     o8_A_ROTATION[0],
                           o8_A_ROTATION[1], 
                              o8_A_ROTATION[2], 
                                o8_A_ROTATION[3]); 
    Scale(modelMatrix,  o8_A_SCALE[0],
                              o8_A_SCALE[1], 
                                 o8_A_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o8_A_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o8_A_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o8_A_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o8_A_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o8_A_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
