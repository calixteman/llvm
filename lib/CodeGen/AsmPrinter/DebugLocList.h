//===--- lib/CodeGen/DebugLocList.h - DWARF debug_loc list ------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef CODEGEN_ASMPRINTER_DEBUGLOCLIST_H__
#define CODEGEN_ASMPRINTER_DEBUGLOCLIST_H__

#include "llvm/ADT/SmallVector.h"
#include "DebugLocEntry.h"

namespace llvm {
class DwarfCompileUnit;
class MCSymbol;
struct DebugLocList {
  MCSymbol *Label;
  DwarfCompileUnit *CU;
  SmallVector<DebugLocEntry, 4> List;
};
}
#endif
