typedef int LLVMBool;typedef struct LLVMOpaqueContext *LLVMContextRef;

typedef struct LLVMOpaqueModule *LLVMModuleRef;

typedef struct LLVMOpaqueType *LLVMTypeRef;typedef struct LLVMOpaqueTypeHandle *LLVMTypeHandleRef;

typedef struct LLVMOpaqueValue *LLVMValueRef;
typedef struct LLVMOpaqueBasicBlock *LLVMBasicBlockRef;
typedef struct LLVMOpaqueBuilder *LLVMBuilderRef;

typedef struct LLVMOpaqueModuleProvider *LLVMModuleProviderRef;
typedef struct LLVMOpaqueMemoryBuffer *LLVMMemoryBufferRef;typedef struct LLVMOpaquePassManager *LLVMPassManagerRef;typedef struct LLVMOpaquePassRegistry *LLVMPassRegistryRef;typedef struct LLVMOpaqueUse *LLVMUseRef;

typedef enum {
    LLVMZExtAttribute = 1<<0,
    LLVMSExtAttribute = 1<<1,
    LLVMNoReturnAttribute = 1<<2,
    LLVMInRegAttribute = 1<<3,
    LLVMStructRetAttribute = 1<<4,
    LLVMNoUnwindAttribute = 1<<5,
    LLVMNoAliasAttribute = 1<<6,
    LLVMByValAttribute = 1<<7,
    LLVMNestAttribute = 1<<8,
    LLVMReadNoneAttribute = 1<<9,
    LLVMReadOnlyAttribute = 1<<10,
    LLVMNoInlineAttribute = 1<<11,
    LLVMAlwaysInlineAttribute = 1<<12,
    LLVMOptimizeForSizeAttribute = 1<<13,
    LLVMStackProtectAttribute = 1<<14,
    LLVMStackProtectReqAttribute = 1<<15,
    LLVMAlignment = 31<<16,
    LLVMNoCaptureAttribute = 1<<21,
    LLVMNoRedZoneAttribute = 1<<22,
    LLVMNoImplicitFloatAttribute = 1<<23,
    LLVMNakedAttribute = 1<<24,
    LLVMInlineHintAttribute = 1<<25,
    LLVMStackAlignment = 7<<26
} LLVMAttribute;

typedef enum {

  LLVMRet = 1,
  LLVMBr = 2,
  LLVMSwitch = 3,
  LLVMIndirectBr = 4,
  LLVMInvoke = 5,
  LLVMUnwind = 6,
  LLVMUnreachable = 7,  LLVMAdd = 8,
  LLVMFAdd = 9,
  LLVMSub = 10,
  LLVMFSub = 11,
  LLVMMul = 12,
  LLVMFMul = 13,
  LLVMUDiv = 14,
  LLVMSDiv = 15,
  LLVMFDiv = 16,
  LLVMURem = 17,
  LLVMSRem = 18,
  LLVMFRem = 19,  LLVMShl = 20,
  LLVMLShr = 21,
  LLVMAShr = 22,
  LLVMAnd = 23,
  LLVMOr = 24,
  LLVMXor = 25,  LLVMAlloca = 26,
  LLVMLoad = 27,
  LLVMStore = 28,
  LLVMGetElementPtr = 29,  LLVMTrunc = 30,
  LLVMZExt = 31,
  LLVMSExt = 32,
  LLVMFPToUI = 33,
  LLVMFPToSI = 34,
  LLVMUIToFP = 35,
  LLVMSIToFP = 36,
  LLVMFPTrunc = 37,
  LLVMFPExt = 38,
  LLVMPtrToInt = 39,
  LLVMIntToPtr = 40,
  LLVMBitCast = 41,  LLVMICmp = 42,
  LLVMFCmp = 43,
  LLVMPHI = 44,
  LLVMCall = 45,
  LLVMSelect = 46,  LLVMVAArg = 49,
  LLVMExtractElement = 50,
  LLVMInsertElement = 51,
  LLVMShuffleVector = 52,
  LLVMExtractValue = 53,
  LLVMInsertValue = 54
} LLVMOpcode;

typedef enum {
  LLVMVoidTypeKind,
  LLVMFloatTypeKind,
  LLVMDoubleTypeKind,
  LLVMX86_FP80TypeKind,
  LLVMFP128TypeKind,
  LLVMPPC_FP128TypeKind,
  LLVMLabelTypeKind,
  LLVMIntegerTypeKind,
  LLVMFunctionTypeKind,
  LLVMStructTypeKind,
  LLVMArrayTypeKind,
  LLVMPointerTypeKind,
  LLVMOpaqueTypeKind,
  LLVMVectorTypeKind,
  LLVMMetadataTypeKind,
  LLVMX86_MMXTypeKind
} LLVMTypeKind;

typedef enum {
  LLVMExternalLinkage,
  LLVMAvailableExternallyLinkage,
  LLVMLinkOnceAnyLinkage,
  LLVMLinkOnceODRLinkage,

  LLVMWeakAnyLinkage,
  LLVMWeakODRLinkage,

  LLVMAppendingLinkage,
  LLVMInternalLinkage,

  LLVMPrivateLinkage,
  LLVMDLLImportLinkage,
  LLVMDLLExportLinkage,
  LLVMExternalWeakLinkage,
  LLVMGhostLinkage,
  LLVMCommonLinkage,
  LLVMLinkerPrivateLinkage,
  LLVMLinkerPrivateWeakLinkage,
  LLVMLinkerPrivateWeakDefAutoLinkage

} LLVMLinkage;

typedef enum {
  LLVMDefaultVisibility,
  LLVMHiddenVisibility,
  LLVMProtectedVisibility
} LLVMVisibility;

typedef enum {
  LLVMCCallConv = 0,
  LLVMFastCallConv = 8,
  LLVMColdCallConv = 9,
  LLVMX86StdcallCallConv = 64,
  LLVMX86FastcallCallConv = 65
} LLVMCallConv;

typedef enum {
  LLVMIntEQ = 32,
  LLVMIntNE,
  LLVMIntUGT,
  LLVMIntUGE,
  LLVMIntULT,
  LLVMIntULE,
  LLVMIntSGT,
  LLVMIntSGE,
  LLVMIntSLT,
  LLVMIntSLE
} LLVMIntPredicate;

typedef enum {
  LLVMRealPredicateFalse,
  LLVMRealOEQ,
  LLVMRealOGT,
  LLVMRealOGE,
  LLVMRealOLT,
  LLVMRealOLE,
  LLVMRealONE,
  LLVMRealORD,
  LLVMRealUNO,
  LLVMRealUEQ,
  LLVMRealUGT,
  LLVMRealUGE,
  LLVMRealULT,
  LLVMRealULE,
  LLVMRealUNE,
  LLVMRealPredicateTrue
} LLVMRealPredicate;
void LLVMDisposeMessage(char *Message);

LLVMContextRef LLVMContextCreate(void);
LLVMContextRef LLVMGetGlobalContext(void);
void LLVMContextDispose(LLVMContextRef C);

