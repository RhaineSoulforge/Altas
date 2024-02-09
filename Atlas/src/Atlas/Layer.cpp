#include "atpch.h"
#include "Layer.h"

namespace Atlas
{
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // Function: CLayer
   // Last Modified:  February 9th, 2024
   // Author:  Jason A Biddle
   //
   // Purpose:  Constructor for CLayer
   //
   // In:  name - Name of the Layer(for Debug purposes only!).
   //
   // Out: None
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   CLayer::CLayer(const std::string& name) 
      : m_sDebugName(name)
   {
   }

   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // Function: ~CLayer
   // Last Modified:  February 9th, 2024
   // Author:  Jason A Biddle
   //
   // Purpose:  Destructor for CLayer
   //
   // In:  None
   //
   // Out:  None
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   CLayer::~CLayer()
   {
   }
}