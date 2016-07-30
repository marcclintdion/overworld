    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o2_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o2_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o2_POSITION[0],
                                o2_POSITION[1], 
                                o2_POSITION[2]); 
    Rotate(modelMatrix,     o2_ROTATION[0],
                                o2_ROTATION[1], 
                                o2_ROTATION[2], 
                                o2_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o2_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o2_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o2_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o2_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o2_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
