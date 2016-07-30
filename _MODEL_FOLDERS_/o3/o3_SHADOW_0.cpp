    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o3_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o3_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o3_POSITION[0],
                                o3_POSITION[1], 
                                o3_POSITION[2]); 
    Rotate(modelMatrix,     o3_ROTATION[0],
                                o3_ROTATION[1], 
                                o3_ROTATION[2], 
                                o3_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o3_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o3_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o3_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o3_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o3_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
