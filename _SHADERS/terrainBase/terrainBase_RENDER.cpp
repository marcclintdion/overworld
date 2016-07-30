

LoadIdentity(tempMatrix_A);
MultiplyMatrix(tempMatrix_A,    projectionMatrix,           viewMatrix  );
//--------------------------
LoadIdentity(tempMatrix_B);
MultiplyMatrix(tempMatrix_B,    tempMatrix_A,               modelMatrix  );


//========================================================================================================
glUseProgram(terrainBase_SHADER);
//----------
    glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(2,     2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));
    glEnableVertexAttribArray(2);
    //---------------------------
    glUniformMatrix4fv(UNIFORM_PROJECTION_MATRIX_terrainBase,               1, 0,       tempMatrix_B);
    //---------------------------
    glUniform3f(UNIFORM_SET_POSITION_terrainBase, setPosition[0], setPosition[1], setPosition[2]);


    glUniform1f(UNIFORM_f_0_terrainBase,              f_0_terrainBase);
    glUniform1f(UNIFORM_f_1_terrainBase,              f_1_terrainBase);
    glUniform1f(UNIFORM_f_2_terrainBase,              f_2_terrainBase);
    glUniform1f(UNIFORM_f_3_terrainBase,              f_3_terrainBase);
    glUniform1f(UNIFORM_f_4_terrainBase,              f_4_terrainBase);
    glUniform1f(UNIFORM_f_5_terrainBase,              f_5_terrainBase);



    //---------

    glUniform1i(UNIFORM_EMIT_terrainBase,                       0);

//---------










