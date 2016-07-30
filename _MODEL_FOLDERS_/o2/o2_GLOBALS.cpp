GLfloat o2_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o2_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o2_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o2_VBO; 
GLuint o2_INDICES_VBO; 
//--------------------------------------
GLuint o2_EMIT; 
GLuint o2_DOT3; 
GLuint o2_SKY; 

GLuint o2_MASK0; 

//---------------------------------------------
GLfloat o2_boundingBox[6]; 


//---------------------------------------------
GLuint o2_INDEX_COUNT;    


GLuint o2_modelNumber;    


void load_o2_VBO(void)           
{
    #include    "o2_VBO.cpp"           
    glGenBuffers(1,              &o2_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o2_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o2), o2, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o2_INDICES(void)           
{
    #include    "o2_INDICES.cpp"           
    glGenBuffers(1,              &o2_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o2_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o2_INDICES), o2_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
