#include "o3_END.cpp"   
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//=========================================================
#if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1 
//=========================================================
    //---------
    spriteImage             = [UIImage imageNamed:@"o3_EMIT.png"].CGImage ; 
    width                   =  CGImageGetWidth(spriteImage); 
    height                  =  CGImageGetHeight(spriteImage);  
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
    spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
    CGContextRelease(spriteContext); 
        //----------- 
        glGenTextures(1, &o3_EMIT);  
        glBindTexture(GL_TEXTURE_2D, o3_EMIT);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o3_DOT3.png"].CGImage ; 
    width                   =  CGImageGetWidth(spriteImage); 
    height                  =  CGImageGetHeight(spriteImage);  
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
    spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
    CGContextRelease(spriteContext); 
        //-----------
        glGenTextures(1, &o3_DOT3);  
        glBindTexture(GL_TEXTURE_2D, o3_DOT3);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o3_MASK0.png"].CGImage ; 
    width                   =  CGImageGetWidth(spriteImage); 
    height                  =  CGImageGetHeight(spriteImage);  
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
    spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
    CGContextRelease(spriteContext); 
        //----------- 
        glGenTextures(1, &o3_MASK0);  
        glBindTexture(GL_TEXTURE_2D, o3_MASK0);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
//=========================================
#elif TARGET_OS_MAC == 1 || WIN32 == 1 
//=========================================
    glGenTextures( 1, &o3_EMIT);
    glBindTexture( GL_TEXTURE_2D, o3_EMIT);
    loadTexture("_MODEL_FOLDERS_/o3/o3_EMIT.png"); 

    glGenTextures( 1, &o3_DOT3); 
    glBindTexture( GL_TEXTURE_2D, o3_DOT3);
    loadTexture("_MODEL_FOLDERS_/o3/o3_DOT3.png"); 

    glGenTextures( 1, &o3_SKY);
    glBindTexture( GL_TEXTURE_2D, o3_SKY);
    loadTexture("_MODEL_FOLDERS_/o3/o3_SKY.png"); 

    glGenTextures( 1, &o3_MASK0 );
    glBindTexture( GL_TEXTURE_2D, o3_MASK0);
    loadTexture("_MODEL_FOLDERS_/o3/o3_MASK0.png"); 

#endif 

load_o3_VBO();

load_o3_INDICES();

    o3_boundingBox[0] = -61.832790f;   
    o3_boundingBox[1] =  0.000000f;  
    o3_boundingBox[2] = 0.000000f;   
    o3_boundingBox[3] =  50.785515f;  
    o3_boundingBox[4] = 0.000000f;   
    o3_boundingBox[5] =  31.045609f;  

    modelNumber += 1;

    o3_modelNumber = modelNumber;


