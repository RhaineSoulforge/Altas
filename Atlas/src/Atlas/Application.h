#pragma once

#include "Core.h"
#include "Window.h"

#include "Events/ApplicationEvent.h"


namespace Atlas
{
   class ATLAS_API CApplication
   {
      public:
         CApplication();
         virtual ~CApplication();

         void Run();
         void OnEvent(CEvent& e);
      private:
         bool OnWindowClose(Atlas::CWindowCloseEvent &e);

         std::unique_ptr<CWindow> m_Window;
         bool m_bRunning = true;
   };

   // To be defined in CLIENT.
   CApplication* CreateApplication();
}