unsigned LLVMGetMDKindIDInContext(LLVMContextRef C, const char* Name,
                                  unsigned SLen);
unsigned LLVMGetMDKindID(const char* Name, unsigned SLen);

LLVMModuleRef LLVMModuleCreateWithName(const char *ModuleID);
LLVMModuleRef LLVMModuleCreateWithNameInContext(const char *ModuleID,
                                                LLVMContextRef C);void LLVMDisposeModule(LLVMModuleRef M);const char *LLVMGetDataLayout(LLVMModuleRef M);
void LLVMSetDataLayout(LLVMModuleRef M, const char *Triple);const char *LLVMGetTarget(LLVMModuleRef M);
void LLVMSetTarget(LLVMModuleRef M, const char *Triple);LLVMBool LLVMAddTypeName(LLVMModuleRef M, const char *Name, LLVMTypeRef Ty);
void LLVMDeleteTypeName(LLVMModuleRef M, const char *Name);
LLVMTypeRef LLVMGetTypeByName(LLVMModuleRef M, const char *Name);
const char *LLVMGetTypeName(LLVMModuleRef M, LLVMTypeRef Ty);void LLVMDumpModule(LLVMModuleRef M);void LLVMSetModuleInlineAsm(LLVMModuleRef M, const char *Asm);LLVMContextRef LLVMGetModuleContext(LLVMModuleRef M);
LLVMTypeKind LLVMGetTypeKind(LLVMTypeRef Ty);LLVMContextRef LLVMGetTypeContext(LLVMTypeRef Ty);LLVMTypeRef LLVMInt1TypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMInt8TypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMInt16TypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMInt32TypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMInt64TypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMIntTypeInContext(LLVMContextRef C, unsigned NumBits);

LLVMTypeRef LLVMInt1Type(void);
LLVMTypeRef LLVMInt8Type(void);
LLVMTypeRef LLVMInt16Type(void);
LLVMTypeRef LLVMInt32Type(void);
LLVMTypeRef LLVMInt64Type(void);
LLVMTypeRef LLVMIntType(unsigned NumBits);
unsigned LLVMGetIntTypeWidth(LLVMTypeRef IntegerTy);LLVMTypeRef LLVMFloatTypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMDoubleTypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMX86FP80TypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMFP128TypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMPPCFP128TypeInContext(LLVMContextRef C);

LLVMTypeRef LLVMFloatType(void);
LLVMTypeRef LLVMDoubleType(void);
LLVMTypeRef LLVMX86FP80Type(void);
LLVMTypeRef LLVMFP128Type(void);
LLVMTypeRef LLVMPPCFP128Type(void);LLVMTypeRef LLVMFunctionType(LLVMTypeRef ReturnType,
                             LLVMTypeRef *ParamTypes, unsigned ParamCount,
                             LLVMBool IsVarArg);
LLVMBool LLVMIsFunctionVarArg(LLVMTypeRef FunctionTy);
LLVMTypeRef LLVMGetReturnType(LLVMTypeRef FunctionTy);
unsigned LLVMCountParamTypes(LLVMTypeRef FunctionTy);
void LLVMGetParamTypes(LLVMTypeRef FunctionTy, LLVMTypeRef *Dest);LLVMTypeRef LLVMStructTypeInContext(LLVMContextRef C, LLVMTypeRef *ElementTypes,
                                    unsigned ElementCount, LLVMBool Packed);
LLVMTypeRef LLVMStructType(LLVMTypeRef *ElementTypes, unsigned ElementCount,
                           LLVMBool Packed);
unsigned LLVMCountStructElementTypes(LLVMTypeRef StructTy);
void LLVMGetStructElementTypes(LLVMTypeRef StructTy, LLVMTypeRef *Dest);
LLVMBool LLVMIsPackedStruct(LLVMTypeRef StructTy);LLVMTypeRef LLVMArrayType(LLVMTypeRef ElementType, unsigned ElementCount);
LLVMTypeRef LLVMPointerType(LLVMTypeRef ElementType, unsigned AddressSpace);
LLVMTypeRef LLVMVectorType(LLVMTypeRef ElementType, unsigned ElementCount);

LLVMTypeRef LLVMGetElementType(LLVMTypeRef Ty);
unsigned LLVMGetArrayLength(LLVMTypeRef ArrayTy);
unsigned LLVMGetPointerAddressSpace(LLVMTypeRef PointerTy);
unsigned LLVMGetVectorSize(LLVMTypeRef VectorTy);LLVMTypeRef LLVMVoidTypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMLabelTypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMOpaqueTypeInContext(LLVMContextRef C);
LLVMTypeRef LLVMX86MMXTypeInContext(LLVMContextRef C);

LLVMTypeRef LLVMVoidType(void);
LLVMTypeRef LLVMLabelType(void);
LLVMTypeRef LLVMOpaqueType(void);
LLVMTypeRef LLVMX86MMXType(void);LLVMTypeHandleRef LLVMCreateTypeHandle(LLVMTypeRef PotentiallyAbstractTy);
void LLVMRefineType(LLVMTypeRef AbstractTy, LLVMTypeRef ConcreteTy);
LLVMTypeRef LLVMResolveTypeHandle(LLVMTypeHandleRef TypeHandle);
void LLVMDisposeTypeHandle(LLVMTypeHandleRef TypeHandle);
LLVMTypeRef LLVMTypeOf(LLVMValueRef Val);
const char *LLVMGetValueName(LLVMValueRef Val);
void LLVMSetValueName(LLVMValueRef Val, const char *Name);
void LLVMDumpValue(LLVMValueRef Val);
void LLVMReplaceAllUsesWith(LLVMValueRef OldVal, LLVMValueRef NewVal);
int LLVMHasMetadata(LLVMValueRef Val);
LLVMValueRef LLVMGetMetadata(LLVMValueRef Val, unsigned KindID);
void LLVMSetMetadata(LLVMValueRef Val, unsigned KindID, LLVMValueRef Node);

