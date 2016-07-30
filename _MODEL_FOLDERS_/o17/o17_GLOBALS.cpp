GLfloat o17_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o17_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o17_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o17_VBO; 
GLuint o17_INDICES_VBO; 
//--------------------------------------
GLuint o17_EMIT; 
GLuint o17_DOT3; 
GLuint o17_SKY; 

GLuint o17_MASK0; 

//---------------------------------------------
GLfloat o17_boundingBox[6]; 


//---------------------------------------------
GLuint o17_INDEX_COUNT;    


GLuint o17_modelNumber;    


void load_o17_VBO(void)           
{
    #include    "o17_VBO.cpp"           
    glGenBuffers(1,              &o17_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o17_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o17), o17, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o17_INDICES(void)           
{
    #include    "o17_INDICES.cpp"           
    glGenBuffers(1,              &o17_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o17_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o17_INDICES), o17_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
