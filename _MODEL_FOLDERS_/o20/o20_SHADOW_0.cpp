    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o20_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o20_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o20_POSITION[0],
                                o20_POSITION[1], 
                                o20_POSITION[2]); 
    Rotate(modelMatrix,     o20_ROTATION[0],
                                o20_ROTATION[1], 
                                o20_ROTATION[2], 
                                o20_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o20_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o20_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o20_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o20_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o20_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
