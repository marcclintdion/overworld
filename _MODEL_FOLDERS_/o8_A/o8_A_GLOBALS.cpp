GLfloat o8_A_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o8_A_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o8_A_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o8_A_VBO; 
GLuint o8_A_INDICES_VBO; 
//--------------------------------------
GLuint o8_A_EMIT; 
GLuint o8_A_DOT3; 
GLuint o8_A_SKY; 

GLuint o8_A_MASK0; 

//---------------------------------------------
GLfloat o8_A_boundingBox[6]; 


//---------------------------------------------
GLuint o8_A_INDEX_COUNT;    


GLuint o8_A_modelNumber;    


void load_o8_A_VBO(void)           
{
    #include    "o8_A_VBO.cpp"           
    glGenBuffers(1,              &o8_A_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o8_A_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o8_A), o8_A, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o8_A_INDICES(void)           
{
    #include    "o8_A_INDICES.cpp"           
    glGenBuffers(1,              &o8_A_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o8_A_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o8_A_INDICES), o8_A_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