LLVMValueRef LLVMIsAArgument(LLVMValueRef Val); 
LLVMValueRef LLVMIsABasicBlock(LLVMValueRef Val); 
LLVMValueRef LLVMIsAInlineAsm(LLVMValueRef Val); 
LLVMValueRef LLVMIsAUser(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstant(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstantAggregateZero(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstantArray(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstantExpr(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstantFP(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstantInt(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstantPointerNull(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstantStruct(LLVMValueRef Val); 
LLVMValueRef LLVMIsAConstantVector(LLVMValueRef Val); 
LLVMValueRef LLVMIsAGlobalValue(LLVMValueRef Val); 
LLVMValueRef LLVMIsAFunction(LLVMValueRef Val); 
LLVMValueRef LLVMIsAGlobalAlias(LLVMValueRef Val); 
LLVMValueRef LLVMIsAGlobalVariable(LLVMValueRef Val); 
LLVMValueRef LLVMIsAUndefValue(LLVMValueRef Val); 
LLVMValueRef LLVMIsAInstruction(LLVMValueRef Val); 
LLVMValueRef LLVMIsABinaryOperator(LLVMValueRef Val); 
LLVMValueRef LLVMIsACallInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAIntrinsicInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsADbgInfoIntrinsic(LLVMValueRef Val); 
LLVMValueRef LLVMIsADbgDeclareInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAEHSelectorInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAMemIntrinsic(LLVMValueRef Val); 
LLVMValueRef LLVMIsAMemCpyInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAMemMoveInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAMemSetInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsACmpInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAFCmpInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAICmpInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAExtractElementInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAGetElementPtrInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAInsertElementInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAInsertValueInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAPHINode(LLVMValueRef Val); 
LLVMValueRef LLVMIsASelectInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAShuffleVectorInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAStoreInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsATerminatorInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsABranchInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAInvokeInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAReturnInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsASwitchInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAUnreachableInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAUnwindInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAUnaryInstruction(LLVMValueRef Val); 
LLVMValueRef LLVMIsAAllocaInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsACastInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsABitCastInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAFPExtInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAFPToSIInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAFPToUIInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAFPTruncInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAIntToPtrInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAPtrToIntInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsASExtInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsASIToFPInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsATruncInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAUIToFPInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAZExtInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAExtractValueInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsALoadInst(LLVMValueRef Val); 
LLVMValueRef LLVMIsAVAArgInst(LLVMValueRef Val);LLVMUseRef LLVMGetFirstUse(LLVMValueRef Val);
LLVMUseRef LLVMGetNextUse(LLVMUseRef U);
LLVMValueRef LLVMGetUser(LLVMUseRef U);
LLVMValueRef LLVMGetUsedValue(LLVMUseRef U);LLVMValueRef LLVMGetOperand(LLVMValueRef Val, unsigned Index);
void LLVMSetOperand(LLVMValueRef User, unsigned Index, LLVMValueRef Val);
int LLVMGetNumOperands(LLVMValueRef Val);LLVMValueRef LLVMConstNull(LLVMTypeRef Ty);
LLVMValueRef LLVMConstAllOnes(LLVMTypeRef Ty);
LLVMValueRef LLVMGetUndef(LLVMTypeRef Ty);
LLVMBool LLVMIsConstant(LLVMValueRef Val);
LLVMBool LLVMIsNull(LLVMValueRef Val);
LLVMBool LLVMIsUndef(LLVMValueRef Val);
LLVMValueRef LLVMConstPointerNull(LLVMTypeRef Ty);LLVMValueRef LLVMMDStringInContext(LLVMContextRef C, const char *Str,
                                   unsigned SLen);
LLVMValueRef LLVMMDString(const char *Str, unsigned SLen);
LLVMValueRef LLVMMDNodeInContext(LLVMContextRef C, LLVMValueRef *Vals,
                                 unsigned Count);
LLVMValueRef LLVMMDNode(LLVMValueRef *Vals, unsigned Count);LLVMValueRef LLVMConstInt(LLVMTypeRef IntTy, unsigned long long N,
                          LLVMBool SignExtend);
LLVMValueRef LLVMConstIntOfArbitraryPrecision(LLVMTypeRef IntTy,
                                              unsigned NumWords,
                                              const uint64_t Words[]);
LLVMValueRef LLVMConstIntOfString(LLVMTypeRef IntTy, const char *Text,
                                  uint8_t Radix);
LLVMValueRef LLVMConstIntOfStringAndSize(LLVMTypeRef IntTy, const char *Text,
                                         unsigned SLen, uint8_t Radix);
LLVMValueRef LLVMConstReal(LLVMTypeRef RealTy, double N);
LLVMValueRef LLVMConstRealOfString(LLVMTypeRef RealTy, const char *Text);
LLVMValueRef LLVMConstRealOfStringAndSize(LLVMTypeRef RealTy, const char *Text,
                                          unsigned SLen);
unsigned long long LLVMConstIntGetZExtValue(LLVMValueRef ConstantVal);
long long LLVMConstIntGetSExtValue(LLVMValueRef ConstantVal);LLVMValueRef LLVMConstStringInContext(LLVMContextRef C, const char *Str,
                                      unsigned Length, LLVMBool DontNullTerminate);
LLVMValueRef LLVMConstStructInContext(LLVMContextRef C,
                                      LLVMValueRef *ConstantVals,
                                      unsigned Count, LLVMBool Packed);

LLVMValueRef LLVMConstString(const char *Str, unsigned Length,
                             LLVMBool DontNullTerminate);
LLVMValueRef LLVMConstArray(LLVMTypeRef ElementTy,
                            LLVMValueRef *ConstantVals, unsigned Length);
LLVMValueRef LLVMConstStruct(LLVMValueRef *ConstantVals, unsigned Count,
                             LLVMBool Packed);
LLVMValueRef LLVMConstVector(LLVMValueRef *ScalarConstantVals, unsigned Size);LLVMOpcode LLVMGetConstOpcode(LLVMValueRef ConstantVal);
LLVMValueRef LLVMAlignOf(LLVMTypeRef Ty);
LLVMValueRef LLVMSizeOf(LLVMTypeRef Ty);
LLVMValueRef LLVMConstNeg(LLVMValueRef ConstantVal);
LLVMValueRef LLVMConstNSWNeg(LLVMValueRef ConstantVal);
LLVMValueRef LLVMConstNUWNeg(LLVMValueRef ConstantVal);
LLVMValueRef LLVMConstFNeg(LLVMValueRef ConstantVal);
LLVMValueRef LLVMConstNot(LLVMValueRef ConstantVal);
LLVMValueRef LLVMConstAdd(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstNSWAdd(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstNUWAdd(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstFAdd(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstSub(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstNSWSub(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstNUWSub(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstFSub(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstMul(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstNSWMul(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstNUWMul(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstFMul(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstUDiv(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstSDiv(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstExactSDiv(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstFDiv(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstURem(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstSRem(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstFRem(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstAnd(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstOr(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstXor(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstICmp(LLVMIntPredicate Predicate,
                           LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstFCmp(LLVMRealPredicate Predicate,
                           LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstShl(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstLShr(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstAShr(LLVMValueRef LHSConstant, LLVMValueRef RHSConstant);
LLVMValueRef LLVMConstGEP(LLVMValueRef ConstantVal,
                          LLVMValueRef *ConstantIndices, unsigned NumIndices);
LLVMValueRef LLVMConstInBoundsGEP(LLVMValueRef ConstantVal,
                                  LLVMValueRef *ConstantIndices,
                                  unsigned NumIndices);
LLVMValueRef LLVMConstTrunc(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstSExt(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstZExt(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstFPTrunc(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstFPExt(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstUIToFP(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstSIToFP(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstFPToUI(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstFPToSI(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstPtrToInt(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstIntToPtr(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstBitCast(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstZExtOrBitCast(LLVMValueRef ConstantVal,
                                    LLVMTypeRef ToType);
LLVMValueRef LLVMConstSExtOrBitCast(LLVMValueRef ConstantVal,
                                    LLVMTypeRef ToType);
LLVMValueRef LLVMConstTruncOrBitCast(LLVMValueRef ConstantVal,
                                     LLVMTypeRef ToType);
LLVMValueRef LLVMConstPointerCast(LLVMValueRef ConstantVal,
                                  LLVMTypeRef ToType);
LLVMValueRef LLVMConstIntCast(LLVMValueRef ConstantVal, LLVMTypeRef ToType,
                              LLVMBool isSigned);
LLVMValueRef LLVMConstFPCast(LLVMValueRef ConstantVal, LLVMTypeRef ToType);
LLVMValueRef LLVMConstSelect(LLVMValueRef ConstantCondition,
                             LLVMValueRef ConstantIfTrue,
                             LLVMValueRef ConstantIfFalse);
LLVMValueRef LLVMConstExtractElement(LLVMValueRef VectorConstant,
                                     LLVMValueRef IndexConstant);
LLVMValueRef LLVMConstInsertElement(LLVMValueRef VectorConstant,
                                    LLVMValueRef ElementValueConstant,
                                    LLVMValueRef IndexConstant);
LLVMValueRef LLVMConstShuffleVector(LLVMValueRef VectorAConstant,
                                    LLVMValueRef VectorBConstant,
                                    LLVMValueRef MaskConstant);
LLVMValueRef LLVMConstExtractValue(LLVMValueRef AggConstant, unsigned *IdxList,
                                   unsigned NumIdx);
LLVMValueRef LLVMConstInsertValue(LLVMValueRef AggConstant,
                                  LLVMValueRef ElementValueConstant,
                                  unsigned *IdxList, unsigned NumIdx);
LLVMValueRef LLVMConstInlineAsm(LLVMTypeRef Ty,
                                const char *AsmString, const char *Constraints,
                                LLVMBool HasSideEffects, LLVMBool IsAlignStack);
LLVMValueRef LLVMBlockAddress(LLVMValueRef F, LLVMBasicBlockRef BB);LLVMModuleRef LLVMGetGlobalParent(LLVMValueRef Global);
LLVMBool LLVMIsDeclaration(LLVMValueRef Global);
LLVMLinkage LLVMGetLinkage(LLVMValueRef Global);
void LLVMSetLinkage(LLVMValueRef Global, LLVMLinkage Linkage);
const char *LLVMGetSection(LLVMValueRef Global);
void LLVMSetSection(LLVMValueRef Global, const char *Section);
LLVMVisibility LLVMGetVisibility(LLVMValueRef Global);
void LLVMSetVisibility(LLVMValueRef Global, LLVMVisibility Viz);
unsigned LLVMGetAlignment(LLVMValueRef Global);
void LLVMSetAlignment(LLVMValueRef Global, unsigned Bytes);LLVMValueRef LLVMAddGlobal(LLVMModuleRef M, LLVMTypeRef Ty, const char *Name);
LLVMValueRef LLVMAddGlobalInAddressSpace(LLVMModuleRef M, LLVMTypeRef Ty,
                                         const char *Name,
                                         unsigned AddressSpace);
LLVMValueRef LLVMGetNamedGlobal(LLVMModuleRef M, const char *Name);
LLVMValueRef LLVMGetFirstGlobal(LLVMModuleRef M);
LLVMValueRef LLVMGetLastGlobal(LLVMModuleRef M);
LLVMValueRef LLVMGetNextGlobal(LLVMValueRef GlobalVar);
LLVMValueRef LLVMGetPreviousGlobal(LLVMValueRef GlobalVar);
void LLVMDeleteGlobal(LLVMValueRef GlobalVar);
LLVMValueRef LLVMGetInitializer(LLVMValueRef GlobalVar);
void LLVMSetInitializer(LLVMValueRef GlobalVar, LLVMValueRef ConstantVal);
LLVMBool LLVMIsThreadLocal(LLVMValueRef GlobalVar);
void LLVMSetThreadLocal(LLVMValueRef GlobalVar, LLVMBool IsThreadLocal);
LLVMBool LLVMIsGlobalConstant(LLVMValueRef GlobalVar);
void LLVMSetGlobalConstant(LLVMValueRef GlobalVar, LLVMBool IsConstant);LLVMValueRef LLVMAddAlias(LLVMModuleRef M, LLVMTypeRef Ty, LLVMValueRef Aliasee,
                          const char *Name);LLVMValueRef LLVMAddFunction(LLVMModuleRef M, const char *Name,
                             LLVMTypeRef FunctionTy);
LLVMValueRef LLVMGetNamedFunction(LLVMModuleRef M, const char *Name);
LLVMValueRef LLVMGetFirstFunction(LLVMModuleRef M);
LLVMValueRef LLVMGetLastFunction(LLVMModuleRef M);
LLVMValueRef LLVMGetNextFunction(LLVMValueRef Fn);
LLVMValueRef LLVMGetPreviousFunction(LLVMValueRef Fn);
void LLVMDeleteFunction(LLVMValueRef Fn);
unsigned LLVMGetIntrinsicID(LLVMValueRef Fn);
unsigned LLVMGetFunctionCallConv(LLVMValueRef Fn);
void LLVMSetFunctionCallConv(LLVMValueRef Fn, unsigned CC);
const char *LLVMGetGC(LLVMValueRef Fn);
void LLVMSetGC(LLVMValueRef Fn, const char *Name);
void LLVMAddFunctionAttr(LLVMValueRef Fn, LLVMAttribute PA);
LLVMAttribute LLVMGetFunctionAttr(LLVMValueRef Fn);
void LLVMRemoveFunctionAttr(LLVMValueRef Fn, LLVMAttribute PA);unsigned LLVMCountParams(LLVMValueRef Fn);
void LLVMGetParams(LLVMValueRef Fn, LLVMValueRef *Params);
LLVMValueRef LLVMGetParam(LLVMValueRef Fn, unsigned Index);
LLVMValueRef LLVMGetParamParent(LLVMValueRef Inst);
LLVMValueRef LLVMGetFirstParam(LLVMValueRef Fn);
LLVMValueRef LLVMGetLastParam(LLVMValueRef Fn);
LLVMValueRef LLVMGetNextParam(LLVMValueRef Arg);
LLVMValueRef LLVMGetPreviousParam(LLVMValueRef Arg);
void LLVMAddAttribute(LLVMValueRef Arg, LLVMAttribute PA);
void LLVMRemoveAttribute(LLVMValueRef Arg, LLVMAttribute PA);
LLVMAttribute LLVMGetAttribute(LLVMValueRef Arg);
void LLVMSetParamAlignment(LLVMValueRef Arg, unsigned align);LLVMValueRef LLVMBasicBlockAsValue(LLVMBasicBlockRef BB);
LLVMBool LLVMValueIsBasicBlock(LLVMValueRef Val);
LLVMBasicBlockRef LLVMValueAsBasicBlock(LLVMValueRef Val);
LLVMValueRef LLVMGetBasicBlockParent(LLVMBasicBlockRef BB);
unsigned LLVMCountBasicBlocks(LLVMValueRef Fn);
void LLVMGetBasicBlocks(LLVMValueRef Fn, LLVMBasicBlockRef *BasicBlocks);
LLVMBasicBlockRef LLVMGetFirstBasicBlock(LLVMValueRef Fn);
LLVMBasicBlockRef LLVMGetLastBasicBlock(LLVMValueRef Fn);
LLVMBasicBlockRef LLVMGetNextBasicBlock(LLVMBasicBlockRef BB);
LLVMBasicBlockRef LLVMGetPreviousBasicBlock(LLVMBasicBlockRef BB);
LLVMBasicBlockRef LLVMGetEntryBasicBlock(LLVMValueRef Fn);

LLVMBasicBlockRef LLVMAppendBasicBlockInContext(LLVMContextRef C,
                                                LLVMValueRef Fn,
                                                const char *Name);
LLVMBasicBlockRef LLVMInsertBasicBlockInContext(LLVMContextRef C,
                                                LLVMBasicBlockRef BB,
                                                const char *Name);

LLVMBasicBlockRef LLVMAppendBasicBlock(LLVMValueRef Fn, const char *Name);
LLVMBasicBlockRef LLVMInsertBasicBlock(LLVMBasicBlockRef InsertBeforeBB,
                                       const char *Name);
void LLVMDeleteBasicBlock(LLVMBasicBlockRef BB);

void LLVMMoveBasicBlockBefore(LLVMBasicBlockRef BB, LLVMBasicBlockRef MovePos);
void LLVMMoveBasicBlockAfter(LLVMBasicBlockRef BB, LLVMBasicBlockRef MovePos);LLVMBasicBlockRef LLVMGetInstructionParent(LLVMValueRef Inst);
LLVMValueRef LLVMGetFirstInstruction(LLVMBasicBlockRef BB);
LLVMValueRef LLVMGetLastInstruction(LLVMBasicBlockRef BB);
LLVMValueRef LLVMGetNextInstruction(LLVMValueRef Inst);
LLVMValueRef LLVMGetPreviousInstruction(LLVMValueRef Inst);void LLVMSetInstructionCallConv(LLVMValueRef Instr, unsigned CC);
unsigned LLVMGetInstructionCallConv(LLVMValueRef Instr);
void LLVMAddInstrAttribute(LLVMValueRef Instr, unsigned index, LLVMAttribute);
void LLVMRemoveInstrAttribute(LLVMValueRef Instr, unsigned index,
                              LLVMAttribute);
void LLVMSetInstrParamAlignment(LLVMValueRef Instr, unsigned index,
                                unsigned align);LLVMBool LLVMIsTailCall(LLVMValueRef CallInst);
void LLVMSetTailCall(LLVMValueRef CallInst, LLVMBool IsTailCall);void LLVMAddIncoming(LLVMValueRef PhiNode, LLVMValueRef *IncomingValues,
                     LLVMBasicBlockRef *IncomingBlocks, unsigned Count);
unsigned LLVMCountIncoming(LLVMValueRef PhiNode);
LLVMValueRef LLVMGetIncomingValue(LLVMValueRef PhiNode, unsigned Index);
LLVMBasicBlockRef LLVMGetIncomingBlock(LLVMValueRef PhiNode, unsigned Index);LLVMBuilderRef LLVMCreateBuilderInContext(LLVMContextRef C);
LLVMBuilderRef LLVMCreateBuilder(void);
void LLVMPositionBuilder(LLVMBuilderRef Builder, LLVMBasicBlockRef Block,
                         LLVMValueRef Instr);
void LLVMPositionBuilderBefore(LLVMBuilderRef Builder, LLVMValueRef Instr);
void LLVMPositionBuilderAtEnd(LLVMBuilderRef Builder, LLVMBasicBlockRef Block);
LLVMBasicBlockRef LLVMGetInsertBlock(LLVMBuilderRef Builder);
void LLVMClearInsertionPosition(LLVMBuilderRef Builder);
void LLVMInsertIntoBuilder(LLVMBuilderRef Builder, LLVMValueRef Instr);
void LLVMInsertIntoBuilderWithName(LLVMBuilderRef Builder, LLVMValueRef Instr,
                                   const char *Name);
void LLVMDisposeBuilder(LLVMBuilderRef Builder);void LLVMSetCurrentDebugLocation(LLVMBuilderRef Builder, LLVMValueRef L);
LLVMValueRef LLVMGetCurrentDebugLocation(LLVMBuilderRef Builder);
void LLVMSetInstDebugLocation(LLVMBuilderRef Builder, LLVMValueRef Inst);LLVMValueRef LLVMBuildRetVoid(LLVMBuilderRef);
LLVMValueRef LLVMBuildRet(LLVMBuilderRef, LLVMValueRef V);
LLVMValueRef LLVMBuildAggregateRet(LLVMBuilderRef, LLVMValueRef *RetVals,
                                   unsigned N);
LLVMValueRef LLVMBuildBr(LLVMBuilderRef, LLVMBasicBlockRef Dest);
LLVMValueRef LLVMBuildCondBr(LLVMBuilderRef, LLVMValueRef If,
                             LLVMBasicBlockRef Then, LLVMBasicBlockRef Else);
LLVMValueRef LLVMBuildSwitch(LLVMBuilderRef, LLVMValueRef V,
                             LLVMBasicBlockRef Else, unsigned NumCases);
LLVMValueRef LLVMBuildIndirectBr(LLVMBuilderRef B, LLVMValueRef Addr,
                                 unsigned NumDests);
LLVMValueRef LLVMBuildInvoke(LLVMBuilderRef, LLVMValueRef Fn,
                             LLVMValueRef *Args, unsigned NumArgs,
                             LLVMBasicBlockRef Then, LLVMBasicBlockRef Catch,
                             const char *Name);
LLVMValueRef LLVMBuildUnwind(LLVMBuilderRef);
LLVMValueRef LLVMBuildUnreachable(LLVMBuilderRef);void LLVMAddCase(LLVMValueRef Switch, LLVMValueRef OnVal,
                 LLVMBasicBlockRef Dest);void LLVMAddDestination(LLVMValueRef IndirectBr, LLVMBasicBlockRef Dest);LLVMValueRef LLVMBuildAdd(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                          const char *Name);
LLVMValueRef LLVMBuildNSWAdd(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                             const char *Name);
LLVMValueRef LLVMBuildNUWAdd(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                             const char *Name);
LLVMValueRef LLVMBuildFAdd(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildSub(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                          const char *Name);
LLVMValueRef LLVMBuildNSWSub(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                             const char *Name);
LLVMValueRef LLVMBuildNUWSub(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                             const char *Name);
LLVMValueRef LLVMBuildFSub(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildMul(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                          const char *Name);
LLVMValueRef LLVMBuildNSWMul(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                             const char *Name);
LLVMValueRef LLVMBuildNUWMul(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                             const char *Name);
LLVMValueRef LLVMBuildFMul(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildUDiv(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildSDiv(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildExactSDiv(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                                const char *Name);
LLVMValueRef LLVMBuildFDiv(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildURem(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildSRem(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildFRem(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildShl(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildLShr(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildAShr(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildAnd(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                          const char *Name);
LLVMValueRef LLVMBuildOr(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                          const char *Name);
LLVMValueRef LLVMBuildXor(LLVMBuilderRef, LLVMValueRef LHS, LLVMValueRef RHS,
                          const char *Name);
LLVMValueRef LLVMBuildBinOp(LLVMBuilderRef B, LLVMOpcode Op,
                            LLVMValueRef LHS, LLVMValueRef RHS,
                            const char *Name);
LLVMValueRef LLVMBuildNeg(LLVMBuilderRef, LLVMValueRef V, const char *Name);
LLVMValueRef LLVMBuildNSWNeg(LLVMBuilderRef B, LLVMValueRef V,
                             const char *Name);
LLVMValueRef LLVMBuildNUWNeg(LLVMBuilderRef B, LLVMValueRef V,
                             const char *Name);
LLVMValueRef LLVMBuildFNeg(LLVMBuilderRef, LLVMValueRef V, const char *Name);
LLVMValueRef LLVMBuildNot(LLVMBuilderRef, LLVMValueRef V, const char *Name);LLVMValueRef LLVMBuildMalloc(LLVMBuilderRef, LLVMTypeRef Ty, const char *Name);
LLVMValueRef LLVMBuildArrayMalloc(LLVMBuilderRef, LLVMTypeRef Ty,
                                  LLVMValueRef Val, const char *Name);
LLVMValueRef LLVMBuildAlloca(LLVMBuilderRef, LLVMTypeRef Ty, const char *Name);
LLVMValueRef LLVMBuildArrayAlloca(LLVMBuilderRef, LLVMTypeRef Ty,
                                  LLVMValueRef Val, const char *Name);
LLVMValueRef LLVMBuildFree(LLVMBuilderRef, LLVMValueRef PointerVal);
LLVMValueRef LLVMBuildLoad(LLVMBuilderRef, LLVMValueRef PointerVal,
                           const char *Name);
LLVMValueRef LLVMBuildStore(LLVMBuilderRef, LLVMValueRef Val, LLVMValueRef Ptr);
LLVMValueRef LLVMBuildGEP(LLVMBuilderRef B, LLVMValueRef Pointer,
                          LLVMValueRef *Indices, unsigned NumIndices,
                          const char *Name);
LLVMValueRef LLVMBuildInBoundsGEP(LLVMBuilderRef B, LLVMValueRef Pointer,
                                  LLVMValueRef *Indices, unsigned NumIndices,
                                  const char *Name);
LLVMValueRef LLVMBuildStructGEP(LLVMBuilderRef B, LLVMValueRef Pointer,
                                unsigned Idx, const char *Name);
LLVMValueRef LLVMBuildGlobalString(LLVMBuilderRef B, const char *Str,
                                   const char *Name);
LLVMValueRef LLVMBuildGlobalStringPtr(LLVMBuilderRef B, const char *Str,
                                      const char *Name);LLVMValueRef LLVMBuildTrunc(LLVMBuilderRef, LLVMValueRef Val,
                            LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildZExt(LLVMBuilderRef, LLVMValueRef Val,
                           LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildSExt(LLVMBuilderRef, LLVMValueRef Val,
                           LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildFPToUI(LLVMBuilderRef, LLVMValueRef Val,
                             LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildFPToSI(LLVMBuilderRef, LLVMValueRef Val,
                             LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildUIToFP(LLVMBuilderRef, LLVMValueRef Val,
                             LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildSIToFP(LLVMBuilderRef, LLVMValueRef Val,
                             LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildFPTrunc(LLVMBuilderRef, LLVMValueRef Val,
                              LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildFPExt(LLVMBuilderRef, LLVMValueRef Val,
                            LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildPtrToInt(LLVMBuilderRef, LLVMValueRef Val,
                               LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildIntToPtr(LLVMBuilderRef, LLVMValueRef Val,
                               LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildBitCast(LLVMBuilderRef, LLVMValueRef Val,
                              LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildZExtOrBitCast(LLVMBuilderRef, LLVMValueRef Val,
                                    LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildSExtOrBitCast(LLVMBuilderRef, LLVMValueRef Val,
                                    LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildTruncOrBitCast(LLVMBuilderRef, LLVMValueRef Val,
                                     LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildCast(LLVMBuilderRef B, LLVMOpcode Op, LLVMValueRef Val,
                           LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildPointerCast(LLVMBuilderRef, LLVMValueRef Val,
                                  LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildIntCast(LLVMBuilderRef, LLVMValueRef Val,
                              LLVMTypeRef DestTy, const char *Name);
LLVMValueRef LLVMBuildFPCast(LLVMBuilderRef, LLVMValueRef Val,
                             LLVMTypeRef DestTy, const char *Name);LLVMValueRef LLVMBuildICmp(LLVMBuilderRef, LLVMIntPredicate Op,
                           LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);
LLVMValueRef LLVMBuildFCmp(LLVMBuilderRef, LLVMRealPredicate Op,
                           LLVMValueRef LHS, LLVMValueRef RHS,
                           const char *Name);LLVMValueRef LLVMBuildPhi(LLVMBuilderRef, LLVMTypeRef Ty, const char *Name);
LLVMValueRef LLVMBuildCall(LLVMBuilderRef, LLVMValueRef Fn,
                           LLVMValueRef *Args, unsigned NumArgs,
                           const char *Name);
LLVMValueRef LLVMBuildSelect(LLVMBuilderRef, LLVMValueRef If,
                             LLVMValueRef Then, LLVMValueRef Else,
                             const char *Name);
LLVMValueRef LLVMBuildVAArg(LLVMBuilderRef, LLVMValueRef List, LLVMTypeRef Ty,
                            const char *Name);
LLVMValueRef LLVMBuildExtractElement(LLVMBuilderRef, LLVMValueRef VecVal,
                                     LLVMValueRef Index, const char *Name);
LLVMValueRef LLVMBuildInsertElement(LLVMBuilderRef, LLVMValueRef VecVal,
                                    LLVMValueRef EltVal, LLVMValueRef Index,
                                    const char *Name);
LLVMValueRef LLVMBuildShuffleVector(LLVMBuilderRef, LLVMValueRef V1,
                                    LLVMValueRef V2, LLVMValueRef Mask,
                                    const char *Name);
LLVMValueRef LLVMBuildExtractValue(LLVMBuilderRef, LLVMValueRef AggVal,
                                   unsigned Index, const char *Name);
LLVMValueRef LLVMBuildInsertValue(LLVMBuilderRef, LLVMValueRef AggVal,
                                  LLVMValueRef EltVal, unsigned Index,
                                  const char *Name);

LLVMValueRef LLVMBuildIsNull(LLVMBuilderRef, LLVMValueRef Val,
                             const char *Name);
LLVMValueRef LLVMBuildIsNotNull(LLVMBuilderRef, LLVMValueRef Val,
                                const char *Name);
LLVMValueRef LLVMBuildPtrDiff(LLVMBuilderRef, LLVMValueRef LHS,
                              LLVMValueRef RHS, const char *Name);LLVMModuleProviderRef
LLVMCreateModuleProviderForExistingModule(LLVMModuleRef M);void LLVMDisposeModuleProvider(LLVMModuleProviderRef M);
LLVMBool LLVMCreateMemoryBufferWithContentsOfFile(const char *Path,
                                                  LLVMMemoryBufferRef *OutMemBuf,
                                                  char **OutMessage);
LLVMBool LLVMCreateMemoryBufferWithSTDIN(LLVMMemoryBufferRef *OutMemBuf,
                                         char **OutMessage);
void LLVMDisposeMemoryBuffer(LLVMMemoryBufferRef MemBuf);

LLVMPassRegistryRef LLVMGetGlobalPassRegistry(void);LLVMPassManagerRef LLVMCreatePassManager(void);

LLVMPassManagerRef LLVMCreateFunctionPassManagerForModule(LLVMModuleRef M);LLVMPassManagerRef LLVMCreateFunctionPassManager(LLVMModuleProviderRef MP);
LLVMBool LLVMRunPassManager(LLVMPassManagerRef PM, LLVMModuleRef M);
LLVMBool LLVMInitializeFunctionPassManager(LLVMPassManagerRef FPM);

LLVMBool LLVMRunFunctionPassManager(LLVMPassManagerRef FPM, LLVMValueRef F);
LLVMBool LLVMFinalizeFunctionPassManager(LLVMPassManagerRef FPM);
void LLVMDisposePassManager(LLVMPassManagerRef PM);typedef enum {
  LLVMAbortProcessAction,
  LLVMPrintMessageAction,
  LLVMReturnStatusAction
} LLVMVerifierFailureAction;

LLVMBool LLVMVerifyModule(LLVMModuleRef M, LLVMVerifierFailureAction Action,
                          char **OutMessage);LLVMBool LLVMVerifyFunction(LLVMValueRef Fn, LLVMVerifierFailureAction Action);void LLVMViewFunctionCFG(LLVMValueRef Fn);
void LLVMViewFunctionCFGOnly(LLVMValueRef Fn);
LLVMBool LLVMParseBitcode(LLVMMemoryBufferRef MemBuf,
                          LLVMModuleRef *OutModule, char **OutMessage);

LLVMBool LLVMParseBitcodeInContext(LLVMContextRef ContextRef,
                                   LLVMMemoryBufferRef MemBuf,
                                   LLVMModuleRef *OutModule, char **OutMessage);
LLVMBool LLVMGetBitcodeModuleInContext(LLVMContextRef ContextRef,
                                       LLVMMemoryBufferRef MemBuf,
                                       LLVMModuleRef *OutM,
                                       char **OutMessage);

LLVMBool LLVMGetBitcodeModule(LLVMMemoryBufferRef MemBuf, LLVMModuleRef *OutM,
                              char **OutMessage);LLVMBool LLVMGetBitcodeModuleProviderInContext(LLVMContextRef ContextRef,
                                               LLVMMemoryBufferRef MemBuf,
                                               LLVMModuleProviderRef *OutMP,
                                               char **OutMessage);LLVMBool LLVMGetBitcodeModuleProvider(LLVMMemoryBufferRef MemBuf,
                                      LLVMModuleProviderRef *OutMP,
                                      char **OutMessage);
int LLVMWriteBitcodeToFile(LLVMModuleRef M, const char *Path);int LLVMWriteBitcodeToFD(LLVMModuleRef M, int FD, int ShouldClose,
                         int Unbuffered);int LLVMWriteBitcodeToFileHandle(LLVMModuleRef M, int Handle);

enum LLVMByteOrdering { LLVMBigEndian, LLVMLittleEndian };

typedef struct LLVMOpaqueTargetData *LLVMTargetDataRef;
typedef struct LLVMStructLayout *LLVMStructLayoutRef;
void LLVMInitializeX86TargetInfo(void); void LLVMInitializeX86TargetInfo(void);void LLVMInitializeX86Target(void); void LLVMInitializeX86Target(void);

static inline void LLVMInitializeAllTargetInfos(void) {

LLVMInitializeX86TargetInfo(); LLVMInitializeX86TargetInfo();

}
static inline void LLVMInitializeAllTargets(void) {

LLVMInitializeX86Target(); LLVMInitializeX86Target();

}
static inline LLVMBool LLVMInitializeNativeTarget(void) {  LLVMInitializeX86TargetInfo();
  LLVMInitializeX86Target();
  return 0;}

LLVMTargetDataRef LLVMCreateTargetData(const char *StringRep);
void LLVMAddTargetData(LLVMTargetDataRef, LLVMPassManagerRef);
char *LLVMCopyStringRepOfTargetData(LLVMTargetDataRef);
enum LLVMByteOrdering LLVMByteOrder(LLVMTargetDataRef);unsigned LLVMPointerSize(LLVMTargetDataRef);LLVMTypeRef LLVMIntPtrType(LLVMTargetDataRef);unsigned long long LLVMSizeOfTypeInBits(LLVMTargetDataRef, LLVMTypeRef);unsigned long long LLVMStoreSizeOfType(LLVMTargetDataRef, LLVMTypeRef);unsigned long long LLVMABISizeOfType(LLVMTargetDataRef, LLVMTypeRef);unsigned LLVMABIAlignmentOfType(LLVMTargetDataRef, LLVMTypeRef);unsigned LLVMCallFrameAlignmentOfType(LLVMTargetDataRef, LLVMTypeRef);unsigned LLVMPreferredAlignmentOfType(LLVMTargetDataRef, LLVMTypeRef);unsigned LLVMPreferredAlignmentOfGlobal(LLVMTargetDataRef,
                                        LLVMValueRef GlobalVar);unsigned LLVMElementAtOffset(LLVMTargetDataRef, LLVMTypeRef StructTy,
                             unsigned long long Offset);unsigned long long LLVMOffsetOfElement(LLVMTargetDataRef, LLVMTypeRef StructTy,
                                       unsigned Element);

void LLVMInvalidateStructLayout(LLVMTargetDataRef, LLVMTypeRef StructTy);void LLVMDisposeTargetData(LLVMTargetDataRef);

void LLVMLinkInJIT(void);
void LLVMLinkInInterpreter(void);

typedef struct LLVMOpaqueGenericValue *LLVMGenericValueRef;
typedef struct LLVMOpaqueExecutionEngine *LLVMExecutionEngineRef;LLVMGenericValueRef LLVMCreateGenericValueOfInt(LLVMTypeRef Ty,
                                                unsigned long long N,
                                                LLVMBool IsSigned);

LLVMGenericValueRef LLVMCreateGenericValueOfPointer(void *P);

LLVMGenericValueRef LLVMCreateGenericValueOfFloat(LLVMTypeRef Ty, double N);

unsigned LLVMGenericValueIntWidth(LLVMGenericValueRef GenValRef);

unsigned long long LLVMGenericValueToInt(LLVMGenericValueRef GenVal,
                                         LLVMBool IsSigned);

void *LLVMGenericValueToPointer(LLVMGenericValueRef GenVal);

double LLVMGenericValueToFloat(LLVMTypeRef TyRef, LLVMGenericValueRef GenVal);

void LLVMDisposeGenericValue(LLVMGenericValueRef GenVal);LLVMBool LLVMCreateExecutionEngineForModule(LLVMExecutionEngineRef *OutEE,
                                            LLVMModuleRef M,
                                            char **OutError);

LLVMBool LLVMCreateInterpreterForModule(LLVMExecutionEngineRef *OutInterp,
                                        LLVMModuleRef M,
                                        char **OutError);

LLVMBool LLVMCreateJITCompilerForModule(LLVMExecutionEngineRef *OutJIT,
                                        LLVMModuleRef M,
                                        unsigned OptLevel,
                                        char **OutError);LLVMBool LLVMCreateExecutionEngine(LLVMExecutionEngineRef *OutEE,
                                   LLVMModuleProviderRef MP,
                                   char **OutError);LLVMBool LLVMCreateInterpreter(LLVMExecutionEngineRef *OutInterp,
                               LLVMModuleProviderRef MP,
                               char **OutError);LLVMBool LLVMCreateJITCompiler(LLVMExecutionEngineRef *OutJIT,
                               LLVMModuleProviderRef MP,
                               unsigned OptLevel,
                               char **OutError);

void LLVMDisposeExecutionEngine(LLVMExecutionEngineRef EE);

void LLVMRunStaticConstructors(LLVMExecutionEngineRef EE);

void LLVMRunStaticDestructors(LLVMExecutionEngineRef EE);

int LLVMRunFunctionAsMain(LLVMExecutionEngineRef EE, LLVMValueRef F,
                          unsigned ArgC, const char * const *ArgV,
                          const char * const *EnvP);

LLVMGenericValueRef LLVMRunFunction(LLVMExecutionEngineRef EE, LLVMValueRef F,
                                    unsigned NumArgs,
                                    LLVMGenericValueRef *Args);

void LLVMFreeMachineCodeForFunction(LLVMExecutionEngineRef EE, LLVMValueRef F);

void LLVMAddModule(LLVMExecutionEngineRef EE, LLVMModuleRef M);void LLVMAddModuleProvider(LLVMExecutionEngineRef EE, LLVMModuleProviderRef MP);

LLVMBool LLVMRemoveModule(LLVMExecutionEngineRef EE, LLVMModuleRef M,
                          LLVMModuleRef *OutMod, char **OutError);LLVMBool LLVMRemoveModuleProvider(LLVMExecutionEngineRef EE,
                                  LLVMModuleProviderRef MP,
                                  LLVMModuleRef *OutMod, char **OutError);

LLVMBool LLVMFindFunction(LLVMExecutionEngineRef EE, const char *Name,
                          LLVMValueRef *OutFn);

void *LLVMRecompileAndRelinkFunction(LLVMExecutionEngineRef EE, LLVMValueRef Fn);

LLVMTargetDataRef LLVMGetExecutionEngineTargetData(LLVMExecutionEngineRef EE);

void LLVMAddGlobalMapping(LLVMExecutionEngineRef EE, LLVMValueRef Global,
                          void* Addr);

void *LLVMGetPointerToGlobal(LLVMExecutionEngineRef EE, LLVMValueRef Global);
void LLVMInitializeCore(LLVMPassRegistryRef R);
void LLVMInitializeTransformUtils(LLVMPassRegistryRef R);
void LLVMInitializeScalarOpts(LLVMPassRegistryRef R);
void LLVMInitializeInstCombine(LLVMPassRegistryRef R);
void LLVMInitializeIPO(LLVMPassRegistryRef R);
void LLVMInitializeInstrumentation(LLVMPassRegistryRef R);
void LLVMInitializeAnalysis(LLVMPassRegistryRef R);
void LLVMInitializeIPA(LLVMPassRegistryRef R);
void LLVMInitializeCodeGen(LLVMPassRegistryRef R);
void LLVMInitializeTarget(LLVMPassRegistryRef R);void LLVMAddArgumentPromotionPass(LLVMPassManagerRef PM);void LLVMAddConstantMergePass(LLVMPassManagerRef PM);void LLVMAddDeadArgEliminationPass(LLVMPassManagerRef PM);void LLVMAddDeadTypeEliminationPass(LLVMPassManagerRef PM);void LLVMAddFunctionAttrsPass(LLVMPassManagerRef PM);void LLVMAddFunctionInliningPass(LLVMPassManagerRef PM);void LLVMAddGlobalDCEPass(LLVMPassManagerRef PM);void LLVMAddGlobalOptimizerPass(LLVMPassManagerRef PM);void LLVMAddIPConstantPropagationPass(LLVMPassManagerRef PM);void LLVMAddLowerSetJmpPass(LLVMPassManagerRef PM);void LLVMAddPruneEHPass(LLVMPassManagerRef PM);void LLVMAddIPSCCPPass(LLVMPassManagerRef PM);void LLVMAddInternalizePass(LLVMPassManagerRef, unsigned AllButMain);void LLVMAddRaiseAllocationsPass(LLVMPassManagerRef PM);void LLVMAddStripDeadPrototypesPass(LLVMPassManagerRef PM);void LLVMAddStripSymbolsPass(LLVMPassManagerRef PM);

void LLVMAddAggressiveDCEPass(LLVMPassManagerRef PM);void LLVMAddCFGSimplificationPass(LLVMPassManagerRef PM);void LLVMAddDeadStoreEliminationPass(LLVMPassManagerRef PM);void LLVMAddGVNPass(LLVMPassManagerRef PM);void LLVMAddIndVarSimplifyPass(LLVMPassManagerRef PM);void LLVMAddInstructionCombiningPass(LLVMPassManagerRef PM);void LLVMAddJumpThreadingPass(LLVMPassManagerRef PM);void LLVMAddLICMPass(LLVMPassManagerRef PM);void LLVMAddLoopDeletionPass(LLVMPassManagerRef PM);void LLVMAddLoopRotatePass(LLVMPassManagerRef PM);void LLVMAddLoopUnrollPass(LLVMPassManagerRef PM);void LLVMAddLoopUnswitchPass(LLVMPassManagerRef PM);void LLVMAddMemCpyOptPass(LLVMPassManagerRef PM);void LLVMAddPromoteMemoryToRegisterPass(LLVMPassManagerRef PM);void LLVMAddReassociatePass(LLVMPassManagerRef PM);void LLVMAddSCCPPass(LLVMPassManagerRef PM);void LLVMAddScalarReplAggregatesPass(LLVMPassManagerRef PM);void LLVMAddScalarReplAggregatesPassWithThreshold(LLVMPassManagerRef PM,
                                                  int Threshold);void LLVMAddSimplifyLibCallsPass(LLVMPassManagerRef PM);void LLVMAddTailCallEliminationPass(LLVMPassManagerRef PM);void LLVMAddConstantPropagationPass(LLVMPassManagerRef PM);void LLVMAddDemoteMemoryToRegisterPass(LLVMPassManagerRef PM);void LLVMAddVerifierPass(LLVMPassManagerRef PM);
