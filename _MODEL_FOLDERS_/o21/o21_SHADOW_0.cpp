    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o21_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o21_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o21_POSITION[0],
                                o21_POSITION[1], 
                                o21_POSITION[2]); 
    Rotate(modelMatrix,     o21_ROTATION[0],
                                o21_ROTATION[1], 
                                o21_ROTATION[2], 
                                o21_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o21_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o21_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o21_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o21_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o21_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
