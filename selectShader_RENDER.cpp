

void SelectShader(var shaderNumber)
{
    if(shaderNumber ==   9)
    {
        #include    "_SHADERS/terrainSpheres/terrainSpheres_RENDER.cpp"
    }
    //-----------   
    
    if(shaderNumber ==   10)
    {
        #include    "_SHADERS/finalComposite/finalComposite_SHADER_RENDER.cpp"
    }
    //-----------     
    if(shaderNumber ==   11)
    {
        #include    "_SHADERS/terrainBase/terrainBase_RENDER.cpp"
    }
    //-----------   
    if(shaderNumber ==   12)
    {
        #include    "_SHADERS/player/player_RENDER.cpp"
    }
    //-----------   



}
