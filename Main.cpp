#include "Main.h"
#include <assert.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include "Log.h"
#include <fstream>

using namespace System;
using namespace System::Windows::Forms;
using namespace IO;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
     
    Cambiadorderealmlist::Main main;

    try
    {
        Application::Run(%main);
    }
    catch (std::exception &error)
    {
        sLog.outError("Error al lanzar la aplicacion: %s", error.what());
    }

    return 1;
}

void Cambiadorderealmlist::Main::CambiarRealm(int opcion)
{
    std:ifstream ruta ("ruta.conf")
    
    if (ruta)
    {
        if (opcion == 1)
        {
            sLog.outError("Realm 1 no implementado");
        }
        if (opcion == 2)
        {
            sLog.outError("Realm 2 no implementado");
        }
        if (opcion == 3)
        {
            sLog.outError("Realm 3 no implementado");
        }
        if (opcion == 4)
        {
        sLog.outError("Realm 4 no implementado");
        }
    }
    else if (!ruta)
    {
        sLog.OutError("No se ha elegido ninguna ruta para World Of Warcraft")
    }
}

void Cambiadorderealmlist::Main::Jugar()
{
    std::ifstream ruta ("ruta.conf");
    if (!ruta)
     {
        FILE* newFile;
        newFile = fopen("ruta.conf", "a");
        Stream^ Ruta;

        OpenFileDialog ^ string_ruta = gcnew OpenFileDialog();
        if (string_ruta->ShowDialog() == ::DialogResult::OK )
        {
            if ( (Ruta = string_ruta->OpenFile()) != nullptr )
            {
                fprintf (newFile,"%s", string_ruta);
                Ruta->Close();
            }
        }

    }
    else if (ruta)
    {
        
        
    }

}
