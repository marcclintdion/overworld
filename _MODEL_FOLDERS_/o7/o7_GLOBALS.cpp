GLfloat o7_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o7_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o7_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o7_VBO; 
GLuint o7_INDICES_VBO; 
//--------------------------------------
GLuint o7_EMIT; 
GLuint o7_DOT3; 
GLuint o7_SKY; 

GLuint o7_MASK0; 

//---------------------------------------------
GLfloat o7_boundingBox[6]; 


//---------------------------------------------
GLuint o7_INDEX_COUNT;    


GLuint o7_modelNumber;    


void load_o7_VBO(void)           
{
    #include    "o7_VBO.cpp"           
    glGenBuffers(1,              &o7_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o7_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o7), o7, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o7_INDICES(void)           
{
    #include    "o7_INDICES.cpp"           
    glGenBuffers(1,              &o7_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o7_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o7_INDICES), o7_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
