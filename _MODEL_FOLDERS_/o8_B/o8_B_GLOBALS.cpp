GLfloat o8_B_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o8_B_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o8_B_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o8_B_VBO; 
GLuint o8_B_INDICES_VBO; 
//--------------------------------------
GLuint o8_B_EMIT; 
GLuint o8_B_DOT3; 
GLuint o8_B_SKY; 

GLuint o8_B_MASK0; 

//---------------------------------------------
GLfloat o8_B_boundingBox[6]; 


//---------------------------------------------
GLuint o8_B_INDEX_COUNT;    


GLuint o8_B_modelNumber;    


void load_o8_B_VBO(void)           
{
    #include    "o8_B_VBO.cpp"           
    glGenBuffers(1,              &o8_B_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o8_B_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o8_B), o8_B, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o8_B_INDICES(void)           
{
    #include    "o8_B_INDICES.cpp"           
    glGenBuffers(1,              &o8_B_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o8_B_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o8_B_INDICES), o8_B_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
