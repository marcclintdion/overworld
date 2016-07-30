GLfloat o3_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o3_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o3_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o3_VBO; 
GLuint o3_INDICES_VBO; 
//--------------------------------------
GLuint o3_EMIT; 
GLuint o3_DOT3; 
GLuint o3_SKY; 

GLuint o3_MASK0; 

//---------------------------------------------
GLfloat o3_boundingBox[6]; 


//---------------------------------------------
GLuint o3_INDEX_COUNT;    


GLuint o3_modelNumber;    


void load_o3_VBO(void)           
{
    #include    "o3_VBO.cpp"           
    glGenBuffers(1,              &o3_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o3_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o3), o3, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o3_INDICES(void)           
{
    #include    "o3_INDICES.cpp"           
    glGenBuffers(1,              &o3_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o3_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o3_INDICES), o3_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
