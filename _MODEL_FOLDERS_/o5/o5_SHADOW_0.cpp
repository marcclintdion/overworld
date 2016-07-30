    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o5_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o5_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o5_POSITION[0],
                                o5_POSITION[1], 
                                o5_POSITION[2]); 
    Rotate(modelMatrix,     o5_ROTATION[0],
                                o5_ROTATION[1], 
                                o5_ROTATION[2], 
                                o5_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o5_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o5_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o5_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o5_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o5_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
