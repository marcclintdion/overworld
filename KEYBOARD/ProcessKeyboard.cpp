


//================================================
#include "../UI.cpp"
//--------------------
if(KEY_Z)
{
    if(CONSOLE_OUTPUT == true)
    {
        CONSOLE_OUTPUT = false;
    }
    else if(CONSOLE_OUTPUT == false)
    {
        CONSOLE_OUTPUT = true;
    }
    KEY_Z_IS_RESET = false;
}
//--------------------


//========================================================================================
if (KEY_R)
{
    //===============================================================================
    #include "../_SHADERS/terrainBase/terrainBase_INIT.cpp"
    //===============================================================================
   
}
if(KEY_M)
{
    areaBounds[0] += 0.1;
}
if(KEY_N)
{
    areaBounds[0] -= 0.1;
}
if(KEY_B)
{
    areaBounds[1] += 0.1;
}
if(KEY_V)
{
    areaBounds[1] -= 0.1;
}


if(KEY_RIGHT)
{
    setPosition[0] += 0.5;
}
if(KEY_LEFT)
{
    setPosition[0] -= 0.5;
}
if(KEY_UP)
{
    setPosition[1] += 0.5;
}
if(KEY_DOWN)
{
    setPosition[1] -= 0.5;
}

//if(CONSOLE_OUTPUT == true)
//{
    NSLog(@"setPosition[]  %f, %f, %f = ", setPosition[0], setPosition[1], setPosition[2]);

    NSLog(@"areaBounds[]  %f, %f = ", areaBounds[0], areaBounds[1]);

//}


#ifdef WIN32
if(KEY_F8)
{
    ofstream outSettings("settings.cpp");
}
#endif


