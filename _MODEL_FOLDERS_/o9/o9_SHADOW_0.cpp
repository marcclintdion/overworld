    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o9_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o9_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o9_POSITION[0],
                                o9_POSITION[1], 
                                o9_POSITION[2]); 
    Rotate(modelMatrix,     o9_ROTATION[0],
                                o9_ROTATION[1], 
                                o9_ROTATION[2], 
                                o9_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o9_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o9_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o9_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o9_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o9_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
