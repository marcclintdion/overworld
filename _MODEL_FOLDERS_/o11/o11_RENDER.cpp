    //--------------------------
    glBindBuffer(GL_ARRAY_BUFFER, o11_VBO);  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o11_INDICES_VBO);  
    //--------------------------------
    LoadIdentity(modelMatrix); 
    Translate(modelMatrix,  o11_POSITION[0],
                           o11_POSITION[1], 
                              o11_POSITION[2]); 
    Rotate(modelMatrix,     o11_ROTATION[0],
                           o11_ROTATION[1], 
                              o11_ROTATION[2], 
                                o11_ROTATION[3]); 
    Scale(modelMatrix,  o11_SCALE[0],
                              o11_SCALE[1], 
                                 o11_SCALE[2] * reflection); 

//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o11_EMIT); 

    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o11_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
