    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o10_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o10_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o10_POSITION[0],
                                o10_POSITION[1], 
                                o10_POSITION[2]); 
    Rotate(modelMatrix,     o10_ROTATION[0],
                                o10_ROTATION[1], 
                                o10_ROTATION[2], 
                                o10_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o10_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o10_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o10_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o10_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o10_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
