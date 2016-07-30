#include "o8_A_END.cpp"   
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//=========================================================
#if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1 
//=========================================================
    //---------
    spriteImage             = [UIImage imageNamed:@"o8_A_EMIT.png"].CGImage ; 
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
        glGenTextures(1, &o8_A_EMIT);  
        glBindTexture(GL_TEXTURE_2D, o8_A_EMIT);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o8_A_DOT3.png"].CGImage ; 
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
        glGenTextures(1, &o8_A_DOT3);  
        glBindTexture(GL_TEXTURE_2D, o8_A_DOT3);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o8_A_MASK0.png"].CGImage ; 
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
        glGenTextures(1, &o8_A_MASK0);  
        glBindTexture(GL_TEXTURE_2D, o8_A_MASK0);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
//=========================================
#elif TARGET_OS_MAC == 1 || WIN32 == 1 
//=========================================
    glGenTextures( 1, &o8_A_EMIT);
    glBindTexture( GL_TEXTURE_2D, o8_A_EMIT);
    loadTexture("_MODEL_FOLDERS_/o8_A/o8_A_EMIT.png"); 

    glGenTextures( 1, &o8_A_DOT3); 
    glBindTexture( GL_TEXTURE_2D, o8_A_DOT3);
    loadTexture("_MODEL_FOLDERS_/o8_A/o8_A_DOT3.png"); 

    glGenTextures( 1, &o8_A_SKY);
    glBindTexture( GL_TEXTURE_2D, o8_A_SKY);
    loadTexture("_MODEL_FOLDERS_/o8_A/o8_A_SKY.png"); 

    glGenTextures( 1, &o8_A_MASK0 );
    glBindTexture( GL_TEXTURE_2D, o8_A_MASK0);
    loadTexture("_MODEL_FOLDERS_/o8_A/o8_A_MASK0.png"); 

#endif 

load_o8_A_VBO();

load_o8_A_INDICES();

    o8_A_boundingBox[0] = -141.761139f;   
    o8_A_boundingBox[1] =  0.000000f;  
    o8_A_boundingBox[2] = -27.817818f;   
    o8_A_boundingBox[3] =  17.315796f;  
    o8_A_boundingBox[4] = 0.000000f;   
    o8_A_boundingBox[5] =  21.418051f;  

    modelNumber += 1;

    o8_A_modelNumber = modelNumber;


