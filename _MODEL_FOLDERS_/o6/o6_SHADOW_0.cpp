    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o6_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o6_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o6_POSITION[0],
                                o6_POSITION[1], 
                                o6_POSITION[2]); 
    Rotate(modelMatrix,     o6_ROTATION[0],
                                o6_ROTATION[1], 
                                o6_ROTATION[2], 
                                o6_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o6_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o6_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o6_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o6_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o6_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
