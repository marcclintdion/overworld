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
    Scale(modelMatrix,      o21_SCALE[0],
                            o21_SCALE[1],
                            o21_SCALE[2] * reflection);

//===================================================   
SelectShader(shaderNumber); 
//===================================================   
    glActiveTexture ( GL_TEXTURE0 );  
    glBindTexture(GL_TEXTURE_2D, o21_EMIT); 

    //-----------------------------------------------------  
    glDrawElements(GL_TRIANGLES, o21_INDEX_COUNT, GL_UNSIGNED_INT, 0); 
