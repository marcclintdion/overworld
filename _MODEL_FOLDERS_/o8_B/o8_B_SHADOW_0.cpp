    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o8_B_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o8_B_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o8_B_POSITION[0],
                                o8_B_POSITION[1], 
                                o8_B_POSITION[2]); 
    Rotate(modelMatrix,     o8_B_ROTATION[0],
                                o8_B_ROTATION[1], 
                                o8_B_ROTATION[2], 
                                o8_B_ROTATION[3]); 
    //=============================
    LoadIdentity(invertModelMatrix); 
    InvertMatrix(invertModelMatrix, modelMatrix);
//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o8_B_EMIT); 
    glActiveTexture (GL_TEXTURE1);  
    glBindTexture(GL_TEXTURE_2D, o8_B_DOT3); 
    glActiveTexture (GL_TEXTURE2);  
    glBindTexture(GL_TEXTURE_2D, o8_B_SKY); 
    //glActiveTexture (GL_TEXTURE3);  
    //glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture[0]); 
    glActiveTexture (GL_TEXTURE4);  
    glBindTexture(GL_TEXTURE_2D, o8_B_MASK0); 
    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o8_B_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
