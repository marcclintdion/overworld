GLfloat o12_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o12_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o12_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o12_VBO; 
GLuint o12_INDICES_VBO; 
//--------------------------------------
GLuint o12_EMIT; 
GLuint o12_DOT3; 
GLuint o12_SKY; 

GLuint o12_MASK0; 

//---------------------------------------------
GLfloat o12_boundingBox[6]; 


//---------------------------------------------
GLuint o12_INDEX_COUNT;    


GLuint o12_modelNumber;    


void load_o12_VBO(void)           
{
    #include    "o12_VBO.cpp"           
    glGenBuffers(1,              &o12_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o12_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o12), o12, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o12_INDICES(void)           
{
    #include    "o12_INDICES.cpp"           
    glGenBuffers(1,              &o12_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o12_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o12_INDICES), o12_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
