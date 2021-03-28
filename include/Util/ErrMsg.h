#pragma once

namespace ErrMsg {
    namespace Class {
        namespace APFloat {
            static const char *constructor = "APFloat.constructor needs to be called with new (value: number)";
        }
        namespace APInt {
            static const char *constructor = "APInt.constructor needs to be called with new (numBits: number, value: number, isSigned?: boolean)";
        }
        namespace AllocaInst {
            static const char *constructor = "AllocaInst.constructor needs to be called with new (external: Napi::External<llvm::AllocaInst>)";
        }
        namespace Argument {
            static const char *constructor = "Argument.constructor needs to be called with"
                                             "\n\t - new (external: Napi::External<llvm::Argument>)"
                                             "\n\t - new (type: Type, name?: string, func?: Function, argNo?: number)";
        }
        namespace ArrayType {
            static const char *constructor = "ArrayType.constructor needs to be called with new (external: Napi::External<llvm::ArrayType>)";
            static const char *get = "ArrayType.get needs to be called with (elemType: Type, numElements: number)";
            static const char *isValidElementType = "ArrayType.isValidElementType needs to be called with (elemType: Type)";
        }
        namespace BasicBlock {
            static const char *constructor = "BasicBlock.constructor needs to be called with new (external: Napi::External<llvm::BasicBlock>)";
            static const char *Create = "BasicBlock.Create needs to be called with: (context: LLVMContext, name?: string, parent?: Function, insertBefore?: BasicBlock)";
        }
        namespace BranchInst {
            static const char *constructor = "BranchInst.constructor needs to be called with new (external: Napi::External<llvm::BranchInst>)";
            static const char *getSuccessor = "BranchInst.getSuccessor needs to be called with (i: number)";
        }
        namespace CallInst {
            static const char *constructor = "CallInst.constructor needs to be called with new (external: Napi::External<llvm::CallInst>)";
        }
        namespace Constant {
            static const char *constructor = "Constant.constructor needs to be called with new (external: Napi::External<llvm::Constant>)";
            static const char *getNullValue = "Constant.getNullValue needs to be called with: (type: Type)";
            static const char *getAllOnesValue = "Constant.getAllOnesValue needs to be called with: (type: Type)";
        }
        namespace ConstantFP {
            static const char *constructor = "ConstantFP.constructor needs to be called with new (external: Napi::External<llvm::ConstantFP>)";
            static const char *get = "ConstantFP.get needs to be called with:"
                                     "\n\t - (type: Type, value: number)"
                                     "\n\t - (type: Type, value: APFloat)"
                                     "\n\t - (type: Type, value: string)"
                                     "\n\t - (context: LLVMContext, value: APFloat)";
            static const char *getNaN = "ConstantFP.getNaN need to be called with (type: Type)";
        }
        namespace ConstantInt {
            static const char *constructor = "ConstantInt.constructor needs to be called with new (external: Napi::External<llvm::ConstantInt>)";
            static const char *get = "ConstantInt.get needs to be called with"
                                     "\n\t - (context: LLVMContext, value: APInt)"
                                     "\n\t - (type: Type, value: APInt)"
                                     "\n\t - (type: Type, value: number, isSigned?: boolean)"
                                     "\n\t - (type: IntegerType, value: number, isSigned?: boolean)";
        }
        namespace ConstantPointerNull {
            static const char *constructor = "ConstantPointerNull.constructor needs to ce called with new (external: Napi::External<llvm::ConstantPointerNull>)";
            static const char *get = "ConstantPointerNull.get needs to be called with (type: PointerType)";
        }
        namespace DataLayout {
            static const char *constructor = "DataLayout.constructor needs to ce called with"
                                             "\n\t - new (external: Napi::External<llvm::DataLayout>)"
                                             "\n\t - new (desc: string)";
        }
        namespace Function {
            static const char *constructor = "Function.constructor needs to ce called with new (external: Napi::External<llvm::Function>)";
            static const char *Create = "Function.Create needs to be called with: (funcType: FunctionType, linkage: number, name?: string, module?: Module)";
            static const char *getArg = "Function.getArg needs to be called with (i: number)";
        }
        namespace FunctionType {
            static const char *constructor = "FunctionType.constructor needs to ce called with new (external: Napi::External<llvm::Function>)";
            static const char *get = "FunctionType.get needs to be called with:"
                                     "\n\t - (returnType: Type, isVarArg: boolean)"
                                     "\n\t - (returnType: Type, paramTypes: Type[], isVarArg: boolean)";
        }
        namespace GlobalObject {
            static const char *constructor = "GlobalObject.constructor needs to ce called with new (external: Napi::External<llvm::GlobalObject>)";
        }
        namespace GlobalValue {
            static const char *constructor = "GlobalValue.constructor needs to ce called with new (external: Napi::External<llvm::GlobalValue>)";
        }
        namespace GlobalVariable {
            static const char *constructor = "GlobalVariable.constructor needs to ce called with"
                                             "\n\t - new (external: Napi::External<llvm::GlobalVariable>)"
                                             "\n\t - new (type: Type, isConstant: boolean, linkage: LinkageTypes, initializer?: Constant, name?: string)"
                                             "\n\t - new (module: Module, type: Type, isConstant: boolean, linkage: LinkageTypes, initializer: Constant, name?: string)";
        }
        namespace Instruction {
            static const char *constructor = "Instruction.constructor needs to ce called with new (external: Napi::External<llvm::Instruction>)";
        }
        namespace IntegerType {
            static const char *constructor = "IntegerType.constructor needs to ce called with new (external: Napi::External<llvm::IntegerType>)";
            static const char *get = "IntegerType.get needs to be called with: (context: LLVMContext, numBits: number)";
        }
        namespace IRBuilder {
            static const char *constructor = "IRBuilder.constructor needs to be called with: new (context: LLVMContext)";
            static const char *setInsertionPoint = "IRBuilder.SetInsertionPoint needs to be called with: (basicBlock: BasicBlock)";
            static const char *CreateBinOpFactory = "IRBuilder.[CreateBinaryOperation] needs to be called with: (lhs: Value, rhs: Value, name?: string)";
            static const char *CreateAlloca = "IRBuilder.CreateAlloca needs to be called with: (type: Type, arraySize?: Value, name?: string)";
            static const char *CreateBr = "IRBuilder.CreateBr needs to be called with: (destBB: BasicBlock)";
            static const char *CreateCall = "IRBuilder.CreateCall needs to be called with:"
                                            "\n\t - (callee: Value, args: Value[], name?: string)"
                                            "\n\t - (funcType: FunctionType, callee: Value, args: Value[], name?: string)";
            static const char *CreateCondBr = "IRBuilder.createCondBr needs to be called with: (cond: Value, thenBB: BasicBlock, elseBB: BasicBlock)";
            static const char *CreateLoad = "IRBuilder.CreateLoad needs to be called with: (type: Type, ptr: Value, name?: string)";
            static const char *CreateRet = "IRBuilder.CreateRet needs to be called with: (value: Value)";
            static const char *CreateStore = "IRBuilder.CreateStore needs to be called with: (value: Value, ptr: Value)";
            static const char *getInt1 = "IRBuilder.getInt1 needs to be called with (value: boolean)";
            static const char *getIntFactory = "IRBuilder.[getIntX] needs to be called with (value: number)";
            static const char *getIntN = "IRBuilder.getIntN needs to be called with (n: number, value: number)";
            static const char *getInt = "IRBuilder.getInt needs to be called with (value: APInt)";
            static const char *getIntNTy = "IRBuilder.getIntNTy needs to be called with (n: number)";
            static const char *getInt8PtrTy = "IRBuilder.getInt8PtrTy needs to be called with (addrSpace?: number)";
            static const char *getIntPtrTy = "IRBuilder.getIntPtrTy needs to be called with (dataLayout: DataLayout, addrSpace?: number)";
        }
        namespace LLVMContext {
            static const char *constructor = "LLVMContext.constructor needs to be called with new ()";
        }
        namespace LoadInst {
            static const char *constructor = "LoadInst.constructor needs to ce called with new (external: Napi::External<llvm::LoadInst>)";
        }
        namespace Module {
            static const char *constructor = "Module.constructor needs to ce called with"
                                             "\n\t - new (external: Napi::External<llvm::Module>)"
                                             "\n\t - new (moduleID: string, context: LLVMContext)";
            static const char *getFunction = "Module.getFunction needs to be called with: (name: string)";
            static const char *getGlobalVariable = "Module.getGlobalVariable needs to be called with: (name: string, allowInternal?: boolean)";
            static const char *getTypeByName = "Module.getTypeByName needs to be called with: (name: string)";
            static const char *setDataLayout = "Module.setDataLayout needs to be called with:"
                                               "\n\t - (desc: string)"
                                               "\n\t - (dataLayout: DataLayout)";
            static const char *setModuleIdentifier = "Module.setModuleIdentifier needs to be called with: (moduleID: string)";
            static const char *setSourceFileName = "Module.setSourceFileName needs to be called with: (sourceFileName: string)";
            static const char *setTargetTriple = "Module.setTargetTriple needs to be called with: (targetTriple: string)";
        }
        namespace PointerType {
            static const char *constructor = "PointerType.constructor needs to ce called with new (external: Napi::External<llvm::PointerType>)";
            static const char *get = "PointerType.get needs to be called with: (elementType: Type, addrSpace: number)";
        }
        namespace ReturnInst {
            static const char *constructor = "ReturnInst.constructor needs to ce called with new (external: Napi::External<llvm::ReturnInst>)";
        }
        namespace StoreInst {
            static const char *constructor = "StoreInst.constructor needs to ce called with new (external: Napi::External<llvm::StoreInst>)";
        }
        namespace StructType {
            static const char *constructor = "StructType.constructor needs to ce called with new (external: Napi::External<llvm::StructType>)";
        }
        namespace Type {
            static const char *constructor = "Type.constructor needs to ce called with new (external: Napi::External<llvm::Type>)";
            static const char *getPointerTo = "Type.getPointer needs to called with: (addrSpace?: number)";
            static const char *getIntNTy = "Type.getIntNTy needs to be called with: (context: LLVMContext, n: number)";
            static const char *isIntegerTy = "Type.isIntegerTy needs to be called with: (bitWidth?: number)";
            static const char *getTypeFactory = "Type.[getType] needs to be called with (context: LLVMContext)";
            static const char *getIntTypeFactory = "Type.[getIntType] needs to be called with (context: LLVMContext)";
            static const char *getPointerTypeFactory = "Type.[getPointerType] needs to be called with (context: LLVMContext, addrSpace?: number)";
        }
        namespace User {
            static const char *constructor = "User.constructor needs to ce called with new (external: Napi::External<llvm::User>)";
            static const char *getOperand = "User.getOperand needs to be called with: (i: number)";
            static const char *setOperand = "User.setOperand needs to be called with: (i: number, value: Value)";
        }
        namespace Value {
            static const char *constructor = "Value.constructor needs to ce called with new (external: Napi::External<llvm::Value>)";
            static const char *setName = "Value.setName needs to be called with (name: string)";
            static const char *replaceAllUsesWith = "Value.replaceAllUsesWith needs to be called with: (newValue: Value)";
        }
        namespace SMDiagnostic {
            static const char *constructor = "SMDiagnostic.constructor needs to be called with new ()";
        }
        namespace Target {
            static const char *constructor = "Target.constructor needs to ce called with new (external: Napi::External<llvm::Target>)";
            static const char *createTargetMachine = "Target.createTargetMachine needs to ce called with (targetTriple: string, cpu: string, features?: string)";
        }
        namespace TargetRegistry {
            static const char *lookupTarget = "TargetRegistry.lookupTarget needs to be called with (triple: string)";
        }
        namespace TargetMachine {
            static const char *constructor = "TargetMachine.constructor needs to ce called with new (external: Napi::External<llvm::TargetMachine>)";
        }
    }
    namespace Function {
        static const char *WriteBitcodeToFile = "WriteBitcodeToFile needs to be called with: (module: Module, filename: string)";
        static const char *verifyFunction = "verifyFunction needs to be called with (func: Function)";
        static const char *verifyModule = "verifyModule needs to be called with (module: Module)";
        static const char *parseIRFile = "parseIRFile needs to be called with (filename: string, err: SMDiagnostic, context: LLVMContext)";
    }
}