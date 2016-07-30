    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o18_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o18_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o18_POSITION[0],
                           o18_POSITION[1], 
                              o18_POSITION[2]); 
    Rotate(modelMatrix,     o18_ROTATION[0],
                           o18_ROTATION[1], 
                              o18_ROTATION[2], 
                                o18_ROTATION[3]); 
    Scale(modelMatrix,  o18_SCALE[0],
                              o18_SCALE[1], 
                                 o18_SCALE[2] * reflection); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o18_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o18_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o18_SKY); 
    glActiveTexture (GL_TEXTURE3);  
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o18_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o18_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
