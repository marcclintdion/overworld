    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o17_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o17_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o17_POSITION[0],
                                o17_POSITION[1], 
                                o17_POSITION[2]); 
    Rotate(modelMatrix,     o17_ROTATION[0],
                                o17_ROTATION[1], 
                                o17_ROTATION[2], 
                                o17_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o17_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o17_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o17_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o17_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o17_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
